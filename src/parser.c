#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 55
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 2
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 3
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
  anon_sym_LBRACK_LBRACK = 16,
  anon_sym_local = 17,
  anon_sym_global = 18,
  anon_sym_EQ = 19,
  anon_sym_LPAREN = 20,
  anon_sym_COMMA = 21,
  anon_sym_RPAREN = 22,
  sym_string_escaped_char = 23,
  sym__block_string_content = 24,
  sym__block_string_end = 25,
  sym_program = 26,
  sym_comment = 27,
  sym_boolean = 28,
  sym_verbatim_string = 29,
  sym_string_interpolation = 30,
  sym_string = 31,
  sym_block_string = 32,
  sym_value = 33,
  sym_variable_scope = 34,
  sym_variable_definition = 35,
  sym_function_invocation = 36,
  aux_sym_program_repeat1 = 37,
  aux_sym_verbatim_string_repeat1 = 38,
  aux_sym_string_repeat1 = 39,
  aux_sym_block_string_repeat1 = 40,
  aux_sym_function_invocation_repeat1 = 41,
  alias_sym_string_content = 42,
  alias_sym_variable_name = 43,
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
  [anon_sym_LBRACK_LBRACK] = "[[",
  [anon_sym_local] = "local",
  [anon_sym_global] = "global",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [sym_string_escaped_char] = "string_escaped_char",
  [sym__block_string_content] = "_block_string_content",
  [sym__block_string_end] = "_block_string_end",
  [sym_program] = "program",
  [sym_comment] = "comment",
  [sym_boolean] = "boolean",
  [sym_verbatim_string] = "verbatim_string",
  [sym_string_interpolation] = "string_interpolation",
  [sym_string] = "string",
  [sym_block_string] = "block_string",
  [sym_value] = "value",
  [sym_variable_scope] = "variable_scope",
  [sym_variable_definition] = "variable_definition",
  [sym_function_invocation] = "function_invocation",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_verbatim_string_repeat1] = "verbatim_string_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_block_string_repeat1] = "block_string_repeat1",
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
  [anon_sym_LBRACK_LBRACK] = anon_sym_LBRACK_LBRACK,
  [anon_sym_local] = anon_sym_local,
  [anon_sym_global] = anon_sym_global,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_string_escaped_char] = sym_string_escaped_char,
  [sym__block_string_content] = sym__block_string_content,
  [sym__block_string_end] = sym__block_string_end,
  [sym_program] = sym_program,
  [sym_comment] = sym_comment,
  [sym_boolean] = sym_boolean,
  [sym_verbatim_string] = sym_verbatim_string,
  [sym_string_interpolation] = sym_string_interpolation,
  [sym_string] = sym_string,
  [sym_block_string] = sym_block_string,
  [sym_value] = sym_value,
  [sym_variable_scope] = sym_variable_scope,
  [sym_variable_definition] = sym_variable_definition,
  [sym_function_invocation] = sym_function_invocation,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_verbatim_string_repeat1] = aux_sym_verbatim_string_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_block_string_repeat1] = aux_sym_block_string_repeat1,
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
  [anon_sym_LBRACK_LBRACK] = {
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
  [sym__block_string_content] = {
    .visible = false,
    .named = true,
  },
  [sym__block_string_end] = {
    .visible = false,
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
  [sym_block_string] = {
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
  [aux_sym_block_string_repeat1] = {
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
  aux_sym_block_string_repeat1, 2,
    aux_sym_block_string_repeat1,
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
  [30] = 25,
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
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 44,
  [53] = 48,
  [54] = 54,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(21);
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '\'') ADVANCE(60);
      if (lookahead == '(') ADVANCE(72);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == ',') ADVANCE(73);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '=') ADVANCE(71);
      if (lookahead == '[') ADVANCE(9);
      if (lookahead == 'f') ADVANCE(22);
      if (lookahead == 'g') ADVANCE(34);
      if (lookahead == 'l') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(29);
      if (lookahead == 't') ADVANCE(37);
      if (lookahead == '{') ADVANCE(61);
      if (lookahead == '}') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '{') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(66);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '{') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(66);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\'') ADVANCE(60);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(59);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(59);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(63);
      if (lookahead == '\'') ADVANCE(56);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == ',') ADVANCE(73);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '[') ADVANCE(9);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'n') ADVANCE(13);
      if (lookahead == 't') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(63);
      if (lookahead == '\'') ADVANCE(56);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '[') ADVANCE(9);
      if (lookahead == 'f') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(29);
      if (lookahead == 't') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(42);
      END_STATE();
    case 9:
      if (lookahead == '[') ADVANCE(68);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 18:
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 19:
      if (eof) ADVANCE(21);
      if (lookahead == '"') ADVANCE(63);
      if (lookahead == '\'') ADVANCE(56);
      if (lookahead == '(') ADVANCE(72);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == ',') ADVANCE(73);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '=') ADVANCE(71);
      if (lookahead == '[') ADVANCE(9);
      if (lookahead == 'f') ADVANCE(22);
      if (lookahead == 'g') ADVANCE(34);
      if (lookahead == 'l') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(29);
      if (lookahead == 't') ADVANCE(37);
      if (lookahead == '{') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 20:
      if (eof) ADVANCE(21);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == ',') ADVANCE(73);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '=') ADVANCE(71);
      if (lookahead == 'g') ADVANCE(34);
      if (lookahead == 'l') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(66);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(59);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_nil);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_verbatim_string_token1);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(59);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_verbatim_string_token1);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_verbatim_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(66);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_local);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_global);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 20},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 20},
  [8] = {.lex_state = 20},
  [9] = {.lex_state = 1, .external_lex_state = 2},
  [10] = {.lex_state = 20},
  [11] = {.lex_state = 20},
  [12] = {.lex_state = 20},
  [13] = {.lex_state = 20},
  [14] = {.lex_state = 0, .external_lex_state = 1},
  [15] = {.lex_state = 1, .external_lex_state = 2},
  [16] = {.lex_state = 0, .external_lex_state = 1},
  [17] = {.lex_state = 0, .external_lex_state = 1},
  [18] = {.lex_state = 20},
  [19] = {.lex_state = 1, .external_lex_state = 2},
  [20] = {.lex_state = 20},
  [21] = {.lex_state = 20},
  [22] = {.lex_state = 20},
  [23] = {.lex_state = 20},
  [24] = {.lex_state = 1, .external_lex_state = 2},
  [25] = {.lex_state = 0, .external_lex_state = 1},
  [26] = {.lex_state = 20},
  [27] = {.lex_state = 0, .external_lex_state = 1},
  [28] = {.lex_state = 20},
  [29] = {.lex_state = 20},
  [30] = {.lex_state = 1, .external_lex_state = 2},
  [31] = {.lex_state = 20},
  [32] = {.lex_state = 20},
  [33] = {.lex_state = 3, .external_lex_state = 2},
  [34] = {.lex_state = 3, .external_lex_state = 2},
  [35] = {.lex_state = 3, .external_lex_state = 2},
  [36] = {.lex_state = 20},
  [37] = {.lex_state = 20},
  [38] = {.lex_state = 20},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 3, .external_lex_state = 2},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 46},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 7},
  [54] = {(TSStateId)(-1)},
};

enum {
  ts_external_token_string_escaped_char = 0,
  ts_external_token__block_string_content = 1,
  ts_external_token__block_string_end = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_string_escaped_char] = sym_string_escaped_char,
  [ts_external_token__block_string_content] = sym__block_string_content,
  [ts_external_token__block_string_end] = sym__block_string_end,
};

static const bool ts_external_scanner_states[3][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_string_escaped_char] = true,
    [ts_external_token__block_string_content] = true,
    [ts_external_token__block_string_end] = true,
  },
  [2] = {
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
    [anon_sym_LBRACK_LBRACK] = ACTIONS(1),
    [anon_sym_local] = ACTIONS(1),
    [anon_sym_global] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_string_escaped_char] = ACTIONS(1),
    [sym__block_string_content] = ACTIONS(1),
    [sym__block_string_end] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(47),
    [sym_comment] = STATE(1),
    [sym_variable_scope] = STATE(45),
    [sym_variable_definition] = STATE(36),
    [sym_function_invocation] = STATE(36),
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
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACK_LBRACK,
    STATE(2), 1,
      sym_comment,
    ACTIONS(11), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(13), 2,
      sym_number,
      sym_nil,
    STATE(32), 2,
      sym_value,
      sym_function_invocation,
    STATE(13), 4,
      sym_boolean,
      sym_verbatim_string,
      sym_string,
      sym_block_string,
  [37] = 11,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(25), 1,
      anon_sym_COMMA,
    ACTIONS(27), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym_comment,
    STATE(41), 1,
      sym_value,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 2,
      sym_number,
      sym_nil,
    STATE(13), 4,
      sym_boolean,
      sym_verbatim_string,
      sym_string,
      sym_block_string,
  [76] = 10,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(29), 1,
      anon_sym_RPAREN,
    STATE(4), 1,
      sym_comment,
    STATE(43), 1,
      sym_value,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 2,
      sym_number,
      sym_nil,
    STATE(13), 4,
      sym_boolean,
      sym_verbatim_string,
      sym_string,
      sym_block_string,
  [112] = 10,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(31), 1,
      anon_sym_RPAREN,
    STATE(5), 1,
      sym_comment,
    STATE(43), 1,
      sym_value,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 2,
      sym_number,
      sym_nil,
    STATE(13), 4,
      sym_boolean,
      sym_verbatim_string,
      sym_string,
      sym_block_string,
  [148] = 9,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACK_LBRACK,
    STATE(6), 1,
      sym_comment,
    STATE(43), 1,
      sym_value,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 2,
      sym_number,
      sym_nil,
    STATE(13), 4,
      sym_boolean,
      sym_verbatim_string,
      sym_string,
      sym_block_string,
  [181] = 7,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(45), 1,
      sym_variable_scope,
    ACTIONS(38), 2,
      anon_sym_local,
      anon_sym_global,
    STATE(7), 2,
      sym_comment,
      aux_sym_program_repeat1,
    STATE(36), 2,
      sym_variable_definition,
      sym_function_invocation,
  [206] = 8,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      aux_sym_program_repeat1,
    STATE(8), 1,
      sym_comment,
    STATE(45), 1,
      sym_variable_scope,
    ACTIONS(9), 2,
      anon_sym_local,
      anon_sym_global,
    STATE(36), 2,
      sym_variable_definition,
      sym_function_invocation,
  [233] = 7,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(48), 1,
      aux_sym_string_token1,
    ACTIONS(51), 1,
      anon_sym_DQUOTE2,
    ACTIONS(53), 1,
      sym_string_escaped_char,
    STATE(24), 1,
      sym_string_interpolation,
    STATE(9), 2,
      sym_comment,
      aux_sym_string_repeat1,
  [256] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    STATE(10), 1,
      sym_comment,
    ACTIONS(56), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(58), 3,
      sym_identifier,
      anon_sym_local,
      anon_sym_global,
  [273] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    STATE(11), 1,
      sym_comment,
    ACTIONS(60), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(62), 3,
      sym_identifier,
      anon_sym_local,
      anon_sym_global,
  [290] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    STATE(12), 1,
      sym_comment,
    ACTIONS(64), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(66), 3,
      sym_identifier,
      anon_sym_local,
      anon_sym_global,
  [307] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    STATE(13), 1,
      sym_comment,
    ACTIONS(68), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(70), 3,
      sym_identifier,
      anon_sym_local,
      anon_sym_global,
  [324] = 6,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(72), 1,
      anon_sym_LBRACE,
    ACTIONS(78), 1,
      sym__block_string_end,
    STATE(27), 1,
      sym_string_interpolation,
    ACTIONS(75), 2,
      sym_string_escaped_char,
      sym__block_string_content,
    STATE(14), 2,
      sym_comment,
      aux_sym_block_string_repeat1,
  [345] = 8,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(80), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      aux_sym_string_token1,
    ACTIONS(84), 1,
      anon_sym_DQUOTE2,
    ACTIONS(86), 1,
      sym_string_escaped_char,
    STATE(15), 1,
      sym_comment,
    STATE(19), 1,
      aux_sym_string_repeat1,
    STATE(24), 1,
      sym_string_interpolation,
  [370] = 7,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(88), 1,
      anon_sym_LBRACE,
    ACTIONS(92), 1,
      sym__block_string_end,
    STATE(16), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym_block_string_repeat1,
    STATE(27), 1,
      sym_string_interpolation,
    ACTIONS(90), 2,
      sym_string_escaped_char,
      sym__block_string_content,
  [393] = 7,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(88), 1,
      anon_sym_LBRACE,
    ACTIONS(94), 1,
      sym__block_string_end,
    STATE(14), 1,
      aux_sym_block_string_repeat1,
    STATE(17), 1,
      sym_comment,
    STATE(27), 1,
      sym_string_interpolation,
    ACTIONS(90), 2,
      sym_string_escaped_char,
      sym__block_string_content,
  [416] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    STATE(18), 1,
      sym_comment,
    ACTIONS(96), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(98), 3,
      sym_identifier,
      anon_sym_local,
      anon_sym_global,
  [433] = 8,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(80), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      aux_sym_string_token1,
    ACTIONS(86), 1,
      sym_string_escaped_char,
    ACTIONS(100), 1,
      anon_sym_DQUOTE2,
    STATE(9), 1,
      aux_sym_string_repeat1,
    STATE(19), 1,
      sym_comment,
    STATE(24), 1,
      sym_string_interpolation,
  [458] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    STATE(20), 1,
      sym_comment,
    ACTIONS(102), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(104), 3,
      sym_identifier,
      anon_sym_local,
      anon_sym_global,
  [475] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    STATE(21), 1,
      sym_comment,
    ACTIONS(106), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(108), 3,
      sym_identifier,
      anon_sym_local,
      anon_sym_global,
  [492] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    STATE(22), 1,
      sym_comment,
    ACTIONS(110), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(112), 3,
      sym_identifier,
      anon_sym_local,
      anon_sym_global,
  [509] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
    ACTIONS(118), 1,
      anon_sym_EQ,
    STATE(23), 1,
      sym_comment,
    ACTIONS(116), 3,
      sym_identifier,
      anon_sym_local,
      anon_sym_global,
  [527] = 4,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    STATE(24), 1,
      sym_comment,
    ACTIONS(120), 2,
      anon_sym_LBRACE,
      aux_sym_string_token1,
    ACTIONS(122), 2,
      sym_string_escaped_char,
      anon_sym_DQUOTE2,
  [542] = 3,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    STATE(25), 1,
      sym_comment,
    ACTIONS(124), 4,
      sym_string_escaped_char,
      sym__block_string_content,
      sym__block_string_end,
      anon_sym_LBRACE,
  [555] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    STATE(26), 1,
      sym_comment,
    ACTIONS(128), 3,
      sym_identifier,
      anon_sym_local,
      anon_sym_global,
  [570] = 3,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    STATE(27), 1,
      sym_comment,
    ACTIONS(130), 4,
      sym_string_escaped_char,
      sym__block_string_content,
      sym__block_string_end,
      anon_sym_LBRACE,
  [583] = 4,
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
  [598] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(136), 1,
      ts_builtin_sym_end,
    STATE(29), 1,
      sym_comment,
    ACTIONS(138), 3,
      sym_identifier,
      anon_sym_local,
      anon_sym_global,
  [613] = 4,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    STATE(30), 1,
      sym_comment,
    ACTIONS(124), 2,
      sym_string_escaped_char,
      anon_sym_DQUOTE2,
    ACTIONS(140), 2,
      anon_sym_LBRACE,
      aux_sym_string_token1,
  [628] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
    STATE(31), 1,
      sym_comment,
    ACTIONS(144), 3,
      sym_identifier,
      anon_sym_local,
      anon_sym_global,
  [643] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    STATE(32), 1,
      sym_comment,
    ACTIONS(148), 3,
      sym_identifier,
      anon_sym_local,
      anon_sym_global,
  [658] = 6,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(150), 1,
      aux_sym_verbatim_string_token1,
    ACTIONS(152), 1,
      anon_sym_SQUOTE2,
    ACTIONS(154), 1,
      sym_string_escaped_char,
    STATE(33), 1,
      sym_comment,
    STATE(35), 1,
      aux_sym_verbatim_string_repeat1,
  [677] = 5,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(156), 1,
      aux_sym_verbatim_string_token1,
    ACTIONS(159), 1,
      anon_sym_SQUOTE2,
    ACTIONS(161), 1,
      sym_string_escaped_char,
    STATE(34), 2,
      sym_comment,
      aux_sym_verbatim_string_repeat1,
  [694] = 6,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(150), 1,
      aux_sym_verbatim_string_token1,
    ACTIONS(154), 1,
      sym_string_escaped_char,
    ACTIONS(164), 1,
      anon_sym_SQUOTE2,
    STATE(34), 1,
      aux_sym_verbatim_string_repeat1,
    STATE(35), 1,
      sym_comment,
  [713] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(166), 1,
      ts_builtin_sym_end,
    STATE(36), 1,
      sym_comment,
    ACTIONS(168), 3,
      sym_identifier,
      anon_sym_local,
      anon_sym_global,
  [728] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
    STATE(37), 1,
      sym_comment,
    ACTIONS(172), 3,
      sym_identifier,
      anon_sym_local,
      anon_sym_global,
  [743] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(174), 1,
      ts_builtin_sym_end,
    STATE(38), 1,
      sym_comment,
    ACTIONS(176), 3,
      sym_identifier,
      anon_sym_local,
      anon_sym_global,
  [758] = 4,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(178), 1,
      anon_sym_COMMA,
    ACTIONS(181), 1,
      anon_sym_RPAREN,
    STATE(39), 2,
      sym_comment,
      aux_sym_function_invocation_repeat1,
  [772] = 4,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(183), 1,
      aux_sym_verbatim_string_token1,
    STATE(40), 1,
      sym_comment,
    ACTIONS(185), 2,
      sym_string_escaped_char,
      anon_sym_SQUOTE2,
  [786] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(189), 1,
      anon_sym_RPAREN,
    STATE(41), 1,
      sym_comment,
    STATE(42), 1,
      aux_sym_function_invocation_repeat1,
  [802] = 5,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(191), 1,
      anon_sym_COMMA,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
    STATE(39), 1,
      aux_sym_function_invocation_repeat1,
    STATE(42), 1,
      sym_comment,
  [818] = 3,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    STATE(43), 1,
      sym_comment,
    ACTIONS(195), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [829] = 3,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(197), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      sym_comment,
  [839] = 3,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(199), 1,
      sym_identifier,
    STATE(45), 1,
      sym_comment,
  [849] = 3,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(201), 1,
      sym_identifier,
    STATE(46), 1,
      sym_comment,
  [859] = 3,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(203), 1,
      ts_builtin_sym_end,
    STATE(47), 1,
      sym_comment,
  [869] = 3,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(205), 1,
      sym_identifier,
    STATE(48), 1,
      sym_comment,
  [879] = 3,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(207), 1,
      anon_sym_RPAREN,
    STATE(49), 1,
      sym_comment,
  [889] = 3,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    STATE(50), 1,
      sym_comment,
  [899] = 3,
    ACTIONS(43), 1,
      anon_sym_DASH_DASH,
    ACTIONS(211), 1,
      aux_sym_comment_token1,
    STATE(51), 1,
      sym_comment,
  [909] = 3,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      sym_comment,
  [919] = 3,
    ACTIONS(3), 1,
      anon_sym_DASH_DASH,
    ACTIONS(215), 1,
      sym_identifier,
    STATE(53), 1,
      sym_comment,
  [929] = 1,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 37,
  [SMALL_STATE(4)] = 76,
  [SMALL_STATE(5)] = 112,
  [SMALL_STATE(6)] = 148,
  [SMALL_STATE(7)] = 181,
  [SMALL_STATE(8)] = 206,
  [SMALL_STATE(9)] = 233,
  [SMALL_STATE(10)] = 256,
  [SMALL_STATE(11)] = 273,
  [SMALL_STATE(12)] = 290,
  [SMALL_STATE(13)] = 307,
  [SMALL_STATE(14)] = 324,
  [SMALL_STATE(15)] = 345,
  [SMALL_STATE(16)] = 370,
  [SMALL_STATE(17)] = 393,
  [SMALL_STATE(18)] = 416,
  [SMALL_STATE(19)] = 433,
  [SMALL_STATE(20)] = 458,
  [SMALL_STATE(21)] = 475,
  [SMALL_STATE(22)] = 492,
  [SMALL_STATE(23)] = 509,
  [SMALL_STATE(24)] = 527,
  [SMALL_STATE(25)] = 542,
  [SMALL_STATE(26)] = 555,
  [SMALL_STATE(27)] = 570,
  [SMALL_STATE(28)] = 583,
  [SMALL_STATE(29)] = 598,
  [SMALL_STATE(30)] = 613,
  [SMALL_STATE(31)] = 628,
  [SMALL_STATE(32)] = 643,
  [SMALL_STATE(33)] = 658,
  [SMALL_STATE(34)] = 677,
  [SMALL_STATE(35)] = 694,
  [SMALL_STATE(36)] = 713,
  [SMALL_STATE(37)] = 728,
  [SMALL_STATE(38)] = 743,
  [SMALL_STATE(39)] = 758,
  [SMALL_STATE(40)] = 772,
  [SMALL_STATE(41)] = 786,
  [SMALL_STATE(42)] = 802,
  [SMALL_STATE(43)] = 818,
  [SMALL_STATE(44)] = 829,
  [SMALL_STATE(45)] = 839,
  [SMALL_STATE(46)] = 849,
  [SMALL_STATE(47)] = 859,
  [SMALL_STATE(48)] = 869,
  [SMALL_STATE(49)] = 879,
  [SMALL_STATE(50)] = 889,
  [SMALL_STATE(51)] = 899,
  [SMALL_STATE(52)] = 909,
  [SMALL_STATE(53)] = 919,
  [SMALL_STATE(54)] = 929,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(50),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(46),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(48),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(24),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(24),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, .production_id = 4),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, .production_id = 4),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbatim_string, 3, .production_id = 4),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verbatim_string, 3, .production_id = 4),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_string_repeat1, 2), SHIFT_REPEAT(53),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_string_repeat1, 2), SHIFT_REPEAT(27),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_string_repeat1, 2),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_string, 2),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_string, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_string, 3, .production_id = 4),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_string, 3, .production_id = 4),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbatim_string, 2),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verbatim_string, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 2, .production_id = 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 2, .production_id = 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_interpolation, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_invocation, 6, .production_id = 6),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_invocation, 6, .production_id = 6),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_string_repeat1, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_invocation, 3),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_invocation, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_invocation, 4),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_invocation, 4),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_interpolation, 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_invocation, 4, .production_id = 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_invocation, 4, .production_id = 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 4, .production_id = 3),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 4, .production_id = 3),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_verbatim_string_repeat1, 2), SHIFT_REPEAT(40),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_verbatim_string_repeat1, 2),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_verbatim_string_repeat1, 2), SHIFT_REPEAT(40),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_invocation, 5, .production_id = 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_invocation, 5, .production_id = 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_invocation, 5, .production_id = 6),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_invocation, 5, .production_id = 6),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_invocation_repeat1, 2, .production_id = 7), SHIFT_REPEAT(6),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_invocation_repeat1, 2, .production_id = 7),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_verbatim_string_repeat1, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_verbatim_string_repeat1, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_invocation_repeat1, 2, .production_id = 5),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_scope, 1),
  [203] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
