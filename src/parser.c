#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 97
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 64
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_class = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_static = 4,
  anon_sym_COMMA = 5,
  anon_sym_SEMI = 6,
  anon_sym_field = 7,
  anon_sym_constructor = 8,
  anon_sym_function = 9,
  anon_sym_void = 10,
  anon_sym_int = 11,
  anon_sym_char = 12,
  anon_sym_boolean = 13,
  anon_sym_LPAREN = 14,
  anon_sym_RPAREN = 15,
  anon_sym_var = 16,
  anon_sym_let = 17,
  anon_sym_EQ = 18,
  anon_sym_do = 19,
  anon_sym_return = 20,
  anon_sym_DOT = 21,
  anon_sym_DQUOTE = 22,
  aux_sym_string_constant_token1 = 23,
  sym_integer_constant = 24,
  anon_sym_true = 25,
  anon_sym_false = 26,
  anon_sym_this = 27,
  sym_identifier = 28,
  sym_comment = 29,
  sym_class_declaration = 30,
  sym_class_body = 31,
  sym__class_var_declaration = 32,
  sym_static_declaration = 33,
  sym_field_declaration = 34,
  sym__subroutine_declaration = 35,
  sym_constructor_declaration = 36,
  sym_function_declaration = 37,
  sym__subroutine = 38,
  sym_return_type = 39,
  sym_type = 40,
  sym_parameter_list = 41,
  sym_parameter = 42,
  sym_subroutine_body = 43,
  sym_var_declaration = 44,
  sym_statements = 45,
  sym__statement = 46,
  sym_let_statement = 47,
  sym_do_statement = 48,
  sym_return_statement = 49,
  sym_subroutine_call = 50,
  sym_member_expression = 51,
  sym_expression_list = 52,
  sym_expression = 53,
  sym_term = 54,
  sym_string_constant = 55,
  sym_keyword_constant = 56,
  aux_sym_class_body_repeat1 = 57,
  aux_sym_class_body_repeat2 = 58,
  aux_sym_static_declaration_repeat1 = 59,
  aux_sym_parameter_list_repeat1 = 60,
  aux_sym_subroutine_body_repeat1 = 61,
  aux_sym_statements_repeat1 = 62,
  aux_sym_expression_list_repeat1 = 63,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_class] = "class",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_static] = "static",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [anon_sym_field] = "field",
  [anon_sym_constructor] = "constructor",
  [anon_sym_function] = "function",
  [anon_sym_void] = "void",
  [anon_sym_int] = "int",
  [anon_sym_char] = "char",
  [anon_sym_boolean] = "boolean",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_var] = "var",
  [anon_sym_let] = "let",
  [anon_sym_EQ] = "=",
  [anon_sym_do] = "do",
  [anon_sym_return] = "return",
  [anon_sym_DOT] = ".",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_constant_token1] = "string_constant_token1",
  [sym_integer_constant] = "integer_constant",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_this] = "this",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [sym_class_declaration] = "class_declaration",
  [sym_class_body] = "class_body",
  [sym__class_var_declaration] = "_class_var_declaration",
  [sym_static_declaration] = "static_declaration",
  [sym_field_declaration] = "field_declaration",
  [sym__subroutine_declaration] = "_subroutine_declaration",
  [sym_constructor_declaration] = "constructor_declaration",
  [sym_function_declaration] = "function_declaration",
  [sym__subroutine] = "_subroutine",
  [sym_return_type] = "return_type",
  [sym_type] = "type",
  [sym_parameter_list] = "parameter_list",
  [sym_parameter] = "parameter",
  [sym_subroutine_body] = "subroutine_body",
  [sym_var_declaration] = "var_declaration",
  [sym_statements] = "statements",
  [sym__statement] = "_statement",
  [sym_let_statement] = "let_statement",
  [sym_do_statement] = "do_statement",
  [sym_return_statement] = "return_statement",
  [sym_subroutine_call] = "subroutine_call",
  [sym_member_expression] = "member_expression",
  [sym_expression_list] = "expression_list",
  [sym_expression] = "expression",
  [sym_term] = "term",
  [sym_string_constant] = "string_constant",
  [sym_keyword_constant] = "keyword_constant",
  [aux_sym_class_body_repeat1] = "class_body_repeat1",
  [aux_sym_class_body_repeat2] = "class_body_repeat2",
  [aux_sym_static_declaration_repeat1] = "static_declaration_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_subroutine_body_repeat1] = "subroutine_body_repeat1",
  [aux_sym_statements_repeat1] = "statements_repeat1",
  [aux_sym_expression_list_repeat1] = "expression_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_static] = anon_sym_static,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_field] = anon_sym_field,
  [anon_sym_constructor] = anon_sym_constructor,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_char] = anon_sym_char,
  [anon_sym_boolean] = anon_sym_boolean,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_constant_token1] = aux_sym_string_constant_token1,
  [sym_integer_constant] = sym_integer_constant,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_this] = anon_sym_this,
  [sym_identifier] = sym_identifier,
  [sym_comment] = sym_comment,
  [sym_class_declaration] = sym_class_declaration,
  [sym_class_body] = sym_class_body,
  [sym__class_var_declaration] = sym__class_var_declaration,
  [sym_static_declaration] = sym_static_declaration,
  [sym_field_declaration] = sym_field_declaration,
  [sym__subroutine_declaration] = sym__subroutine_declaration,
  [sym_constructor_declaration] = sym_constructor_declaration,
  [sym_function_declaration] = sym_function_declaration,
  [sym__subroutine] = sym__subroutine,
  [sym_return_type] = sym_return_type,
  [sym_type] = sym_type,
  [sym_parameter_list] = sym_parameter_list,
  [sym_parameter] = sym_parameter,
  [sym_subroutine_body] = sym_subroutine_body,
  [sym_var_declaration] = sym_var_declaration,
  [sym_statements] = sym_statements,
  [sym__statement] = sym__statement,
  [sym_let_statement] = sym_let_statement,
  [sym_do_statement] = sym_do_statement,
  [sym_return_statement] = sym_return_statement,
  [sym_subroutine_call] = sym_subroutine_call,
  [sym_member_expression] = sym_member_expression,
  [sym_expression_list] = sym_expression_list,
  [sym_expression] = sym_expression,
  [sym_term] = sym_term,
  [sym_string_constant] = sym_string_constant,
  [sym_keyword_constant] = sym_keyword_constant,
  [aux_sym_class_body_repeat1] = aux_sym_class_body_repeat1,
  [aux_sym_class_body_repeat2] = aux_sym_class_body_repeat2,
  [aux_sym_static_declaration_repeat1] = aux_sym_static_declaration_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_subroutine_body_repeat1] = aux_sym_subroutine_body_repeat1,
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
  [anon_sym_static] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_field] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_constructor] = {
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
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
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
  [sym_integer_constant] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_this] = {
    .visible = true,
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
  [sym__class_var_declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_static_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_field_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__subroutine_declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_constructor_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__subroutine] = {
    .visible = false,
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
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_subroutine_body] = {
    .visible = true,
    .named = true,
  },
  [sym_var_declaration] = {
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
  [sym_let_statement] = {
    .visible = true,
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
  [sym_keyword_constant] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_class_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_body_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_static_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_subroutine_body_repeat1] = {
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
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(66);
      if (lookahead == '"') ADVANCE(92);
      if (lookahead == '(') ADVANCE(84);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == ',') ADVANCE(71);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ';') ADVANCE(72);
      if (lookahead == '=') ADVANCE(88);
      if (lookahead == 'b') ADVANCE(42);
      if (lookahead == 'c') ADVANCE(25);
      if (lookahead == 'd') ADVANCE(40);
      if (lookahead == 'f') ADVANCE(8);
      if (lookahead == 'i') ADVANCE(38);
      if (lookahead == 'l') ADVANCE(21);
      if (lookahead == 'r') ADVANCE(23);
      if (lookahead == 's') ADVANCE(58);
      if (lookahead == 't') ADVANCE(26);
      if (lookahead == 'v') ADVANCE(9);
      if (lookahead == '{') ADVANCE(68);
      if (lookahead == '}') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(92);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ';') ADVANCE(72);
      if (lookahead == 'f') ADVANCE(106);
      if (lookahead == 't') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == 'b') ADVANCE(123);
      if (lookahead == 'c') ADVANCE(114);
      if (lookahead == 'i') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(131);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == 'b') ADVANCE(123);
      if (lookahead == 'c') ADVANCE(114);
      if (lookahead == 'i') ADVANCE(119);
      if (lookahead == 'v') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(22);
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(45);
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(60);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(62);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(76);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(73);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 25:
      if (lookahead == 'h') ADVANCE(11);
      if (lookahead == 'l') ADVANCE(10);
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 26:
      if (lookahead == 'h') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(14);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 50:
      if (lookahead == 's') ADVANCE(104);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 52:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 53:
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 54:
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 63:
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 64:
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 65:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_field);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_constructor);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_char);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_string_constant_token1);
      if (lookahead == '"') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_string_constant_token1);
      if (lookahead == '*') ADVANCE(96);
      if (lookahead == '/') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(98);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_string_constant_token1);
      if (lookahead == '*') ADVANCE(95);
      if (lookahead == '/') ADVANCE(98);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(5);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_string_constant_token1);
      if (lookahead == '*') ADVANCE(95);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(5);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_string_constant_token1);
      if (lookahead == '/') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_string_constant_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_integer_constant);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_this);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_this);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(116);
      if (lookahead == 'r') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(131);
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
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 2},
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
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 97},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 7},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 7},
  [75] = {.lex_state = 7},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 7},
  [78] = {.lex_state = 7},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 7},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 7},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 7},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 7},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_static] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_field] = ACTIONS(1),
    [anon_sym_constructor] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_char] = ACTIONS(1),
    [anon_sym_boolean] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_integer_constant] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_this] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_class_declaration] = STATE(91),
    [anon_sym_class] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 1,
      anon_sym_static,
    ACTIONS(11), 1,
      anon_sym_field,
    ACTIONS(13), 1,
      anon_sym_constructor,
    ACTIONS(15), 1,
      anon_sym_function,
    STATE(11), 4,
      sym__class_var_declaration,
      sym_static_declaration,
      sym_field_declaration,
      aux_sym_class_body_repeat1,
    STATE(18), 4,
      sym__subroutine_declaration,
      sym_constructor_declaration,
      sym_function_declaration,
      aux_sym_class_body_repeat2,
  [31] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    ACTIONS(19), 1,
      anon_sym_var,
    ACTIONS(21), 1,
      anon_sym_let,
    ACTIONS(23), 1,
      anon_sym_do,
    ACTIONS(25), 1,
      anon_sym_return,
    STATE(82), 1,
      sym_statements,
    STATE(5), 2,
      sym_var_declaration,
      aux_sym_subroutine_body_repeat1,
    STATE(10), 2,
      sym__statement,
      aux_sym_statements_repeat1,
    STATE(76), 3,
      sym_let_statement,
      sym_do_statement,
      sym_return_statement,
  [66] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_static,
    ACTIONS(11), 1,
      anon_sym_field,
    ACTIONS(13), 1,
      anon_sym_constructor,
    ACTIONS(15), 1,
      anon_sym_function,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    STATE(2), 4,
      sym__class_var_declaration,
      sym_static_declaration,
      sym_field_declaration,
      aux_sym_class_body_repeat1,
    STATE(17), 4,
      sym__subroutine_declaration,
      sym_constructor_declaration,
      sym_function_declaration,
      aux_sym_class_body_repeat2,
  [97] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_var,
    ACTIONS(21), 1,
      anon_sym_let,
    ACTIONS(23), 1,
      anon_sym_do,
    ACTIONS(25), 1,
      anon_sym_return,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    STATE(73), 1,
      sym_statements,
    STATE(10), 2,
      sym__statement,
      aux_sym_statements_repeat1,
    STATE(16), 2,
      sym_var_declaration,
      aux_sym_subroutine_body_repeat1,
    STATE(76), 3,
      sym_let_statement,
      sym_do_statement,
      sym_return_statement,
  [132] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_SEMI,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      sym_integer_constant,
    ACTIONS(39), 1,
      sym_identifier,
    STATE(46), 1,
      sym_term,
    STATE(69), 1,
      sym_expression,
    STATE(34), 2,
      sym_string_constant,
      sym_keyword_constant,
    ACTIONS(37), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_this,
  [163] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      sym_integer_constant,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_RPAREN,
    STATE(46), 1,
      sym_term,
    STATE(49), 1,
      sym_expression,
    STATE(34), 2,
      sym_string_constant,
      sym_keyword_constant,
    ACTIONS(37), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_this,
  [194] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      sym_integer_constant,
    ACTIONS(39), 1,
      sym_identifier,
    STATE(46), 1,
      sym_term,
    STATE(85), 1,
      sym_expression,
    STATE(34), 2,
      sym_string_constant,
      sym_keyword_constant,
    ACTIONS(37), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_this,
  [222] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      sym_integer_constant,
    ACTIONS(39), 1,
      sym_identifier,
    STATE(46), 1,
      sym_term,
    STATE(61), 1,
      sym_expression,
    STATE(34), 2,
      sym_string_constant,
      sym_keyword_constant,
    ACTIONS(37), 3,
      anon_sym_true,
      anon_sym_false,
      anon_sym_this,
  [250] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_let,
    ACTIONS(23), 1,
      anon_sym_do,
    ACTIONS(25), 1,
      anon_sym_return,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(12), 2,
      sym__statement,
      aux_sym_statements_repeat1,
    STATE(76), 3,
      sym_let_statement,
      sym_do_statement,
      sym_return_statement,
  [275] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_static,
    ACTIONS(50), 1,
      anon_sym_field,
    ACTIONS(45), 3,
      anon_sym_RBRACE,
      anon_sym_constructor,
      anon_sym_function,
    STATE(11), 4,
      sym__class_var_declaration,
      sym_static_declaration,
      sym_field_declaration,
      aux_sym_class_body_repeat1,
  [296] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    ACTIONS(55), 1,
      anon_sym_let,
    ACTIONS(58), 1,
      anon_sym_do,
    ACTIONS(61), 1,
      anon_sym_return,
    STATE(12), 2,
      sym__statement,
      aux_sym_statements_repeat1,
    STATE(76), 3,
      sym_let_statement,
      sym_do_statement,
      sym_return_statement,
  [321] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      anon_sym_void,
    STATE(43), 1,
      sym__subroutine,
    STATE(71), 1,
      sym_return_type,
    STATE(72), 1,
      sym_type,
    ACTIONS(66), 4,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      sym_identifier,
  [343] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      anon_sym_void,
    STATE(53), 1,
      sym__subroutine,
    STATE(71), 1,
      sym_return_type,
    STATE(72), 1,
      sym_type,
    ACTIONS(66), 4,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      sym_identifier,
  [365] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_RBRACE,
    ACTIONS(70), 1,
      anon_sym_constructor,
    ACTIONS(73), 1,
      anon_sym_function,
    STATE(15), 4,
      sym__subroutine_declaration,
      sym_constructor_declaration,
      sym_function_declaration,
      aux_sym_class_body_repeat2,
  [384] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_var,
    STATE(16), 2,
      sym_var_declaration,
      aux_sym_subroutine_body_repeat1,
    ACTIONS(76), 4,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_do,
      anon_sym_return,
  [401] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 1,
      anon_sym_constructor,
    ACTIONS(15), 1,
      anon_sym_function,
    STATE(15), 4,
      sym__subroutine_declaration,
      sym_constructor_declaration,
      sym_function_declaration,
      aux_sym_class_body_repeat2,
  [420] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_constructor,
    ACTIONS(15), 1,
      anon_sym_function,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    STATE(15), 4,
      sym__subroutine_declaration,
      sym_constructor_declaration,
      sym_function_declaration,
      aux_sym_class_body_repeat2,
  [439] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
    STATE(44), 1,
      sym_parameter,
    STATE(93), 1,
      sym_type,
    ACTIONS(66), 4,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      sym_identifier,
  [458] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(58), 1,
      sym_parameter,
    STATE(93), 1,
      sym_type,
    ACTIONS(66), 4,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      sym_identifier,
  [474] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(74), 1,
      sym_type,
    ACTIONS(66), 4,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      sym_identifier,
  [487] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 5,
      anon_sym_RBRACE,
      anon_sym_static,
      anon_sym_field,
      anon_sym_constructor,
      anon_sym_function,
  [498] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(68), 1,
      sym_type,
    ACTIONS(66), 4,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      sym_identifier,
  [511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 5,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_let,
      anon_sym_do,
      anon_sym_return,
  [522] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(75), 1,
      sym_type,
    ACTIONS(66), 4,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      sym_identifier,
  [535] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 5,
      anon_sym_RBRACE,
      anon_sym_static,
      anon_sym_field,
      anon_sym_constructor,
      anon_sym_function,
  [546] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 5,
      anon_sym_RBRACE,
      anon_sym_var,
      anon_sym_let,
      anon_sym_do,
      anon_sym_return,
  [557] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 5,
      anon_sym_RBRACE,
      anon_sym_static,
      anon_sym_field,
      anon_sym_constructor,
      anon_sym_function,
  [568] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 5,
      anon_sym_RBRACE,
      anon_sym_static,
      anon_sym_field,
      anon_sym_constructor,
      anon_sym_function,
  [579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 4,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_do,
      anon_sym_return,
  [589] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 3,
      anon_sym_RBRACE,
      anon_sym_constructor,
      anon_sym_function,
  [598] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_COMMA,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      aux_sym_expression_list_repeat1,
  [611] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_COMMA,
    ACTIONS(107), 1,
      anon_sym_SEMI,
    STATE(38), 1,
      aux_sym_static_declaration_repeat1,
  [624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [633] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_COMMA,
    ACTIONS(114), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      aux_sym_expression_list_repeat1,
  [646] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_COMMA,
    ACTIONS(119), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      aux_sym_parameter_list_repeat1,
  [659] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_COMMA,
    ACTIONS(121), 1,
      anon_sym_SEMI,
    STATE(41), 1,
      aux_sym_static_declaration_repeat1,
  [672] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_COMMA,
    ACTIONS(123), 1,
      anon_sym_SEMI,
    STATE(41), 1,
      aux_sym_static_declaration_repeat1,
  [685] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_COMMA,
    ACTIONS(125), 1,
      anon_sym_SEMI,
    STATE(37), 1,
      aux_sym_static_declaration_repeat1,
  [698] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [707] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_COMMA,
    ACTIONS(132), 1,
      anon_sym_SEMI,
    STATE(41), 1,
      aux_sym_static_declaration_repeat1,
  [720] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 3,
      anon_sym_RBRACE,
      anon_sym_constructor,
      anon_sym_function,
  [729] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 3,
      anon_sym_RBRACE,
      anon_sym_constructor,
      anon_sym_function,
  [738] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_COMMA,
    ACTIONS(140), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      aux_sym_parameter_list_repeat1,
  [751] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 3,
      anon_sym_RBRACE,
      anon_sym_constructor,
      anon_sym_function,
  [760] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [769] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 3,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [778] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_COMMA,
    ACTIONS(148), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      aux_sym_parameter_list_repeat1,
  [791] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_COMMA,
    ACTIONS(150), 1,
      anon_sym_RPAREN,
    STATE(32), 1,
      aux_sym_expression_list_repeat1,
  [804] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_COMMA,
    ACTIONS(152), 1,
      anon_sym_SEMI,
    STATE(41), 1,
      aux_sym_static_declaration_repeat1,
  [817] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 3,
      anon_sym_RBRACE,
      anon_sym_constructor,
      anon_sym_function,
  [826] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      sym_identifier,
    STATE(62), 1,
      sym_member_expression,
    STATE(65), 1,
      sym_subroutine_call,
  [839] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 3,
      anon_sym_RBRACE,
      anon_sym_constructor,
      anon_sym_function,
  [848] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_COMMA,
    ACTIONS(160), 1,
      anon_sym_SEMI,
    STATE(50), 1,
      aux_sym_static_declaration_repeat1,
  [861] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym_subroutine_body,
  [871] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_LPAREN,
    STATE(55), 1,
      sym_parameter_list,
  [881] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [889] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [897] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    STATE(83), 1,
      sym_class_body,
  [907] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [915] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [923] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    STATE(64), 1,
      sym_expression_list,
  [933] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_DOT,
  [940] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_SEMI,
  [947] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_SEMI,
  [954] = 2,
    ACTIONS(178), 1,
      aux_sym_string_constant_token1,
    ACTIONS(180), 1,
      sym_comment,
  [961] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      ts_builtin_sym_end,
  [968] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      sym_identifier,
  [975] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_SEMI,
  [982] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
  [989] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      sym_identifier,
  [996] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      sym_identifier,
  [1003] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_RBRACE,
  [1010] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      sym_identifier,
  [1017] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      sym_identifier,
  [1024] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_SEMI,
  [1031] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      sym_identifier,
  [1038] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      sym_identifier,
  [1045] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      ts_builtin_sym_end,
  [1052] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_EQ,
  [1059] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_DQUOTE,
  [1066] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
  [1073] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      ts_builtin_sym_end,
  [1080] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      sym_identifier,
  [1087] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_SEMI,
  [1094] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_LPAREN,
  [1101] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      anon_sym_SEMI,
  [1108] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      ts_builtin_sym_end,
  [1115] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_identifier,
  [1122] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LBRACE,
  [1129] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
  [1136] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_SEMI,
  [1143] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_identifier,
  [1150] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_LBRACE,
  [1157] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_SEMI,
  [1164] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 66,
  [SMALL_STATE(5)] = 97,
  [SMALL_STATE(6)] = 132,
  [SMALL_STATE(7)] = 163,
  [SMALL_STATE(8)] = 194,
  [SMALL_STATE(9)] = 222,
  [SMALL_STATE(10)] = 250,
  [SMALL_STATE(11)] = 275,
  [SMALL_STATE(12)] = 296,
  [SMALL_STATE(13)] = 321,
  [SMALL_STATE(14)] = 343,
  [SMALL_STATE(15)] = 365,
  [SMALL_STATE(16)] = 384,
  [SMALL_STATE(17)] = 401,
  [SMALL_STATE(18)] = 420,
  [SMALL_STATE(19)] = 439,
  [SMALL_STATE(20)] = 458,
  [SMALL_STATE(21)] = 474,
  [SMALL_STATE(22)] = 487,
  [SMALL_STATE(23)] = 498,
  [SMALL_STATE(24)] = 511,
  [SMALL_STATE(25)] = 522,
  [SMALL_STATE(26)] = 535,
  [SMALL_STATE(27)] = 546,
  [SMALL_STATE(28)] = 557,
  [SMALL_STATE(29)] = 568,
  [SMALL_STATE(30)] = 579,
  [SMALL_STATE(31)] = 589,
  [SMALL_STATE(32)] = 598,
  [SMALL_STATE(33)] = 611,
  [SMALL_STATE(34)] = 624,
  [SMALL_STATE(35)] = 633,
  [SMALL_STATE(36)] = 646,
  [SMALL_STATE(37)] = 659,
  [SMALL_STATE(38)] = 672,
  [SMALL_STATE(39)] = 685,
  [SMALL_STATE(40)] = 698,
  [SMALL_STATE(41)] = 707,
  [SMALL_STATE(42)] = 720,
  [SMALL_STATE(43)] = 729,
  [SMALL_STATE(44)] = 738,
  [SMALL_STATE(45)] = 751,
  [SMALL_STATE(46)] = 760,
  [SMALL_STATE(47)] = 769,
  [SMALL_STATE(48)] = 778,
  [SMALL_STATE(49)] = 791,
  [SMALL_STATE(50)] = 804,
  [SMALL_STATE(51)] = 817,
  [SMALL_STATE(52)] = 826,
  [SMALL_STATE(53)] = 839,
  [SMALL_STATE(54)] = 848,
  [SMALL_STATE(55)] = 861,
  [SMALL_STATE(56)] = 871,
  [SMALL_STATE(57)] = 881,
  [SMALL_STATE(58)] = 889,
  [SMALL_STATE(59)] = 897,
  [SMALL_STATE(60)] = 907,
  [SMALL_STATE(61)] = 915,
  [SMALL_STATE(62)] = 923,
  [SMALL_STATE(63)] = 933,
  [SMALL_STATE(64)] = 940,
  [SMALL_STATE(65)] = 947,
  [SMALL_STATE(66)] = 954,
  [SMALL_STATE(67)] = 961,
  [SMALL_STATE(68)] = 968,
  [SMALL_STATE(69)] = 975,
  [SMALL_STATE(70)] = 982,
  [SMALL_STATE(71)] = 989,
  [SMALL_STATE(72)] = 996,
  [SMALL_STATE(73)] = 1003,
  [SMALL_STATE(74)] = 1010,
  [SMALL_STATE(75)] = 1017,
  [SMALL_STATE(76)] = 1024,
  [SMALL_STATE(77)] = 1031,
  [SMALL_STATE(78)] = 1038,
  [SMALL_STATE(79)] = 1045,
  [SMALL_STATE(80)] = 1052,
  [SMALL_STATE(81)] = 1059,
  [SMALL_STATE(82)] = 1066,
  [SMALL_STATE(83)] = 1073,
  [SMALL_STATE(84)] = 1080,
  [SMALL_STATE(85)] = 1087,
  [SMALL_STATE(86)] = 1094,
  [SMALL_STATE(87)] = 1101,
  [SMALL_STATE(88)] = 1108,
  [SMALL_STATE(89)] = 1115,
  [SMALL_STATE(90)] = 1122,
  [SMALL_STATE(91)] = 1129,
  [SMALL_STATE(92)] = 1136,
  [SMALL_STATE(93)] = 1143,
  [SMALL_STATE(94)] = 1150,
  [SMALL_STATE(95)] = 1157,
  [SMALL_STATE(96)] = 1164,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_body_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_body_repeat1, 2), SHIFT_REPEAT(25),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_body_repeat1, 2), SHIFT_REPEAT(21),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(84),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(52),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(6),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_body_repeat2, 2),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_body_repeat2, 2), SHIFT_REPEAT(13),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_body_repeat2, 2), SHIFT_REPEAT(14),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subroutine_body_repeat1, 2),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subroutine_body_repeat1, 2), SHIFT_REPEAT(23),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_declaration, 5),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 4),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 4),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 5),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_declaration, 5),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_declaration, 4),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutine_body, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(9),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(20),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword_constant, 1),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_static_declaration_repeat1, 2), SHIFT_REPEAT(96),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_static_declaration_repeat1, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutine_body, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_declaration, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__subroutine, 4),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_constant, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutine_body, 4),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutine_call, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_statement, 2),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_body, 4),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_type, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_body, 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_declaration, 3),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 4),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_expression, 3),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_body, 3),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [228] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 3),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 4),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
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
