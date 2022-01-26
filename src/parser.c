#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 61
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_class = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_function = 4,
  anon_sym_void = 5,
  anon_sym_int = 6,
  anon_sym_char = 7,
  anon_sym_boolean = 8,
  anon_sym_LPAREN = 9,
  anon_sym_COMMA = 10,
  anon_sym_RPAREN = 11,
  anon_sym_do = 12,
  anon_sym_SEMI = 13,
  anon_sym_return = 14,
  anon_sym_DOT = 15,
  anon_sym_DQUOTE = 16,
  aux_sym_string_constant_token1 = 17,
  sym_identifier = 18,
  sym_comment = 19,
  sym_class_declaration = 20,
  sym_class_body = 21,
  sym__subroutine_declaration = 22,
  sym_function_declaration = 23,
  sym_return_type = 24,
  sym_type = 25,
  sym_parameter_list = 26,
  sym_subroutine_body = 27,
  sym_statements = 28,
  sym__statement = 29,
  sym_do_statement = 30,
  sym_return_statement = 31,
  sym_subroutine_call = 32,
  sym_member_expression = 33,
  sym_expression_list = 34,
  sym_expression = 35,
  sym_term = 36,
  sym_string_constant = 37,
  aux_sym_class_body_repeat1 = 38,
  aux_sym_parameter_list_repeat1 = 39,
  aux_sym_statements_repeat1 = 40,
  aux_sym_expression_list_repeat1 = 41,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_class] = "class",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_function] = "function",
  [anon_sym_void] = "void",
  [anon_sym_int] = "int",
  [anon_sym_char] = "char",
  [anon_sym_boolean] = "boolean",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_do] = "do",
  [anon_sym_SEMI] = ";",
  [anon_sym_return] = "return",
  [anon_sym_DOT] = ".",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_constant_token1] = "string_constant_token1",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [sym_class_declaration] = "class_declaration",
  [sym_class_body] = "class_body",
  [sym__subroutine_declaration] = "_subroutine_declaration",
  [sym_function_declaration] = "function_declaration",
  [sym_return_type] = "return_type",
  [sym_type] = "type",
  [sym_parameter_list] = "parameter_list",
  [sym_subroutine_body] = "subroutine_body",
  [sym_statements] = "statements",
  [sym__statement] = "_statement",
  [sym_do_statement] = "do_statement",
  [sym_return_statement] = "return_statement",
  [sym_subroutine_call] = "subroutine_call",
  [sym_member_expression] = "member_expression",
  [sym_expression_list] = "expression_list",
  [sym_expression] = "expression",
  [sym_term] = "term",
  [sym_string_constant] = "string_constant",
  [aux_sym_class_body_repeat1] = "class_body_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_statements_repeat1] = "statements_repeat1",
  [aux_sym_expression_list_repeat1] = "expression_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_char] = anon_sym_char,
  [anon_sym_boolean] = anon_sym_boolean,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_constant_token1] = aux_sym_string_constant_token1,
  [sym_identifier] = sym_identifier,
  [sym_comment] = sym_comment,
  [sym_class_declaration] = sym_class_declaration,
  [sym_class_body] = sym_class_body,
  [sym__subroutine_declaration] = sym__subroutine_declaration,
  [sym_function_declaration] = sym_function_declaration,
  [sym_return_type] = sym_return_type,
  [sym_type] = sym_type,
  [sym_parameter_list] = sym_parameter_list,
  [sym_subroutine_body] = sym_subroutine_body,
  [sym_statements] = sym_statements,
  [sym__statement] = sym__statement,
  [sym_do_statement] = sym_do_statement,
  [sym_return_statement] = sym_return_statement,
  [sym_subroutine_call] = sym_subroutine_call,
  [sym_member_expression] = sym_member_expression,
  [sym_expression_list] = sym_expression_list,
  [sym_expression] = sym_expression,
  [sym_term] = sym_term,
  [sym_string_constant] = sym_string_constant,
  [aux_sym_class_body_repeat1] = aux_sym_class_body_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_statements_repeat1] = aux_sym_statements_repeat1,
  [aux_sym_expression_list_repeat1] = aux_sym_expression_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_class] = {
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
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_char] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_boolean] = {
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
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_constant_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_class_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_class_body] = {
    .visible = true,
    .named = true,
  },
  [sym__subroutine_declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_return_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_subroutine_body] = {
    .visible = true,
    .named = true,
  },
  [sym_statements] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_do_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_subroutine_call] = {
    .visible = true,
    .named = true,
  },
  [sym_member_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_list] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_term] = {
    .visible = true,
    .named = true,
  },
  [sym_string_constant] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_class_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_statements_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
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
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(37);
      if (lookahead == '"') ADVANCE(57);
      if (lookahead == '(') ADVANCE(50);
      if (lookahead == ')') ADVANCE(52);
      if (lookahead == ',') ADVANCE(51);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ';') ADVANCE(54);
      if (lookahead == 'b') ADVANCE(26);
      if (lookahead == 'c') ADVANCE(14);
      if (lookahead == 'd') ADVANCE(23);
      if (lookahead == 'f') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(12);
      if (lookahead == 'v') ADVANCE(24);
      if (lookahead == '{') ADVANCE(39);
      if (lookahead == '}') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == ')') ADVANCE(52);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == 'b') ADVANCE(75);
      if (lookahead == 'c') ADVANCE(68);
      if (lookahead == 'i') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(80);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == 'b') ADVANCE(75);
      if (lookahead == 'c') ADVANCE(68);
      if (lookahead == 'i') ADVANCE(71);
      if (lookahead == 'v') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(34);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 14:
      if (lookahead == 'h') ADVANCE(7);
      if (lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(11);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 30:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 31:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 35:
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 36:
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_char);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_string_constant_token1);
      if (lookahead == '"') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_string_constant_token1);
      if (lookahead == '*') ADVANCE(61);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(63);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_string_constant_token1);
      if (lookahead == '*') ADVANCE(60);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(4);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_string_constant_token1);
      if (lookahead == '*') ADVANCE(60);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(4);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_string_constant_token1);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_string_constant_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(80);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 62},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 6},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_char] = ACTIONS(1),
    [anon_sym_boolean] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_class_declaration] = STATE(55),
    [anon_sym_class] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 1,
      anon_sym_do,
    ACTIONS(11), 1,
      anon_sym_return,
    STATE(58), 1,
      sym_statements,
    STATE(5), 4,
      sym__statement,
      sym_do_statement,
      sym_return_statement,
      aux_sym_statements_repeat1,
  [22] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    ACTIONS(15), 1,
      anon_sym_do,
    ACTIONS(18), 1,
      anon_sym_return,
    STATE(3), 4,
      sym__statement,
      sym_do_statement,
      sym_return_statement,
      aux_sym_statements_repeat1,
  [41] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_void,
    STATE(39), 1,
      sym_type,
    STATE(57), 1,
      sym_return_type,
    ACTIONS(23), 4,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      sym_identifier,
  [60] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_do,
    ACTIONS(11), 1,
      anon_sym_return,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    STATE(3), 4,
      sym__statement,
      sym_do_statement,
      sym_return_statement,
      aux_sym_statements_repeat1,
  [79] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_RPAREN,
    STATE(44), 1,
      sym_type,
    ACTIONS(23), 4,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      sym_identifier,
  [95] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    ACTIONS(31), 1,
      anon_sym_function,
    STATE(7), 3,
      sym__subroutine_declaration,
      sym_function_declaration,
      aux_sym_class_body_repeat1,
  [110] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 1,
      anon_sym_RPAREN,
    ACTIONS(36), 1,
      anon_sym_DQUOTE,
    STATE(19), 1,
      sym_expression,
    STATE(22), 1,
      sym_string_constant,
    STATE(23), 1,
      sym_term,
  [129] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(38), 1,
      anon_sym_RBRACE,
    ACTIONS(40), 1,
      anon_sym_function,
    STATE(10), 3,
      sym__subroutine_declaration,
      sym_function_declaration,
      aux_sym_class_body_repeat1,
  [144] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      anon_sym_function,
    ACTIONS(42), 1,
      anon_sym_RBRACE,
    STATE(7), 3,
      sym__subroutine_declaration,
      sym_function_declaration,
      aux_sym_class_body_repeat1,
  [159] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 1,
      anon_sym_DQUOTE,
    ACTIONS(44), 1,
      anon_sym_SEMI,
    STATE(22), 1,
      sym_string_constant,
    STATE(23), 1,
      sym_term,
    STATE(38), 1,
      sym_expression,
  [178] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(41), 1,
      sym_type,
    ACTIONS(23), 4,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      sym_identifier,
  [191] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 1,
      anon_sym_DQUOTE,
    STATE(22), 1,
      sym_string_constant,
    STATE(23), 1,
      sym_term,
    STATE(30), 1,
      sym_expression,
  [207] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 3,
      anon_sym_RBRACE,
      anon_sym_do,
      anon_sym_return,
  [216] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 1,
      sym_identifier,
    STATE(35), 1,
      sym_member_expression,
    STATE(37), 1,
      sym_subroutine_call,
  [229] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      anon_sym_COMMA,
    ACTIONS(53), 1,
      anon_sym_RPAREN,
    STATE(16), 1,
      aux_sym_expression_list_repeat1,
  [242] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_COMMA,
    ACTIONS(57), 1,
      anon_sym_RPAREN,
    STATE(16), 1,
      aux_sym_expression_list_repeat1,
  [255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [264] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_COMMA,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    STATE(17), 1,
      aux_sym_expression_list_repeat1,
  [277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 3,
      anon_sym_RBRACE,
      anon_sym_do,
      anon_sym_return,
  [286] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_COMMA,
    ACTIONS(68), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      aux_sym_parameter_list_repeat1,
  [299] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [308] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [317] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 3,
      anon_sym_RBRACE,
      anon_sym_do,
      anon_sym_return,
  [326] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_COMMA,
    ACTIONS(78), 1,
      anon_sym_RPAREN,
    STATE(26), 1,
      aux_sym_parameter_list_repeat1,
  [339] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_COMMA,
    ACTIONS(80), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      aux_sym_parameter_list_repeat1,
  [352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 2,
      anon_sym_RBRACE,
      anon_sym_function,
  [360] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 2,
      anon_sym_RBRACE,
      anon_sym_function,
  [368] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 2,
      anon_sym_RBRACE,
      anon_sym_function,
  [376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [384] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_parameter_list,
  [394] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [402] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_LBRACE,
    STATE(29), 1,
      sym_subroutine_body,
  [412] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym_class_body,
  [422] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      sym_expression_list,
  [432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      sym_identifier,
  [439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_SEMI,
  [446] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_SEMI,
  [453] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      sym_identifier,
  [460] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      sym_identifier,
  [467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_identifier,
  [474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
  [481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
  [488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      sym_identifier,
  [495] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
  [502] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
  [509] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_SEMI,
  [516] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
  [523] = 2,
    ACTIONS(124), 1,
      aux_sym_string_constant_token1,
    ACTIONS(126), 1,
      sym_comment,
  [530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_DOT,
  [537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
  [544] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_SEMI,
  [551] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_LBRACE,
  [558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      ts_builtin_sym_end,
  [565] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
  [572] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_SEMI,
  [579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      sym_identifier,
  [586] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_RBRACE,
  [593] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_SEMI,
  [600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 41,
  [SMALL_STATE(5)] = 60,
  [SMALL_STATE(6)] = 79,
  [SMALL_STATE(7)] = 95,
  [SMALL_STATE(8)] = 110,
  [SMALL_STATE(9)] = 129,
  [SMALL_STATE(10)] = 144,
  [SMALL_STATE(11)] = 159,
  [SMALL_STATE(12)] = 178,
  [SMALL_STATE(13)] = 191,
  [SMALL_STATE(14)] = 207,
  [SMALL_STATE(15)] = 216,
  [SMALL_STATE(16)] = 229,
  [SMALL_STATE(17)] = 242,
  [SMALL_STATE(18)] = 255,
  [SMALL_STATE(19)] = 264,
  [SMALL_STATE(20)] = 277,
  [SMALL_STATE(21)] = 286,
  [SMALL_STATE(22)] = 299,
  [SMALL_STATE(23)] = 308,
  [SMALL_STATE(24)] = 317,
  [SMALL_STATE(25)] = 326,
  [SMALL_STATE(26)] = 339,
  [SMALL_STATE(27)] = 352,
  [SMALL_STATE(28)] = 360,
  [SMALL_STATE(29)] = 368,
  [SMALL_STATE(30)] = 376,
  [SMALL_STATE(31)] = 384,
  [SMALL_STATE(32)] = 394,
  [SMALL_STATE(33)] = 402,
  [SMALL_STATE(34)] = 412,
  [SMALL_STATE(35)] = 422,
  [SMALL_STATE(36)] = 432,
  [SMALL_STATE(37)] = 439,
  [SMALL_STATE(38)] = 446,
  [SMALL_STATE(39)] = 453,
  [SMALL_STATE(40)] = 460,
  [SMALL_STATE(41)] = 467,
  [SMALL_STATE(42)] = 474,
  [SMALL_STATE(43)] = 481,
  [SMALL_STATE(44)] = 488,
  [SMALL_STATE(45)] = 495,
  [SMALL_STATE(46)] = 502,
  [SMALL_STATE(47)] = 509,
  [SMALL_STATE(48)] = 516,
  [SMALL_STATE(49)] = 523,
  [SMALL_STATE(50)] = 530,
  [SMALL_STATE(51)] = 537,
  [SMALL_STATE(52)] = 544,
  [SMALL_STATE(53)] = 551,
  [SMALL_STATE(54)] = 558,
  [SMALL_STATE(55)] = 565,
  [SMALL_STATE(56)] = 572,
  [SMALL_STATE(57)] = 579,
  [SMALL_STATE(58)] = 586,
  [SMALL_STATE(59)] = 593,
  [SMALL_STATE(60)] = 600,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(15),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(11),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_body_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_body_repeat1, 2), SHIFT_REPEAT(4),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_statement, 3),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(13),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_constant, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(12),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutine_body, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutine_body, 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 5),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_type, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 5),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_body, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutine_call, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_expression, 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_body, 3),
  [138] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 4),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_jack(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
