#include <cwctype>
#include <iostream>

#include "tree_sitter/parser.h"

using namespace std;

enum TokenType : char {
    STRING_ESCAPED_CHAR,
};

struct Scanner {
    TSLexer* lexer;

    bool scan(const bool *valid_symbols) {
        if (valid_symbols[STRING_ESCAPED_CHAR] && lexer->lookahead == '\\') {
            advance();
            advance();
            lexer->result_symbol = STRING_ESCAPED_CHAR;
            return true;
        }

        return false;
    }

    inline void skip() { lexer->advance(lexer, true); }

    inline void advance() { lexer->advance(lexer, false); }
};

extern "C" {
    void *tree_sitter_erde_external_scanner_create() { return new Scanner(); }

    void tree_sitter_erde_external_scanner_destroy(void *payload) {
        delete static_cast<Scanner *>(payload);
    }

    bool tree_sitter_erde_external_scanner_scan(void *payload, TSLexer *lexer,
            const bool *valid_symbols) {
        Scanner *scanner = static_cast<Scanner*>(payload);
        scanner->lexer = lexer;
        return scanner->scan(valid_symbols);
    }

    unsigned tree_sitter_erde_external_scanner_serialize(void *payload,
            char *buffer) {
        return 0;
    }

    void tree_sitter_erde_external_scanner_deserialize(void *payload,
            const char *buffer,
            unsigned length) {}
}
