#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 99
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
  [74] = 16,
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
  [97] = 97,
  [98] = 98,
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
      if (lookahead == ';') ADVANCE(65);
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
      if (lookahead == '{') ADVANCE(61);
      if (lookahead == '}') ADVANCE(62);
      if (lookahead == '~') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (lookahead == ':' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(58);
      if (lookahead == '{') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(60);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(41);
      if (lookahead == '*') ADVANCE(54);
      if (lookahead == '+') ADVANCE(52);
      if (lookahead == ',') ADVANCE(38);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == ';') ADVANCE(65);
      if (lookahead == '<') ADVANCE(56);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '>') ADVANCE(55);
      if (lookahead == '}') ADVANCE(62);
      if (lookahead == '~') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
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
      if (lookahead == 'n') ADVANCE(63);
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
      if (lookahead == 't') ADVANCE(64);
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
      if (lookahead == '_') ADVANCE(69);
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
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_debug_literal);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_key_in);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_key_out);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_eos);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_bind);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_iden);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
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
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 67},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
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
    [sym_source_file] = STATE(93),
    [sym_unit] = STATE(12),
    [sym_import] = STATE(44),
    [sym_sequence] = STATE(44),
    [sym_routine] = STATE(44),
    [aux_sym_source_file_repeat1] = STATE(12),
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
    STATE(52), 1,
      sym_close_scope,
    STATE(4), 2,
      sym_statement,
      aux_sym_routine_repeat1,
    STATE(98), 7,
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
    STATE(39), 1,
      sym_close_scope,
    STATE(5), 2,
      sym_statement,
      aux_sym_routine_repeat1,
    STATE(98), 7,
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
    STATE(39), 1,
      sym_close_scope,
    STATE(6), 2,
      sym_statement,
      aux_sym_routine_repeat1,
    STATE(98), 7,
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
    STATE(47), 1,
      sym_close_scope,
    STATE(6), 2,
      sym_statement,
      aux_sym_routine_repeat1,
    STATE(98), 7,
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
    STATE(98), 7,
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
    STATE(33), 1,
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
  [296] = 7,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_use,
    ACTIONS(9), 1,
      anon_sym_seq,
    ACTIONS(11), 1,
      anon_sym_rout,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    STATE(14), 2,
      sym_unit,
      aux_sym_source_file_repeat1,
    STATE(44), 3,
      sym_import,
      sym_sequence,
      sym_routine,
  [321] = 8,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      sym_number,
    STATE(9), 1,
      sym_variable,
    STATE(24), 1,
      sym_expr,
    STATE(96), 1,
      sym_debug_string,
    ACTIONS(71), 2,
      sym_seq_name,
      sym_iden,
    STATE(10), 2,
      sym_binary,
      sym_paran,
  [348] = 7,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_use,
    ACTIONS(85), 1,
      anon_sym_seq,
    ACTIONS(88), 1,
      anon_sym_rout,
    STATE(14), 2,
      sym_unit,
      aux_sym_source_file_repeat1,
    STATE(44), 3,
      sym_import,
      sym_sequence,
      sym_routine,
  [373] = 4,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    STATE(33), 1,
      sym_op,
    ACTIONS(93), 2,
      anon_sym_RPAREN,
      sym_iden,
    ACTIONS(95), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [392] = 1,
    ACTIONS(97), 9,
      sym_comment,
      anon_sym_put,
      anon_sym_debug,
      anon_sym_trans,
      anon_sym_pers,
      anon_sym_sub,
      anon_sym_lab,
      anon_sym_jump,
      anon_sym_RBRACE,
  [404] = 1,
    ACTIONS(99), 9,
      sym_comment,
      anon_sym_put,
      anon_sym_debug,
      anon_sym_trans,
      anon_sym_pers,
      anon_sym_sub,
      anon_sym_lab,
      anon_sym_jump,
      anon_sym_RBRACE,
  [416] = 1,
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
  [428] = 6,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      sym_number,
    STATE(9), 1,
      sym_variable,
    STATE(23), 1,
      sym_expr,
    ACTIONS(71), 2,
      sym_seq_name,
      sym_iden,
    STATE(10), 2,
      sym_binary,
      sym_paran,
  [449] = 6,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      sym_number,
    STATE(9), 1,
      sym_variable,
    STATE(25), 1,
      sym_expr,
    ACTIONS(71), 2,
      sym_seq_name,
      sym_iden,
    STATE(10), 2,
      sym_binary,
      sym_paran,
  [470] = 6,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      sym_number,
    STATE(9), 1,
      sym_variable,
    STATE(26), 1,
      sym_expr,
    ACTIONS(71), 2,
      sym_seq_name,
      sym_iden,
    STATE(10), 2,
      sym_binary,
      sym_paran,
  [491] = 6,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      sym_number,
    STATE(9), 1,
      sym_variable,
    STATE(28), 1,
      sym_expr,
    ACTIONS(71), 2,
      sym_seq_name,
      sym_iden,
    STATE(10), 2,
      sym_binary,
      sym_paran,
  [512] = 3,
    ACTIONS(103), 1,
      anon_sym_EQ,
    STATE(33), 1,
      sym_op,
    ACTIONS(95), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [527] = 3,
    ACTIONS(105), 1,
      sym_eos,
    STATE(33), 1,
      sym_op,
    ACTIONS(95), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [542] = 3,
    ACTIONS(107), 1,
      sym_bind,
    STATE(33), 1,
      sym_op,
    ACTIONS(95), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [557] = 3,
    ACTIONS(109), 1,
      sym_bind,
    STATE(33), 1,
      sym_op,
    ACTIONS(95), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [572] = 6,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      sym_number,
    STATE(9), 1,
      sym_variable,
    STATE(32), 1,
      sym_expr,
    ACTIONS(71), 2,
      sym_seq_name,
      sym_iden,
    STATE(10), 2,
      sym_binary,
      sym_paran,
  [593] = 3,
    ACTIONS(111), 1,
      anon_sym_RPAREN,
    STATE(33), 1,
      sym_op,
    ACTIONS(95), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [608] = 6,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      sym_number,
    STATE(9), 1,
      sym_variable,
    STATE(36), 1,
      sym_expr,
    ACTIONS(71), 2,
      sym_seq_name,
      sym_iden,
    STATE(10), 2,
      sym_binary,
      sym_paran,
  [629] = 6,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      sym_number,
    STATE(9), 1,
      sym_variable,
    STATE(34), 1,
      sym_expr,
    ACTIONS(71), 2,
      sym_seq_name,
      sym_iden,
    STATE(10), 2,
      sym_binary,
      sym_paran,
  [650] = 6,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      sym_number,
    STATE(9), 1,
      sym_variable,
    STATE(35), 1,
      sym_expr,
    ACTIONS(71), 2,
      sym_seq_name,
      sym_iden,
    STATE(10), 2,
      sym_binary,
      sym_paran,
  [671] = 3,
    ACTIONS(113), 1,
      sym_eos,
    STATE(33), 1,
      sym_op,
    ACTIONS(95), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [686] = 6,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      sym_number,
    STATE(8), 1,
      sym_expr,
    STATE(9), 1,
      sym_variable,
    ACTIONS(71), 2,
      sym_seq_name,
      sym_iden,
    STATE(10), 2,
      sym_binary,
      sym_paran,
  [707] = 3,
    ACTIONS(115), 1,
      sym_eos,
    STATE(33), 1,
      sym_op,
    ACTIONS(95), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [722] = 3,
    ACTIONS(117), 1,
      sym_eos,
    STATE(33), 1,
      sym_op,
    ACTIONS(95), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [737] = 3,
    ACTIONS(119), 1,
      sym_eos,
    STATE(33), 1,
      sym_op,
    ACTIONS(95), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [752] = 6,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      sym_number,
    STATE(9), 1,
      sym_variable,
    STATE(15), 1,
      sym_expr,
    ACTIONS(71), 2,
      sym_seq_name,
      sym_iden,
    STATE(10), 2,
      sym_binary,
      sym_paran,
  [773] = 5,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    ACTIONS(121), 1,
      sym_iden,
    STATE(45), 1,
      aux_sym_sequence_repeat1,
    STATE(46), 1,
      sym_close_scope,
    STATE(60), 1,
      sym_seq_entry,
  [789] = 1,
    ACTIONS(123), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [797] = 1,
    ACTIONS(125), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [805] = 3,
    ACTIONS(127), 1,
      anon_sym_RPAREN,
    ACTIONS(129), 2,
      sym_key_in,
      sym_key_out,
    STATE(41), 2,
      sym_param_def,
      aux_sym_param_interface_repeat1,
  [817] = 1,
    ACTIONS(132), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [825] = 4,
    ACTIONS(134), 1,
      anon_sym_SQUOTE,
    ACTIONS(136), 1,
      sym_debug_literal,
    ACTIONS(138), 1,
      anon_sym_LBRACE,
    STATE(51), 2,
      sym_debug_variable,
      aux_sym_debug_string_repeat1,
  [839] = 1,
    ACTIONS(140), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [847] = 5,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    ACTIONS(121), 1,
      sym_iden,
    STATE(40), 1,
      sym_close_scope,
    STATE(55), 1,
      aux_sym_sequence_repeat1,
    STATE(60), 1,
      sym_seq_entry,
  [863] = 1,
    ACTIONS(142), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [871] = 1,
    ACTIONS(144), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [879] = 1,
    ACTIONS(146), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [887] = 3,
    ACTIONS(148), 1,
      anon_sym_RPAREN,
    ACTIONS(150), 2,
      sym_key_in,
      sym_key_out,
    STATE(41), 2,
      sym_param_def,
      aux_sym_param_interface_repeat1,
  [899] = 3,
    ACTIONS(152), 1,
      anon_sym_RPAREN,
    ACTIONS(150), 2,
      sym_key_in,
      sym_key_out,
    STATE(49), 2,
      sym_param_def,
      aux_sym_param_interface_repeat1,
  [911] = 4,
    ACTIONS(138), 1,
      anon_sym_LBRACE,
    ACTIONS(154), 1,
      anon_sym_SQUOTE,
    ACTIONS(156), 1,
      sym_debug_literal,
    STATE(53), 2,
      sym_debug_variable,
      aux_sym_debug_string_repeat1,
  [925] = 1,
    ACTIONS(158), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [933] = 4,
    ACTIONS(160), 1,
      anon_sym_SQUOTE,
    ACTIONS(162), 1,
      sym_debug_literal,
    ACTIONS(165), 1,
      anon_sym_LBRACE,
    STATE(53), 2,
      sym_debug_variable,
      aux_sym_debug_string_repeat1,
  [947] = 4,
    ACTIONS(168), 1,
      anon_sym_RPAREN,
    ACTIONS(170), 1,
      sym_iden,
    STATE(54), 1,
      aux_sym_sub_repeat1,
    STATE(89), 1,
      sym_param_name,
  [960] = 4,
    ACTIONS(173), 1,
      anon_sym_RBRACE,
    ACTIONS(175), 1,
      sym_iden,
    STATE(55), 1,
      aux_sym_sequence_repeat1,
    STATE(60), 1,
      sym_seq_entry,
  [973] = 2,
    ACTIONS(178), 2,
      anon_sym_LPAREN,
      sym_number,
    ACTIONS(180), 2,
      sym_seq_name,
      sym_iden,
  [982] = 4,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    STATE(2), 1,
      sym_open_scope,
    STATE(71), 1,
      sym_param_interface,
  [995] = 4,
    ACTIONS(186), 1,
      anon_sym_RPAREN,
    ACTIONS(188), 1,
      sym_iden,
    STATE(54), 1,
      aux_sym_sub_repeat1,
    STATE(89), 1,
      sym_param_name,
  [1008] = 4,
    ACTIONS(188), 1,
      sym_iden,
    ACTIONS(190), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      aux_sym_sub_repeat1,
    STATE(89), 1,
      sym_param_name,
  [1021] = 2,
    ACTIONS(192), 1,
      anon_sym_COMMA,
    ACTIONS(194), 2,
      anon_sym_RBRACE,
      sym_iden,
  [1029] = 1,
    ACTIONS(196), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_iden,
  [1035] = 1,
    ACTIONS(198), 3,
      anon_sym_RPAREN,
      sym_key_in,
      sym_key_out,
  [1041] = 2,
    STATE(83), 1,
      sym_variable,
    ACTIONS(71), 2,
      sym_seq_name,
      sym_iden,
  [1049] = 2,
    ACTIONS(202), 1,
      sym_debug_literal,
    ACTIONS(200), 2,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [1057] = 2,
    ACTIONS(204), 1,
      sym_iden,
    STATE(85), 1,
      sym_rout_name,
  [1064] = 2,
    ACTIONS(204), 1,
      sym_iden,
    STATE(57), 1,
      sym_rout_name,
  [1071] = 1,
    ACTIONS(206), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [1076] = 2,
    ACTIONS(208), 1,
      sym_eos,
    ACTIONS(210), 1,
      sym_bind,
  [1083] = 1,
    ACTIONS(173), 2,
      anon_sym_RBRACE,
      sym_iden,
  [1088] = 2,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
    STATE(38), 1,
      sym_open_scope,
  [1095] = 2,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    STATE(3), 1,
      sym_open_scope,
  [1102] = 2,
    ACTIONS(214), 1,
      anon_sym_SQUOTE,
    STATE(91), 1,
      sym_string,
  [1109] = 1,
    ACTIONS(216), 2,
      sym_eos,
      sym_bind,
  [1114] = 1,
    ACTIONS(97), 2,
      anon_sym_RBRACE,
      sym_iden,
  [1119] = 1,
    ACTIONS(218), 2,
      sym_eos,
      sym_bind,
  [1124] = 2,
    ACTIONS(220), 1,
      sym_iden,
    STATE(90), 1,
      sym_label,
  [1131] = 2,
    ACTIONS(188), 1,
      sym_iden,
    STATE(97), 1,
      sym_param_name,
  [1138] = 2,
    ACTIONS(220), 1,
      sym_iden,
    STATE(68), 1,
      sym_label,
  [1145] = 1,
    ACTIONS(222), 2,
      anon_sym_RPAREN,
      sym_iden,
  [1150] = 1,
    ACTIONS(224), 1,
      sym_eos,
  [1154] = 1,
    ACTIONS(226), 1,
      anon_sym_LBRACE,
  [1158] = 1,
    ACTIONS(228), 1,
      aux_sym_string_token1,
  [1162] = 1,
    ACTIONS(230), 1,
      anon_sym_RBRACE,
  [1166] = 1,
    ACTIONS(232), 1,
      sym_eos,
  [1170] = 1,
    ACTIONS(234), 1,
      anon_sym_LPAREN,
  [1174] = 1,
    ACTIONS(236), 1,
      anon_sym_LBRACE,
  [1178] = 1,
    ACTIONS(238), 1,
      sym_eos,
  [1182] = 1,
    ACTIONS(240), 1,
      anon_sym_SQUOTE,
  [1186] = 1,
    ACTIONS(242), 1,
      sym_bind,
  [1190] = 1,
    ACTIONS(244), 1,
      sym_eos,
  [1194] = 1,
    ACTIONS(246), 1,
      sym_eos,
  [1198] = 1,
    ACTIONS(248), 1,
      sym_seq_name,
  [1202] = 1,
    ACTIONS(250), 1,
      ts_builtin_sym_end,
  [1206] = 1,
    ACTIONS(252), 1,
      sym_eos,
  [1210] = 1,
    ACTIONS(254), 1,
      sym_eos,
  [1214] = 1,
    ACTIONS(105), 1,
      sym_eos,
  [1218] = 1,
    ACTIONS(256), 1,
      sym_eos,
  [1222] = 1,
    ACTIONS(258), 1,
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
  [SMALL_STATE(13)] = 321,
  [SMALL_STATE(14)] = 348,
  [SMALL_STATE(15)] = 373,
  [SMALL_STATE(16)] = 392,
  [SMALL_STATE(17)] = 404,
  [SMALL_STATE(18)] = 416,
  [SMALL_STATE(19)] = 428,
  [SMALL_STATE(20)] = 449,
  [SMALL_STATE(21)] = 470,
  [SMALL_STATE(22)] = 491,
  [SMALL_STATE(23)] = 512,
  [SMALL_STATE(24)] = 527,
  [SMALL_STATE(25)] = 542,
  [SMALL_STATE(26)] = 557,
  [SMALL_STATE(27)] = 572,
  [SMALL_STATE(28)] = 593,
  [SMALL_STATE(29)] = 608,
  [SMALL_STATE(30)] = 629,
  [SMALL_STATE(31)] = 650,
  [SMALL_STATE(32)] = 671,
  [SMALL_STATE(33)] = 686,
  [SMALL_STATE(34)] = 707,
  [SMALL_STATE(35)] = 722,
  [SMALL_STATE(36)] = 737,
  [SMALL_STATE(37)] = 752,
  [SMALL_STATE(38)] = 773,
  [SMALL_STATE(39)] = 789,
  [SMALL_STATE(40)] = 797,
  [SMALL_STATE(41)] = 805,
  [SMALL_STATE(42)] = 817,
  [SMALL_STATE(43)] = 825,
  [SMALL_STATE(44)] = 839,
  [SMALL_STATE(45)] = 847,
  [SMALL_STATE(46)] = 863,
  [SMALL_STATE(47)] = 871,
  [SMALL_STATE(48)] = 879,
  [SMALL_STATE(49)] = 887,
  [SMALL_STATE(50)] = 899,
  [SMALL_STATE(51)] = 911,
  [SMALL_STATE(52)] = 925,
  [SMALL_STATE(53)] = 933,
  [SMALL_STATE(54)] = 947,
  [SMALL_STATE(55)] = 960,
  [SMALL_STATE(56)] = 973,
  [SMALL_STATE(57)] = 982,
  [SMALL_STATE(58)] = 995,
  [SMALL_STATE(59)] = 1008,
  [SMALL_STATE(60)] = 1021,
  [SMALL_STATE(61)] = 1029,
  [SMALL_STATE(62)] = 1035,
  [SMALL_STATE(63)] = 1041,
  [SMALL_STATE(64)] = 1049,
  [SMALL_STATE(65)] = 1057,
  [SMALL_STATE(66)] = 1064,
  [SMALL_STATE(67)] = 1071,
  [SMALL_STATE(68)] = 1076,
  [SMALL_STATE(69)] = 1083,
  [SMALL_STATE(70)] = 1088,
  [SMALL_STATE(71)] = 1095,
  [SMALL_STATE(72)] = 1102,
  [SMALL_STATE(73)] = 1109,
  [SMALL_STATE(74)] = 1114,
  [SMALL_STATE(75)] = 1119,
  [SMALL_STATE(76)] = 1124,
  [SMALL_STATE(77)] = 1131,
  [SMALL_STATE(78)] = 1138,
  [SMALL_STATE(79)] = 1145,
  [SMALL_STATE(80)] = 1150,
  [SMALL_STATE(81)] = 1154,
  [SMALL_STATE(82)] = 1158,
  [SMALL_STATE(83)] = 1162,
  [SMALL_STATE(84)] = 1166,
  [SMALL_STATE(85)] = 1170,
  [SMALL_STATE(86)] = 1174,
  [SMALL_STATE(87)] = 1178,
  [SMALL_STATE(88)] = 1182,
  [SMALL_STATE(89)] = 1186,
  [SMALL_STATE(90)] = 1190,
  [SMALL_STATE(91)] = 1194,
  [SMALL_STATE(92)] = 1198,
  [SMALL_STATE(93)] = 1202,
  [SMALL_STATE(94)] = 1206,
  [SMALL_STATE(95)] = 1210,
  [SMALL_STATE(96)] = 1214,
  [SMALL_STATE(97)] = 1218,
  [SMALL_STATE(98)] = 1222,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(17),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(19),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(13),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(20),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(21),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(65),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(76),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(78),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 3, .production_id = 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1, .production_id = 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paran, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(72),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(92),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(66),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sub_repeat1, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_scope, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_debug, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put, 4),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pers, 4),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 4),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans, 4),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_routine, 5),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 5),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_param_interface_repeat1, 2),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_param_interface_repeat1, 2), SHIFT_REPEAT(77),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close_scope, 1),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 4),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_routine, 6),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_routine, 4),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_debug_string_repeat1, 2),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_debug_string_repeat1, 2), SHIFT_REPEAT(53),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_debug_string_repeat1, 2), SHIFT_REPEAT(63),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sub_repeat1, 2),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sub_repeat1, 2), SHIFT_REPEAT(73),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 2),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(61),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op, 1),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_op, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seq_entry, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_def, 3),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_debug_variable, 3),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_debug_variable, 3),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rout_name, 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_name, 1),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sub_repeat1, 4),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub, 4),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_interface, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_debug_string, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_interface, 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_debug_string, 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lab, 2),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [250] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub, 5),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
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
