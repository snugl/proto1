#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 101
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 69
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 3

enum {
  sym_comment = 1,
  anon_sym_use = 2,
  anon_sym_seq = 3,
  anon_sym_COMMA = 4,
  anon_sym_rout = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  sym_seq_name = 8,
  anon_sym_put = 9,
  anon_sym_EQ = 10,
  anon_sym_debug = 11,
  anon_sym_trans = 12,
  anon_sym_pers = 13,
  anon_sym_sub = 14,
  anon_sym_lab = 15,
  anon_sym_jump = 16,
  anon_sym_PLUS = 17,
  anon_sym_DASH = 18,
  anon_sym_STAR = 19,
  anon_sym_GT = 20,
  anon_sym_LT = 21,
  anon_sym_DOT = 22,
  anon_sym_SQUOTE = 23,
  sym_debug_literal = 24,
  anon_sym_LBRACE = 25,
  anon_sym_RBRACE = 26,
  sym_key_in = 27,
  sym_key_out = 28,
  sym_eos = 29,
  sym_bind = 30,
  aux_sym_string_token1 = 31,
  sym_iden = 32,
  sym_number = 33,
  sym_source_file = 34,
  sym_unit = 35,
  sym_import = 36,
  sym_sequence = 37,
  sym_routine = 38,
  sym_param_interface = 39,
  sym_param_def = 40,
  sym_param_name = 41,
  sym_rout_name = 42,
  sym_seq_entry = 43,
  sym_statement = 44,
  sym_put = 45,
  sym_debug = 46,
  sym_trans = 47,
  sym_pers = 48,
  sym_sub = 49,
  sym_lab = 50,
  sym_jump = 51,
  sym_expr = 52,
  sym_binary = 53,
  sym_paran = 54,
  sym_op = 55,
  sym_label = 56,
  sym_variable = 57,
  sym_debug_string = 58,
  sym_debug_variable = 59,
  sym_open_scope = 60,
  sym_close_scope = 61,
  sym_string = 62,
  aux_sym_source_file_repeat1 = 63,
  aux_sym_sequence_repeat1 = 64,
  aux_sym_routine_repeat1 = 65,
  aux_sym_param_interface_repeat1 = 66,
  aux_sym_sub_repeat1 = 67,
  aux_sym_debug_string_repeat1 = 68,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_use] = "use",
  [anon_sym_seq] = "seq",
  [anon_sym_COMMA] = ",",
  [anon_sym_rout] = "rout",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_seq_name] = "seq_name",
  [anon_sym_put] = "put",
  [anon_sym_EQ] = "=",
  [anon_sym_debug] = "debug",
  [anon_sym_trans] = "trans",
  [anon_sym_pers] = "pers",
  [anon_sym_sub] = "sub",
  [anon_sym_lab] = "lab",
  [anon_sym_jump] = "jump",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_DOT] = ".",
  [anon_sym_SQUOTE] = "'",
  [sym_debug_literal] = "debug_literal",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_key_in] = "key_in",
  [sym_key_out] = "key_out",
  [sym_eos] = "eos",
  [sym_bind] = "bind",
  [aux_sym_string_token1] = "string_token1",
  [sym_iden] = "iden",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym_unit] = "unit",
  [sym_import] = "import",
  [sym_sequence] = "sequence",
  [sym_routine] = "routine",
  [sym_param_interface] = "param_interface",
  [sym_param_def] = "param_def",
  [sym_param_name] = "param_name",
  [sym_rout_name] = "rout_name",
  [sym_seq_entry] = "seq_entry",
  [sym_statement] = "statement",
  [sym_put] = "put",
  [sym_debug] = "debug",
  [sym_trans] = "trans",
  [sym_pers] = "pers",
  [sym_sub] = "sub",
  [sym_lab] = "lab",
  [sym_jump] = "jump",
  [sym_expr] = "expr",
  [sym_binary] = "binary",
  [sym_paran] = "paran",
  [sym_op] = "op",
  [sym_label] = "label",
  [sym_variable] = "variable",
  [sym_debug_string] = "debug_string",
  [sym_debug_variable] = "debug_variable",
  [sym_open_scope] = "open_scope",
  [sym_close_scope] = "close_scope",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_sequence_repeat1] = "sequence_repeat1",
  [aux_sym_routine_repeat1] = "routine_repeat1",
  [aux_sym_param_interface_repeat1] = "param_interface_repeat1",
  [aux_sym_sub_repeat1] = "sub_repeat1",
  [aux_sym_debug_string_repeat1] = "debug_string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_seq] = anon_sym_seq,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_rout] = anon_sym_rout,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_seq_name] = sym_seq_name,
  [anon_sym_put] = anon_sym_put,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_debug] = anon_sym_debug,
  [anon_sym_trans] = anon_sym_trans,
  [anon_sym_pers] = anon_sym_pers,
  [anon_sym_sub] = anon_sym_sub,
  [anon_sym_lab] = anon_sym_lab,
  [anon_sym_jump] = anon_sym_jump,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym_debug_literal] = sym_debug_literal,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_key_in] = sym_key_in,
  [sym_key_out] = sym_key_out,
  [sym_eos] = sym_eos,
  [sym_bind] = sym_bind,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_iden] = sym_iden,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym_unit] = sym_unit,
  [sym_import] = sym_import,
  [sym_sequence] = sym_sequence,
  [sym_routine] = sym_routine,
  [sym_param_interface] = sym_param_interface,
  [sym_param_def] = sym_param_def,
  [sym_param_name] = sym_param_name,
  [sym_rout_name] = sym_rout_name,
  [sym_seq_entry] = sym_seq_entry,
  [sym_statement] = sym_statement,
  [sym_put] = sym_put,
  [sym_debug] = sym_debug,
  [sym_trans] = sym_trans,
  [sym_pers] = sym_pers,
  [sym_sub] = sym_sub,
  [sym_lab] = sym_lab,
  [sym_jump] = sym_jump,
  [sym_expr] = sym_expr,
  [sym_binary] = sym_binary,
  [sym_paran] = sym_paran,
  [sym_op] = sym_op,
  [sym_label] = sym_label,
  [sym_variable] = sym_variable,
  [sym_debug_string] = sym_debug_string,
  [sym_debug_variable] = sym_debug_variable,
  [sym_open_scope] = sym_open_scope,
  [sym_close_scope] = sym_close_scope,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_sequence_repeat1] = aux_sym_sequence_repeat1,
  [aux_sym_routine_repeat1] = aux_sym_routine_repeat1,
  [aux_sym_param_interface_repeat1] = aux_sym_param_interface_repeat1,
  [aux_sym_sub_repeat1] = aux_sym_sub_repeat1,
  [aux_sym_debug_string_repeat1] = aux_sym_debug_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_use] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_seq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rout] = {
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
  [sym_seq_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_put] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_debug] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trans] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pers] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lab] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jump] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_debug_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_key_in] = {
    .visible = true,
    .named = true,
  },
  [sym_key_out] = {
    .visible = true,
    .named = true,
  },
  [sym_eos] = {
    .visible = true,
    .named = true,
  },
  [sym_bind] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_iden] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_unit] = {
    .visible = true,
    .named = true,
  },
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [sym_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_routine] = {
    .visible = true,
    .named = true,
  },
  [sym_param_interface] = {
    .visible = true,
    .named = true,
  },
  [sym_param_def] = {
    .visible = true,
    .named = true,
  },
  [sym_param_name] = {
    .visible = true,
    .named = true,
  },
  [sym_rout_name] = {
    .visible = true,
    .named = true,
  },
  [sym_seq_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_put] = {
    .visible = true,
    .named = true,
  },
  [sym_debug] = {
    .visible = true,
    .named = true,
  },
  [sym_trans] = {
    .visible = true,
    .named = true,
  },
  [sym_pers] = {
    .visible = true,
    .named = true,
  },
  [sym_sub] = {
    .visible = true,
    .named = true,
  },
  [sym_lab] = {
    .visible = true,
    .named = true,
  },
  [sym_jump] = {
    .visible = true,
    .named = true,
  },
  [sym_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_binary] = {
    .visible = true,
    .named = true,
  },
  [sym_paran] = {
    .visible = true,
    .named = true,
  },
  [sym_op] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_debug_string] = {
    .visible = true,
    .named = true,
  },
  [sym_debug_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_open_scope] = {
    .visible = true,
    .named = true,
  },
  [sym_close_scope] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sequence_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_routine_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_param_interface_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sub_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_debug_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_content = 1,
  field_left = 2,
  field_op = 3,
  field_right = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_content] = "content",
  [field_left] = "left",
  [field_op] = "op",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_content, 0},
  [1] =
    {field_left, 0},
    {field_op, 1},
    {field_right, 2},
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
  [78] = 30,
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
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(34);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '\'') ADVANCE(58);
      if (lookahead == '(') ADVANCE(40);
      if (lookahead == ')') ADVANCE(41);
      if (lookahead == '*') ADVANCE(54);
      if (lookahead == '+') ADVANCE(52);
      if (lookahead == ',') ADVANCE(38);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == ';') ADVANCE(68);
      if (lookahead == '<') ADVANCE(56);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '>') ADVANCE(55);
      if (lookahead == 'd') ADVANCE(10);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'j') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(6);
      if (lookahead == 'o') ADVANCE(30);
      if (lookahead == 'p') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(18);
      if (lookahead == 's') ADVANCE(11);
      if (lookahead == 't') ADVANCE(21);
      if (lookahead == 'u') ADVANCE(25);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == '}') ADVANCE(65);
      if (lookahead == '~') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(58);
      if (lookahead == '(') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (lookahead == ':' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(58);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(62);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(41);
      if (lookahead == '*') ADVANCE(54);
      if (lookahead == '+') ADVANCE(52);
      if (lookahead == ',') ADVANCE(38);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == ';') ADVANCE(68);
      if (lookahead == '<') ADVANCE(56);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '>') ADVANCE(55);
      if (lookahead == '}') ADVANCE(65);
      if (lookahead == '~') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == 'b') ADVANCE(50);
      END_STATE();
    case 8:
      if (lookahead == 'b') ADVANCE(49);
      END_STATE();
    case 9:
      if (lookahead == 'b') ADVANCE(31);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(20);
      if (lookahead == 'u') ADVANCE(8);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 14:
      if (lookahead == 'g') ADVANCE(46);
      END_STATE();
    case 15:
      if (lookahead == 'm') ADVANCE(19);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 19:
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 20:
      if (lookahead == 'q') ADVANCE(37);
      END_STATE();
    case 21:
      if (lookahead == 'r') ADVANCE(5);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 24:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 25:
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 29:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 30:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 31:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 32:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 33:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_seq);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_rout);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_seq_name);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_seq_name);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_put);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_debug);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_trans);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_pers);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_lab);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_jump);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_debug_literal);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_debug_literal);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(59);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_debug_literal);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_debug_literal);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(72);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_key_in);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_key_out);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_eos);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_bind);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '{') ADVANCE(64);
      if (lookahead == '}') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(59);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_iden);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
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
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 2},
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
  [41] = {.lex_state = 70},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 71},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_seq] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_rout] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_seq_name] = ACTIONS(1),
    [anon_sym_put] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_debug] = ACTIONS(1),
    [anon_sym_trans] = ACTIONS(1),
    [anon_sym_pers] = ACTIONS(1),
    [anon_sym_sub] = ACTIONS(1),
    [anon_sym_lab] = ACTIONS(1),
    [anon_sym_jump] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_key_in] = ACTIONS(1),
    [sym_key_out] = ACTIONS(1),
    [sym_eos] = ACTIONS(1),
    [sym_bind] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(94),
    [sym_unit] = STATE(14),
    [sym_import] = STATE(55),
    [sym_sequence] = STATE(55),
    [sym_routine] = STATE(55),
    [aux_sym_source_file_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_use] = ACTIONS(7),
    [anon_sym_seq] = ACTIONS(9),
    [anon_sym_rout] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_put,
    ACTIONS(17), 1,
      anon_sym_debug,
    ACTIONS(19), 1,
      anon_sym_trans,
    ACTIONS(21), 1,
      anon_sym_pers,
    ACTIONS(23), 1,
      anon_sym_sub,
    ACTIONS(25), 1,
      anon_sym_lab,
    ACTIONS(27), 1,
      anon_sym_jump,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    STATE(57), 1,
      sym_close_scope,
    STATE(5), 2,
      sym_statement,
      aux_sym_routine_repeat1,
    STATE(83), 7,
      sym_put,
      sym_debug,
      sym_trans,
      sym_pers,
      sym_sub,
      sym_lab,
      sym_jump,
  [44] = 12,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_put,
    ACTIONS(17), 1,
      anon_sym_debug,
    ACTIONS(19), 1,
      anon_sym_trans,
    ACTIONS(21), 1,
      anon_sym_pers,
    ACTIONS(23), 1,
      anon_sym_sub,
    ACTIONS(25), 1,
      anon_sym_lab,
    ACTIONS(27), 1,
      anon_sym_jump,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    STATE(44), 1,
      sym_close_scope,
    STATE(6), 2,
      sym_statement,
      aux_sym_routine_repeat1,
    STATE(83), 7,
      sym_put,
      sym_debug,
      sym_trans,
      sym_pers,
      sym_sub,
      sym_lab,
      sym_jump,
  [88] = 12,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_put,
    ACTIONS(17), 1,
      anon_sym_debug,
    ACTIONS(19), 1,
      anon_sym_trans,
    ACTIONS(21), 1,
      anon_sym_pers,
    ACTIONS(23), 1,
      anon_sym_sub,
    ACTIONS(25), 1,
      anon_sym_lab,
    ACTIONS(27), 1,
      anon_sym_jump,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    STATE(50), 1,
      sym_close_scope,
    STATE(3), 2,
      sym_statement,
      aux_sym_routine_repeat1,
    STATE(83), 7,
      sym_put,
      sym_debug,
      sym_trans,
      sym_pers,
      sym_sub,
      sym_lab,
      sym_jump,
  [132] = 12,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_put,
    ACTIONS(17), 1,
      anon_sym_debug,
    ACTIONS(19), 1,
      anon_sym_trans,
    ACTIONS(21), 1,
      anon_sym_pers,
    ACTIONS(23), 1,
      anon_sym_sub,
    ACTIONS(25), 1,
      anon_sym_lab,
    ACTIONS(27), 1,
      anon_sym_jump,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    STATE(50), 1,
      sym_close_scope,
    STATE(6), 2,
      sym_statement,
      aux_sym_routine_repeat1,
    STATE(83), 7,
      sym_put,
      sym_debug,
      sym_trans,
      sym_pers,
      sym_sub,
      sym_lab,
      sym_jump,
  [176] = 11,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(34), 1,
      anon_sym_put,
    ACTIONS(37), 1,
      anon_sym_debug,
    ACTIONS(40), 1,
      anon_sym_trans,
    ACTIONS(43), 1,
      anon_sym_pers,
    ACTIONS(46), 1,
      anon_sym_sub,
    ACTIONS(49), 1,
      anon_sym_lab,
    ACTIONS(52), 1,
      anon_sym_jump,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    STATE(6), 2,
      sym_statement,
      aux_sym_routine_repeat1,
    STATE(83), 7,
      sym_put,
      sym_debug,
      sym_trans,
      sym_pers,
      sym_sub,
      sym_lab,
      sym_jump,
  [217] = 1,
    ACTIONS(57), 13,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
      anon_sym_RBRACE,
      sym_eos,
      sym_bind,
      sym_iden,
  [233] = 2,
    STATE(22), 1,
      sym_op,
    ACTIONS(59), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
      sym_eos,
      sym_bind,
      sym_iden,
  [251] = 1,
    ACTIONS(61), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
      sym_eos,
      sym_bind,
      sym_iden,
  [266] = 1,
    ACTIONS(63), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
      sym_eos,
      sym_bind,
      sym_iden,
  [281] = 1,
    ACTIONS(65), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
      sym_eos,
      sym_bind,
      sym_iden,
  [296] = 1,
    ACTIONS(67), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
      sym_eos,
      sym_bind,
      sym_iden,
  [311] = 8,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      sym_number,
    STATE(34), 1,
      sym_expr,
    STATE(100), 1,
      sym_debug_string,
    ACTIONS(71), 2,
      sym_seq_name,
      sym_iden,
    STATE(10), 2,
      sym_variable,
      sym_string,
    STATE(11), 2,
      sym_binary,
      sym_paran,
  [339] = 7,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_use,
    ACTIONS(9), 1,
      anon_sym_seq,
    ACTIONS(11), 1,
      anon_sym_rout,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    STATE(26), 2,
      sym_unit,
      aux_sym_source_file_repeat1,
    STATE(55), 3,
      sym_import,
      sym_sequence,
      sym_routine,
  [364] = 4,
    ACTIONS(79), 1,
      anon_sym_COMMA,
    STATE(22), 1,
      sym_op,
    ACTIONS(81), 2,
      anon_sym_RPAREN,
      sym_iden,
    ACTIONS(83), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [383] = 7,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    STATE(39), 1,
      sym_expr,
    ACTIONS(71), 2,
      sym_seq_name,
      sym_iden,
    STATE(10), 2,
      sym_variable,
      sym_string,
    STATE(11), 2,
      sym_binary,
      sym_paran,
  [408] = 7,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    STATE(36), 1,
      sym_expr,
    ACTIONS(71), 2,
      sym_seq_name,
      sym_iden,
    STATE(10), 2,
      sym_variable,
      sym_string,
    STATE(11), 2,
      sym_binary,
      sym_paran,
  [433] = 7,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    STATE(35), 1,
      sym_expr,
    ACTIONS(71), 2,
      sym_seq_name,
      sym_iden,
    STATE(10), 2,
      sym_variable,
      sym_string,
    STATE(11), 2,
      sym_binary,
      sym_paran,
  [458] = 7,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    STATE(32), 1,
      sym_expr,
    ACTIONS(71), 2,
      sym_seq_name,
      sym_iden,
    STATE(10), 2,
      sym_variable,
      sym_string,
    STATE(11), 2,
      sym_binary,
      sym_paran,
  [483] = 7,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    STATE(33), 1,
      sym_expr,
    ACTIONS(71), 2,
      sym_seq_name,
      sym_iden,
    STATE(10), 2,
      sym_variable,
      sym_string,
    STATE(11), 2,
      sym_binary,
      sym_paran,
  [508] = 7,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    STATE(38), 1,
      sym_expr,
    ACTIONS(71), 2,
      sym_seq_name,
      sym_iden,
    STATE(10), 2,
      sym_variable,
      sym_string,
    STATE(11), 2,
      sym_binary,
      sym_paran,
  [533] = 7,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    STATE(8), 1,
      sym_expr,
    ACTIONS(71), 2,
      sym_seq_name,
      sym_iden,
    STATE(10), 2,
      sym_variable,
      sym_string,
    STATE(11), 2,
      sym_binary,
      sym_paran,
  [558] = 7,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    STATE(31), 1,
      sym_expr,
    ACTIONS(71), 2,
      sym_seq_name,
      sym_iden,
    STATE(10), 2,
      sym_variable,
      sym_string,
    STATE(11), 2,
      sym_binary,
      sym_paran,
  [583] = 7,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    STATE(37), 1,
      sym_expr,
    ACTIONS(71), 2,
      sym_seq_name,
      sym_iden,
    STATE(10), 2,
      sym_variable,
      sym_string,
    STATE(11), 2,
      sym_binary,
      sym_paran,
  [608] = 7,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    STATE(40), 1,
      sym_expr,
    ACTIONS(71), 2,
      sym_seq_name,
      sym_iden,
    STATE(10), 2,
      sym_variable,
      sym_string,
    STATE(11), 2,
      sym_binary,
      sym_paran,
  [633] = 7,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_use,
    ACTIONS(95), 1,
      anon_sym_seq,
    ACTIONS(98), 1,
      anon_sym_rout,
    STATE(26), 2,
      sym_unit,
      aux_sym_source_file_repeat1,
    STATE(55), 3,
      sym_import,
      sym_sequence,
      sym_routine,
  [658] = 7,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    STATE(15), 1,
      sym_expr,
    ACTIONS(71), 2,
      sym_seq_name,
      sym_iden,
    STATE(10), 2,
      sym_variable,
      sym_string,
    STATE(11), 2,
      sym_binary,
      sym_paran,
  [683] = 1,
    ACTIONS(101), 9,
      sym_comment,
      anon_sym_put,
      anon_sym_debug,
      anon_sym_trans,
      anon_sym_pers,
      anon_sym_sub,
      anon_sym_lab,
      anon_sym_jump,
      anon_sym_RBRACE,
  [695] = 1,
    ACTIONS(103), 9,
      sym_comment,
      anon_sym_put,
      anon_sym_debug,
      anon_sym_trans,
      anon_sym_pers,
      anon_sym_sub,
      anon_sym_lab,
      anon_sym_jump,
      anon_sym_RBRACE,
  [707] = 1,
    ACTIONS(105), 9,
      sym_comment,
      anon_sym_put,
      anon_sym_debug,
      anon_sym_trans,
      anon_sym_pers,
      anon_sym_sub,
      anon_sym_lab,
      anon_sym_jump,
      anon_sym_RBRACE,
  [719] = 3,
    ACTIONS(107), 1,
      sym_eos,
    STATE(22), 1,
      sym_op,
    ACTIONS(83), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [734] = 3,
    ACTIONS(109), 1,
      sym_bind,
    STATE(22), 1,
      sym_op,
    ACTIONS(83), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [749] = 3,
    ACTIONS(111), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_op,
    ACTIONS(83), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [764] = 3,
    ACTIONS(113), 1,
      sym_eos,
    STATE(22), 1,
      sym_op,
    ACTIONS(83), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [779] = 3,
    ACTIONS(115), 1,
      sym_bind,
    STATE(22), 1,
      sym_op,
    ACTIONS(83), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [794] = 3,
    ACTIONS(117), 1,
      anon_sym_EQ,
    STATE(22), 1,
      sym_op,
    ACTIONS(83), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [809] = 3,
    ACTIONS(119), 1,
      sym_eos,
    STATE(22), 1,
      sym_op,
    ACTIONS(83), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [824] = 3,
    ACTIONS(121), 1,
      sym_eos,
    STATE(22), 1,
      sym_op,
    ACTIONS(83), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [839] = 3,
    ACTIONS(123), 1,
      sym_eos,
    STATE(22), 1,
      sym_op,
    ACTIONS(83), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [854] = 3,
    ACTIONS(125), 1,
      sym_eos,
    STATE(22), 1,
      sym_op,
    ACTIONS(83), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [869] = 5,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(129), 1,
      sym_debug_literal,
    ACTIONS(131), 1,
      anon_sym_LBRACE,
    ACTIONS(133), 1,
      aux_sym_string_token1,
    STATE(49), 2,
      sym_debug_variable,
      aux_sym_debug_string_repeat1,
  [886] = 3,
    ACTIONS(135), 1,
      anon_sym_RPAREN,
    ACTIONS(137), 2,
      sym_key_in,
      sym_key_out,
    STATE(56), 2,
      sym_param_def,
      aux_sym_param_interface_repeat1,
  [898] = 5,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    ACTIONS(139), 1,
      sym_iden,
    STATE(46), 1,
      sym_close_scope,
    STATE(48), 1,
      aux_sym_sequence_repeat1,
    STATE(65), 1,
      sym_seq_entry,
  [914] = 1,
    ACTIONS(141), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [922] = 1,
    ACTIONS(143), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [930] = 1,
    ACTIONS(145), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [938] = 2,
    ACTIONS(149), 2,
      sym_seq_name,
      sym_iden,
    ACTIONS(147), 3,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      sym_number,
  [948] = 5,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    ACTIONS(139), 1,
      sym_iden,
    STATE(52), 1,
      sym_close_scope,
    STATE(62), 1,
      aux_sym_sequence_repeat1,
    STATE(65), 1,
      sym_seq_entry,
  [964] = 4,
    ACTIONS(131), 1,
      anon_sym_LBRACE,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      sym_debug_literal,
    STATE(53), 2,
      sym_debug_variable,
      aux_sym_debug_string_repeat1,
  [978] = 1,
    ACTIONS(155), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [986] = 3,
    ACTIONS(157), 1,
      anon_sym_RPAREN,
    ACTIONS(159), 2,
      sym_key_in,
      sym_key_out,
    STATE(51), 2,
      sym_param_def,
      aux_sym_param_interface_repeat1,
  [998] = 1,
    ACTIONS(162), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [1006] = 4,
    ACTIONS(164), 1,
      anon_sym_SQUOTE,
    ACTIONS(166), 1,
      sym_debug_literal,
    ACTIONS(169), 1,
      anon_sym_LBRACE,
    STATE(53), 2,
      sym_debug_variable,
      aux_sym_debug_string_repeat1,
  [1020] = 1,
    ACTIONS(172), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [1028] = 1,
    ACTIONS(174), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [1036] = 3,
    ACTIONS(176), 1,
      anon_sym_RPAREN,
    ACTIONS(137), 2,
      sym_key_in,
      sym_key_out,
    STATE(51), 2,
      sym_param_def,
      aux_sym_param_interface_repeat1,
  [1048] = 1,
    ACTIONS(178), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [1056] = 4,
    ACTIONS(180), 1,
      anon_sym_RPAREN,
    ACTIONS(182), 1,
      sym_iden,
    STATE(59), 1,
      aux_sym_sub_repeat1,
    STATE(95), 1,
      sym_param_name,
  [1069] = 4,
    ACTIONS(184), 1,
      anon_sym_RPAREN,
    ACTIONS(186), 1,
      sym_iden,
    STATE(59), 1,
      aux_sym_sub_repeat1,
    STATE(95), 1,
      sym_param_name,
  [1082] = 4,
    ACTIONS(189), 1,
      sym_eos,
    ACTIONS(191), 1,
      sym_bind,
    ACTIONS(193), 1,
      sym_iden,
    STATE(76), 1,
      sym_label,
  [1095] = 4,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 1,
      anon_sym_LBRACE,
    STATE(2), 1,
      sym_open_scope,
    STATE(72), 1,
      sym_param_interface,
  [1108] = 4,
    ACTIONS(199), 1,
      anon_sym_RBRACE,
    ACTIONS(201), 1,
      sym_iden,
    STATE(62), 1,
      aux_sym_sequence_repeat1,
    STATE(65), 1,
      sym_seq_entry,
  [1121] = 4,
    ACTIONS(182), 1,
      sym_iden,
    ACTIONS(204), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      aux_sym_sub_repeat1,
    STATE(95), 1,
      sym_param_name,
  [1134] = 2,
    ACTIONS(208), 1,
      sym_debug_literal,
    ACTIONS(206), 2,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [1142] = 2,
    ACTIONS(210), 1,
      anon_sym_COMMA,
    ACTIONS(212), 2,
      anon_sym_RBRACE,
      sym_iden,
  [1150] = 1,
    ACTIONS(214), 3,
      anon_sym_RPAREN,
      sym_key_in,
      sym_key_out,
  [1156] = 2,
    STATE(99), 1,
      sym_variable,
    ACTIONS(71), 2,
      sym_seq_name,
      sym_iden,
  [1164] = 1,
    ACTIONS(216), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_iden,
  [1170] = 3,
    ACTIONS(193), 1,
      sym_iden,
    ACTIONS(218), 1,
      sym_eos,
    STATE(84), 1,
      sym_label,
  [1180] = 1,
    ACTIONS(220), 2,
      sym_eos,
      sym_bind,
  [1185] = 1,
    ACTIONS(199), 2,
      anon_sym_RBRACE,
      sym_iden,
  [1190] = 2,
    ACTIONS(197), 1,
      anon_sym_LBRACE,
    STATE(4), 1,
      sym_open_scope,
  [1197] = 1,
    ACTIONS(222), 2,
      sym_eos,
      sym_bind,
  [1202] = 2,
    ACTIONS(224), 1,
      sym_iden,
    STATE(61), 1,
      sym_rout_name,
  [1209] = 2,
    ACTIONS(182), 1,
      sym_iden,
    STATE(86), 1,
      sym_param_name,
  [1216] = 2,
    ACTIONS(226), 1,
      sym_eos,
    ACTIONS(228), 1,
      sym_bind,
  [1223] = 2,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    STATE(96), 1,
      sym_string,
  [1230] = 1,
    ACTIONS(105), 2,
      anon_sym_RBRACE,
      sym_iden,
  [1235] = 2,
    ACTIONS(230), 1,
      anon_sym_LBRACE,
    STATE(43), 1,
      sym_open_scope,
  [1242] = 1,
    ACTIONS(232), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [1247] = 1,
    ACTIONS(234), 2,
      anon_sym_RPAREN,
      sym_iden,
  [1252] = 2,
    ACTIONS(224), 1,
      sym_iden,
    STATE(87), 1,
      sym_rout_name,
  [1259] = 1,
    ACTIONS(236), 1,
      sym_eos,
  [1263] = 1,
    ACTIONS(238), 1,
      sym_eos,
  [1267] = 1,
    ACTIONS(240), 1,
      sym_eos,
  [1271] = 1,
    ACTIONS(242), 1,
      sym_eos,
  [1275] = 1,
    ACTIONS(244), 1,
      anon_sym_LPAREN,
  [1279] = 1,
    ACTIONS(246), 1,
      anon_sym_LBRACE,
  [1283] = 1,
    ACTIONS(248), 1,
      anon_sym_LBRACE,
  [1287] = 1,
    ACTIONS(250), 1,
      aux_sym_string_token1,
  [1291] = 1,
    ACTIONS(252), 1,
      anon_sym_SQUOTE,
  [1295] = 1,
    ACTIONS(254), 1,
      sym_eos,
  [1299] = 1,
    ACTIONS(256), 1,
      sym_eos,
  [1303] = 1,
    ACTIONS(258), 1,
      ts_builtin_sym_end,
  [1307] = 1,
    ACTIONS(260), 1,
      sym_bind,
  [1311] = 1,
    ACTIONS(262), 1,
      sym_eos,
  [1315] = 1,
    ACTIONS(264), 1,
      sym_seq_name,
  [1319] = 1,
    ACTIONS(266), 1,
      sym_eos,
  [1323] = 1,
    ACTIONS(268), 1,
      anon_sym_RBRACE,
  [1327] = 1,
    ACTIONS(113), 1,
      sym_eos,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 44,
  [SMALL_STATE(4)] = 88,
  [SMALL_STATE(5)] = 132,
  [SMALL_STATE(6)] = 176,
  [SMALL_STATE(7)] = 217,
  [SMALL_STATE(8)] = 233,
  [SMALL_STATE(9)] = 251,
  [SMALL_STATE(10)] = 266,
  [SMALL_STATE(11)] = 281,
  [SMALL_STATE(12)] = 296,
  [SMALL_STATE(13)] = 311,
  [SMALL_STATE(14)] = 339,
  [SMALL_STATE(15)] = 364,
  [SMALL_STATE(16)] = 383,
  [SMALL_STATE(17)] = 408,
  [SMALL_STATE(18)] = 433,
  [SMALL_STATE(19)] = 458,
  [SMALL_STATE(20)] = 483,
  [SMALL_STATE(21)] = 508,
  [SMALL_STATE(22)] = 533,
  [SMALL_STATE(23)] = 558,
  [SMALL_STATE(24)] = 583,
  [SMALL_STATE(25)] = 608,
  [SMALL_STATE(26)] = 633,
  [SMALL_STATE(27)] = 658,
  [SMALL_STATE(28)] = 683,
  [SMALL_STATE(29)] = 695,
  [SMALL_STATE(30)] = 707,
  [SMALL_STATE(31)] = 719,
  [SMALL_STATE(32)] = 734,
  [SMALL_STATE(33)] = 749,
  [SMALL_STATE(34)] = 764,
  [SMALL_STATE(35)] = 779,
  [SMALL_STATE(36)] = 794,
  [SMALL_STATE(37)] = 809,
  [SMALL_STATE(38)] = 824,
  [SMALL_STATE(39)] = 839,
  [SMALL_STATE(40)] = 854,
  [SMALL_STATE(41)] = 869,
  [SMALL_STATE(42)] = 886,
  [SMALL_STATE(43)] = 898,
  [SMALL_STATE(44)] = 914,
  [SMALL_STATE(45)] = 922,
  [SMALL_STATE(46)] = 930,
  [SMALL_STATE(47)] = 938,
  [SMALL_STATE(48)] = 948,
  [SMALL_STATE(49)] = 964,
  [SMALL_STATE(50)] = 978,
  [SMALL_STATE(51)] = 986,
  [SMALL_STATE(52)] = 998,
  [SMALL_STATE(53)] = 1006,
  [SMALL_STATE(54)] = 1020,
  [SMALL_STATE(55)] = 1028,
  [SMALL_STATE(56)] = 1036,
  [SMALL_STATE(57)] = 1048,
  [SMALL_STATE(58)] = 1056,
  [SMALL_STATE(59)] = 1069,
  [SMALL_STATE(60)] = 1082,
  [SMALL_STATE(61)] = 1095,
  [SMALL_STATE(62)] = 1108,
  [SMALL_STATE(63)] = 1121,
  [SMALL_STATE(64)] = 1134,
  [SMALL_STATE(65)] = 1142,
  [SMALL_STATE(66)] = 1150,
  [SMALL_STATE(67)] = 1156,
  [SMALL_STATE(68)] = 1164,
  [SMALL_STATE(69)] = 1170,
  [SMALL_STATE(70)] = 1180,
  [SMALL_STATE(71)] = 1185,
  [SMALL_STATE(72)] = 1190,
  [SMALL_STATE(73)] = 1197,
  [SMALL_STATE(74)] = 1202,
  [SMALL_STATE(75)] = 1209,
  [SMALL_STATE(76)] = 1216,
  [SMALL_STATE(77)] = 1223,
  [SMALL_STATE(78)] = 1230,
  [SMALL_STATE(79)] = 1235,
  [SMALL_STATE(80)] = 1242,
  [SMALL_STATE(81)] = 1247,
  [SMALL_STATE(82)] = 1252,
  [SMALL_STATE(83)] = 1259,
  [SMALL_STATE(84)] = 1263,
  [SMALL_STATE(85)] = 1267,
  [SMALL_STATE(86)] = 1271,
  [SMALL_STATE(87)] = 1275,
  [SMALL_STATE(88)] = 1279,
  [SMALL_STATE(89)] = 1283,
  [SMALL_STATE(90)] = 1287,
  [SMALL_STATE(91)] = 1291,
  [SMALL_STATE(92)] = 1295,
  [SMALL_STATE(93)] = 1299,
  [SMALL_STATE(94)] = 1303,
  [SMALL_STATE(95)] = 1307,
  [SMALL_STATE(96)] = 1311,
  [SMALL_STATE(97)] = 1315,
  [SMALL_STATE(98)] = 1319,
  [SMALL_STATE(99)] = 1323,
  [SMALL_STATE(100)] = 1327,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(29),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(17),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(13),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(18),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(19),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(82),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(69),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(60),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 3, .production_id = 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1, .production_id = 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paran, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sub_repeat1, 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(55),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(77),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(97),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(74),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_scope, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put, 4),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_debug, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 4),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans, 4),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pers, 4),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_routine, 6),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close_scope, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 4),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_op, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_routine, 5),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_param_interface_repeat1, 2),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_param_interface_repeat1, 2), SHIFT_REPEAT(75),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 5),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_debug_string_repeat1, 2),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_debug_string_repeat1, 2), SHIFT_REPEAT(53),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_debug_string_repeat1, 2), SHIFT_REPEAT(67),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_routine, 4),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sub_repeat1, 2),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sub_repeat1, 2), SHIFT_REPEAT(73),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 2),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(68),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_debug_variable, 3),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_debug_variable, 3),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_def, 3),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seq_entry, 1),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lab, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_name, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rout_name, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sub_repeat1, 4),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lab, 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_debug_string, 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_interface, 3),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_interface, 2),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub, 4),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_debug_string, 3),
  [258] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub, 5),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_snug(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
