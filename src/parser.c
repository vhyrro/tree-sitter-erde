#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 46
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 37
#define ALIAS_COUNT 2
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 8

enum {
  sym_identifier = 1,
  anon_sym_DASH_DASH = 2,
  aux_sym_comment_token1 = 3,
  anon_sym_true = 4,
  anon_sym_false = 5,
  sym_number = 6,
  sym_nil = 7,
  anon_sym_SQUOTE = 8,
  aux_sym_verbatim_string_token1 = 9,
  anon_sym_SQUOTE2 = 10,
  anon_sym_LBRACE = 11,
  anon_sym_RBRACE = 12,
  anon_sym_DQUOTE = 13,
  aux_sym_string_token1 = 14,
  anon_sym_DQUOTE2 = 15,
  anon_sym_local = 16,
  anon_sym_global = 17,
  anon_sym_EQ = 18,
  anon_sym_LPAREN = 19,
  anon_sym_COMMA = 20,
  anon_sym_RPAREN = 21,
  sym_string_escaped_char = 22,
  sym_program = 23,
  sym_comment = 24,
  sym_boolean = 25,
  sym_verbatim_string = 26,
  sym_string_interpolation = 27,
  sym_string = 28,
  sym_value = 29,
  sym_variable_scope = 30,
  sym_variable_definition = 31,
  sym_function_invocation = 32,
  aux_sym_program_repeat1 = 33,
  aux_sym_verbatim_string_repeat1 = 34,
  aux_sym_string_repeat1 = 35,
  aux_sym_function_invocation_repeat1 = 36,
  alias_sym_string_content = 37,
  alias_sym_variable_name = 38,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_DASH_DASH] = "--",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_number] = "number",
  [sym_nil] = "nil",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_verbatim_string_token1] = "verbatim_string_token1",
  [anon_sym_SQUOTE2] = "'",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_DQUOTE2] = "\"",
  [anon_sym_local] = "local",
  [anon_sym_global] = "global",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [sym_string_escaped_char] = "string_escaped_char",
  [sym_program] = "program",
  [sym_comment] = "comment",
  [sym_boolean] = "boolean",
  [sym_verbatim_string] = "verbatim_string",
  [sym_string_interpolation] = "string_interpolation",
  [sym_string] = "string",
  [sym_value] = "value",
  [sym_variable_scope] = "variable_scope",
  [sym_variable_definition] = "variable_definition",
  [sym_function_invocation] = "function_invocation",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_verbatim_string_repeat1] = "verbatim_string_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_function_invocation_repeat1] = "function_invocation_repeat1",
  [alias_sym_string_content] = "string_content",
  [alias_sym_variable_name] = "variable_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_number] = sym_number,
  [sym_nil] = sym_nil,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_verbatim_string_token1] = aux_sym_verbatim_string_token1,
  [anon_sym_SQUOTE2] = anon_sym_SQUOTE,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_DQUOTE2] = anon_sym_DQUOTE,
  [anon_sym_local] = anon_sym_local,
  [anon_sym_global] = anon_sym_global,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_string_escaped_char] = sym_string_escaped_char,
  [sym_program] = sym_program,
  [sym_comment] = sym_comment,
  [sym_boolean] = sym_boolean,
  [sym_verbatim_string] = sym_verbatim_string,
  [sym_string_interpolation] = sym_string_interpolation,
  [sym_string] = sym_string,
  [sym_value] = sym_value,
  [sym_variable_scope] = sym_variable_scope,
  [sym_variable_definition] = sym_variable_definition,
  [sym_function_invocation] = sym_function_invocation,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_verbatim_string_repeat1] = aux_sym_verbatim_string_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_function_invocation_repeat1] = aux_sym_function_invocation_repeat1,
  [alias_sym_string_content] = alias_sym_string_content,
  [alias_sym_variable_name] = alias_sym_variable_name,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_nil] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_verbatim_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_local] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_global] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_string_escaped_char] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_verbatim_string] = {
    .visible = true,
    .named = true,
  },
  [sym_string_interpolation] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_variable_scope] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_function_invocation] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_verbatim_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_invocation_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_variable_name] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_parameter = 1,
  field_value = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_parameter] = "parameter",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 1},
  [5] = {.index = 2, .length = 1},
  [6] = {.index = 3, .length = 2},
  [7] = {.index = 5, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_parameter, 2},
  [1] =
    {field_value, 3},
  [2] =
    {field_parameter, 1},
  [3] =
    {field_parameter, 2},
    {field_parameter, 3, .inherited = true},
  [5] =
    {field_parameter, 0, .inherited = true},
    {field_parameter, 1, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_variable_name,
  },
  [3] = {
    [1] = alias_sym_variable_name,
  },
  [4] = {
    [1] = alias_sym_string_content,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym_verbatim_string_repeat1, 2,
    aux_sym_verbatim_string_repeat1,
    alias_sym_string_content,
  aux_sym_string_repeat1, 2,
    aux_sym_string_repeat1,
    alias_sym_string_content,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(20);
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == '\'') ADVANCE(59);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == ')') ADVANCE(72);
      if (lookahead == ',') ADVANCE(71);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead == 'f') ADVANCE(21);
      if (lookahead == 'g') ADVANCE(33);
      if (lookahead == 'l') ADVANCE(34);
      if (lookahead == 'n') ADVANCE(28);
      if (lookahead == 't') ADVANCE(36);
      if (lookahead == '{') ADVANCE(60);
      if (lookahead == '}') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == '{') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(65);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == '{') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(65);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\'') ADVANCE(59);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(58);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(58);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(62);
      if (lookahead == '\'') ADVANCE(55);
      if (lookahead == ')') ADVANCE(72);
      if (lookahead == ',') ADVANCE(71);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == 'f') ADVANCE(9);
      if (lookahead == 'n') ADVANCE(12);
      if (lookahead == 't') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(62);
      if (lookahead == '\'') ADVANCE(55);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == 'f') ADVANCE(21);
      if (lookahead == 'n') ADVANCE(28);
      if (lookahead == 't') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(41);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 12:
      if (lookahead == 'i') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == 's') ADVANCE(11);
      END_STATE();
    case 17:
      if (lookahead == 'u') ADVANCE(10);
      END_STATE();
    case 18:
      if (eof) ADVANCE(20);
      if (lookahead == '"') ADVANCE(62);
      if (lookahead == '\'') ADVANCE(55);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == ')') ADVANCE(72);
      if (lookahead == ',') ADVANCE(71);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead == 'f') ADVANCE(21);
      if (lookahead == 'g') ADVANCE(33);
      if (lookahead == 'l') ADVANCE(34);
      if (lookahead == 'n') ADVANCE(28);
      if (lookahead == 't') ADVANCE(36);
      if (lookahead == '{') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 19:
      if (eof) ADVANCE(20);
      if (lookahead == ')') ADVANCE(72);
      if (lookahead == ',') ADVANCE(71);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead == 'g') ADVANCE(33);
      if (lookahead == 'l') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(65);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(58);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_nil);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_verbatim_string_token1);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(58);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_verbatim_string_token1);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_verbatim_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(65);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_local);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_global);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 19},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 19},
  [8] = {.lex_state = 19},
  [9] = {.lex_state = 19},
  [10] = {.lex_state = 19},
  [11] = {.lex_state = 1, .external_lex_state = 1},
  [12] = {.lex_state = 19},
  [13] = {.lex_state = 19},
  [14] = {.lex_state = 19},
  [15] = {.lex_state = 1, .external_lex_state = 1},
  [16] = {.lex_state = 1, .external_lex_state = 1},
  [17] = {.lex_state = 19},
  [18] = {.lex_state = 19},
  [19] = {.lex_state = 19},
  [20] = {.lex_state = 19},
  [21] = {.lex_state = 19},
  [22] = {.lex_state = 1, .external_lex_state = 1},
  [23] = {.lex_state = 3, .external_lex_state = 1},
  [24] = {.lex_state = 1, .external_lex_state = 1},
  [25] = {.lex_state = 19},
  [26] = {.lex_state = 19},
  [27] = {.lex_state = 19},
  [28] = {.lex_state = 19},
  [29] = {.lex_state = 3, .external_lex_state = 1},
  [30] = {.lex_state = 19},
  [31] = {.lex_state = 3, .external_lex_state = 1},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 3, .external_lex_state = 1},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 45},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 0},
  [45] = {(TSStateId)(-1)},
};

enum {
  ts_external_token_string_escaped_char = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_string_escaped_char] = sym_string_escaped_char,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_string_escaped_char] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_nil] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE2] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [anon_sym_local] = ACTIONS(1),
    [anon_sym_global] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_string_escaped_char] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(38),
    [sym_comment] = STATE(1),
    [sym_variable_scope] = STATE(37),
    [sym_variable_definition] = STATE(26),
    [sym_function_invocation] = STATE(26),
    [aux_sym_program_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_DASH_DASH] = ACTIONS(3),
    [anon_sym_local] = ACTIONS(9),
    [anon_sym_global] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_COMMA,
    ACTIONS(21), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      sym_comment,
    STATE(35), 1,
      sym_value,
    ACTIONS(11), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(13), 2,
      sym_number,
      sym_nil,
    STATE(14), 3,
      sym_boolean,
      sym_verbatim_string,
      sym_string,
  [35] = 9,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    STATE(3), 1,
      sym_comment,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      sym_number,
      sym_nil,
    STATE(20), 2,
      sym_value,
      sym_function_invocation,
    STATE(14), 3,
      sym_boolean,
      sym_verbatim_string,
      sym_string,
  [68] = 9,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_RPAREN,
    STATE(4), 1,
      sym_comment,
    STATE(36), 1,
      sym_value,
    ACTIONS(11), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(13), 2,
      sym_number,
      sym_nil,
    STATE(14), 3,
      sym_boolean,
      sym_verbatim_string,
      sym_string,
  [100] = 9,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_RPAREN,
    STATE(5), 1,
      sym_comment,
    STATE(36), 1,
      sym_value,
    ACTIONS(11), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(13), 2,
      sym_number,
      sym_nil,
    STATE(14), 3,
      sym_boolean,
      sym_verbatim_string,
      sym_string,
  [132] = 8,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    STATE(6), 1,
      sym_comment,
    STATE(36), 1,
      sym_value,
    ACTIONS(11), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(13), 2,
      sym_number,
      sym_nil,
    STATE(14), 3,
      sym_boolean,
      sym_verbatim_string,
      sym_string,
  [161] = 7,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(37), 1,
      sym_variable_scope,
    ACTIONS(36), 2,
      anon_sym_local,
      anon_sym_global,
    STATE(7), 2,
      sym_comment,
      aux_sym_program_repeat1,
    STATE(26), 2,
      sym_variable_definition,
      sym_function_invocation,
  [186] = 8,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      aux_sym_program_repeat1,
    STATE(8), 1,
      sym_comment,
    STATE(37), 1,
      sym_variable_scope,
    ACTIONS(9), 2,
      anon_sym_local,
      anon_sym_global,
    STATE(26), 2,
      sym_variable_definition,
      sym_function_invocation,
  [213] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    STATE(9), 1,
      sym_comment,
    ACTIONS(41), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(43), 3,
      sym_identifier,
      anon_sym_local,
      anon_sym_global,
  [230] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    STATE(10), 1,
      sym_comment,
    ACTIONS(45), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(47), 3,
      sym_identifier,
      anon_sym_local,
      anon_sym_global,
  [247] = 7,
    ACTIONS(49), 1,
      anon_sym_DASH_DASH,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(54), 1,
      aux_sym_string_token1,
    ACTIONS(57), 1,
      anon_sym_DQUOTE2,
    ACTIONS(59), 1,
      sym_string_escaped_char,
    STATE(24), 1,
      sym_string_interpolation,
    STATE(11), 2,
      sym_comment,
      aux_sym_string_repeat1,
  [270] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    STATE(12), 1,
      sym_comment,
    ACTIONS(62), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(64), 3,
      sym_identifier,
      anon_sym_local,
      anon_sym_global,
  [287] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    STATE(13), 1,
      sym_comment,
    ACTIONS(66), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(68), 3,
      sym_identifier,
      anon_sym_local,
      anon_sym_global,
  [304] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    STATE(14), 1,
      sym_comment,
    ACTIONS(70), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(72), 3,
      sym_identifier,
      anon_sym_local,
      anon_sym_global,
  [321] = 8,
    ACTIONS(49), 1,
      anon_sym_DASH_DASH,
    ACTIONS(74), 1,
      anon_sym_LBRACE,
    ACTIONS(76), 1,
      aux_sym_string_token1,
    ACTIONS(78), 1,
      anon_sym_DQUOTE2,
    ACTIONS(80), 1,
      sym_string_escaped_char,
    STATE(11), 1,
      aux_sym_string_repeat1,
    STATE(15), 1,
      sym_comment,
    STATE(24), 1,
      sym_string_interpolation,
  [346] = 8,
    ACTIONS(49), 1,
      anon_sym_DASH_DASH,
    ACTIONS(74), 1,
      anon_sym_LBRACE,
    ACTIONS(76), 1,
      aux_sym_string_token1,
    ACTIONS(80), 1,
      sym_string_escaped_char,
    ACTIONS(82), 1,
      anon_sym_DQUOTE2,
    STATE(15), 1,
      aux_sym_string_repeat1,
    STATE(16), 1,
      sym_comment,
    STATE(24), 1,
      sym_string_interpolation,
  [371] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    STATE(17), 1,
      sym_comment,
    ACTIONS(84), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(86), 3,
      sym_identifier,
      anon_sym_local,
      anon_sym_global,
  [388] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
    ACTIONS(92), 1,
      anon_sym_EQ,
    STATE(18), 1,
      sym_comment,
    ACTIONS(90), 3,
      sym_identifier,
      anon_sym_local,
      anon_sym_global,
  [406] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    STATE(19), 1,
      sym_comment,
    ACTIONS(96), 3,
      sym_identifier,
      anon_sym_local,
      anon_sym_global,
  [421] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
    STATE(20), 1,
      sym_comment,
    ACTIONS(100), 3,
      sym_identifier,
      anon_sym_local,
      anon_sym_global,
  [436] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
    STATE(21), 1,
      sym_comment,
    ACTIONS(104), 3,
      sym_identifier,
      anon_sym_local,
      anon_sym_global,
  [451] = 4,
    ACTIONS(49), 1,
      anon_sym_DASH_DASH,
    STATE(22), 1,
      sym_comment,
    ACTIONS(106), 2,
      anon_sym_LBRACE,
      aux_sym_string_token1,
    ACTIONS(108), 2,
      sym_string_escaped_char,
      anon_sym_DQUOTE2,
  [466] = 6,
    ACTIONS(49), 1,
      anon_sym_DASH_DASH,
    ACTIONS(110), 1,
      aux_sym_verbatim_string_token1,
    ACTIONS(112), 1,
      anon_sym_SQUOTE2,
    ACTIONS(114), 1,
      sym_string_escaped_char,
    STATE(23), 1,
      sym_comment,
    STATE(31), 1,
      aux_sym_verbatim_string_repeat1,
  [485] = 4,
    ACTIONS(49), 1,
      anon_sym_DASH_DASH,
    STATE(24), 1,
      sym_comment,
    ACTIONS(116), 2,
      anon_sym_LBRACE,
      aux_sym_string_token1,
    ACTIONS(118), 2,
      sym_string_escaped_char,
      anon_sym_DQUOTE2,
  [500] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
    STATE(25), 1,
      sym_comment,
    ACTIONS(122), 3,
      sym_identifier,
      anon_sym_local,
      anon_sym_global,
  [515] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
    STATE(26), 1,
      sym_comment,
    ACTIONS(126), 3,
      sym_identifier,
      anon_sym_local,
      anon_sym_global,
  [530] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
    STATE(27), 1,
      sym_comment,
    ACTIONS(130), 3,
      sym_identifier,
      anon_sym_local,
      anon_sym_global,
  [545] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
    STATE(28), 1,
      sym_comment,
    ACTIONS(134), 3,
      sym_identifier,
      anon_sym_local,
      anon_sym_global,
  [560] = 6,
    ACTIONS(49), 1,
      anon_sym_DASH_DASH,
    ACTIONS(110), 1,
      aux_sym_verbatim_string_token1,
    ACTIONS(114), 1,
      sym_string_escaped_char,
    ACTIONS(136), 1,
      anon_sym_SQUOTE2,
    STATE(23), 1,
      aux_sym_verbatim_string_repeat1,
    STATE(29), 1,
      sym_comment,
  [579] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
    STATE(30), 1,
      sym_comment,
    ACTIONS(140), 3,
      sym_identifier,
      anon_sym_local,
      anon_sym_global,
  [594] = 5,
    ACTIONS(49), 1,
      anon_sym_DASH_DASH,
    ACTIONS(142), 1,
      aux_sym_verbatim_string_token1,
    ACTIONS(145), 1,
      anon_sym_SQUOTE2,
    ACTIONS(147), 1,
      sym_string_escaped_char,
    STATE(31), 2,
      sym_comment,
      aux_sym_verbatim_string_repeat1,
  [611] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    ACTIONS(152), 1,
      anon_sym_RPAREN,
    STATE(32), 1,
      sym_comment,
    STATE(33), 1,
      aux_sym_function_invocation_repeat1,
  [627] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(154), 1,
      anon_sym_COMMA,
    ACTIONS(157), 1,
      anon_sym_RPAREN,
    STATE(33), 2,
      sym_comment,
      aux_sym_function_invocation_repeat1,
  [641] = 4,
    ACTIONS(49), 1,
      anon_sym_DASH_DASH,
    ACTIONS(159), 1,
      aux_sym_verbatim_string_token1,
    STATE(34), 1,
      sym_comment,
    ACTIONS(161), 2,
      sym_string_escaped_char,
      anon_sym_SQUOTE2,
  [655] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(163), 1,
      anon_sym_COMMA,
    ACTIONS(165), 1,
      anon_sym_RPAREN,
    STATE(32), 1,
      aux_sym_function_invocation_repeat1,
    STATE(35), 1,
      sym_comment,
  [671] = 3,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    STATE(36), 1,
      sym_comment,
    ACTIONS(167), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [682] = 3,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(169), 1,
      sym_identifier,
    STATE(37), 1,
      sym_comment,
  [692] = 3,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
    STATE(38), 1,
      sym_comment,
  [702] = 3,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(173), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      sym_comment,
  [712] = 3,
    ACTIONS(49), 1,
      anon_sym_DASH_DASH,
    ACTIONS(175), 1,
      aux_sym_comment_token1,
    STATE(40), 1,
      sym_comment,
  [722] = 3,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(177), 1,
      anon_sym_RPAREN,
    STATE(41), 1,
      sym_comment,
  [732] = 3,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(179), 1,
      sym_identifier,
    STATE(42), 1,
      sym_comment,
  [742] = 3,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(181), 1,
      sym_identifier,
    STATE(43), 1,
      sym_comment,
  [752] = 3,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    STATE(44), 1,
      sym_comment,
  [762] = 1,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 68,
  [SMALL_STATE(5)] = 100,
  [SMALL_STATE(6)] = 132,
  [SMALL_STATE(7)] = 161,
  [SMALL_STATE(8)] = 186,
  [SMALL_STATE(9)] = 213,
  [SMALL_STATE(10)] = 230,
  [SMALL_STATE(11)] = 247,
  [SMALL_STATE(12)] = 270,
  [SMALL_STATE(13)] = 287,
  [SMALL_STATE(14)] = 304,
  [SMALL_STATE(15)] = 321,
  [SMALL_STATE(16)] = 346,
  [SMALL_STATE(17)] = 371,
  [SMALL_STATE(18)] = 388,
  [SMALL_STATE(19)] = 406,
  [SMALL_STATE(20)] = 421,
  [SMALL_STATE(21)] = 436,
  [SMALL_STATE(22)] = 451,
  [SMALL_STATE(23)] = 466,
  [SMALL_STATE(24)] = 485,
  [SMALL_STATE(25)] = 500,
  [SMALL_STATE(26)] = 515,
  [SMALL_STATE(27)] = 530,
  [SMALL_STATE(28)] = 545,
  [SMALL_STATE(29)] = 560,
  [SMALL_STATE(30)] = 579,
  [SMALL_STATE(31)] = 594,
  [SMALL_STATE(32)] = 611,
  [SMALL_STATE(33)] = 627,
  [SMALL_STATE(34)] = 641,
  [SMALL_STATE(35)] = 655,
  [SMALL_STATE(36)] = 671,
  [SMALL_STATE(37)] = 682,
  [SMALL_STATE(38)] = 692,
  [SMALL_STATE(39)] = 702,
  [SMALL_STATE(40)] = 712,
  [SMALL_STATE(41)] = 722,
  [SMALL_STATE(42)] = 732,
  [SMALL_STATE(43)] = 742,
  [SMALL_STATE(44)] = 752,
  [SMALL_STATE(45)] = 762,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(44),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(42),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbatim_string, 3, .production_id = 4),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verbatim_string, 3, .production_id = 4),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbatim_string, 2),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verbatim_string, 2),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(43),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(24),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(24),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, .production_id = 4),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, .production_id = 4),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 2, .production_id = 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 2, .production_id = 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_invocation, 3),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_invocation, 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 4, .production_id = 3),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 4, .production_id = 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_invocation, 6, .production_id = 6),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_invocation, 6, .production_id = 6),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_interpolation, 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_interpolation, 3),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_invocation, 5, .production_id = 6),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_invocation, 5, .production_id = 6),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_invocation, 5, .production_id = 2),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_invocation, 5, .production_id = 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_invocation, 4),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_invocation, 4),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_invocation, 4, .production_id = 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_invocation, 4, .production_id = 2),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_verbatim_string_repeat1, 2), SHIFT_REPEAT(34),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_verbatim_string_repeat1, 2),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_verbatim_string_repeat1, 2), SHIFT_REPEAT(34),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_invocation_repeat1, 2, .production_id = 7), SHIFT_REPEAT(6),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_invocation_repeat1, 2, .production_id = 7),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_verbatim_string_repeat1, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_verbatim_string_repeat1, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_invocation_repeat1, 2, .production_id = 5),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [171] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_scope, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_erde_external_scanner_create(void);
void tree_sitter_erde_external_scanner_destroy(void *);
bool tree_sitter_erde_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_erde_external_scanner_serialize(void *, char *);
void tree_sitter_erde_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_erde(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_erde_external_scanner_create,
      tree_sitter_erde_external_scanner_destroy,
      tree_sitter_erde_external_scanner_scan,
      tree_sitter_erde_external_scanner_serialize,
      tree_sitter_erde_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
