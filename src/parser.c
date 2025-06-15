#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 103
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 71
#define ALIAS_COUNT 0
#define TOKEN_COUNT 35
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
  anon_sym_write = 17,
  anon_sym_PLUS = 18,
  anon_sym_DASH = 19,
  anon_sym_STAR = 20,
  anon_sym_GT = 21,
  anon_sym_LT = 22,
  anon_sym_DOT = 23,
  anon_sym_SQUOTE = 24,
  sym_debug_literal = 25,
  anon_sym_LBRACE = 26,
  anon_sym_RBRACE = 27,
  sym_key_in = 28,
  sym_key_out = 29,
  sym_eos = 30,
  sym_bind = 31,
  aux_sym_string_token1 = 32,
  sym_iden = 33,
  sym_number = 34,
  sym_source_file = 35,
  sym_unit = 36,
  sym_import = 37,
  sym_sequence = 38,
  sym_routine = 39,
  sym_param_interface = 40,
  sym_param_def = 41,
  sym_param_name = 42,
  sym_rout_name = 43,
  sym_seq_entry = 44,
  sym_statement = 45,
  sym_put = 46,
  sym_debug = 47,
  sym_trans = 48,
  sym_pers = 49,
  sym_sub = 50,
  sym_lab = 51,
  sym_jump = 52,
  sym_write = 53,
  sym_expr = 54,
  sym_binary = 55,
  sym_paran = 56,
  sym_op = 57,
  sym_label = 58,
  sym_variable = 59,
  sym_debug_string = 60,
  sym_debug_variable = 61,
  sym_open_scope = 62,
  sym_close_scope = 63,
  sym_string = 64,
  aux_sym_source_file_repeat1 = 65,
  aux_sym_sequence_repeat1 = 66,
  aux_sym_routine_repeat1 = 67,
  aux_sym_param_interface_repeat1 = 68,
  aux_sym_sub_repeat1 = 69,
  aux_sym_debug_string_repeat1 = 70,
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
  [anon_sym_write] = "write",
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
  [sym_write] = "write",
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
  [anon_sym_write] = anon_sym_write,
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
  [sym_write] = sym_write,
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
  [anon_sym_write] = {
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
  [sym_write] = {
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
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 31,
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
  [101] = 101,
  [102] = 102,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(38);
      if (lookahead == '"') ADVANCE(37);
      if (lookahead == '\'') ADVANCE(63);
      if (lookahead == '(') ADVANCE(44);
      if (lookahead == ')') ADVANCE(45);
      if (lookahead == '*') ADVANCE(59);
      if (lookahead == '+') ADVANCE(57);
      if (lookahead == ',') ADVANCE(42);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == ';') ADVANCE(73);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == '=') ADVANCE(49);
      if (lookahead == '>') ADVANCE(60);
      if (lookahead == 'd') ADVANCE(10);
      if (lookahead == 'i') ADVANCE(18);
      if (lookahead == 'j') ADVANCE(33);
      if (lookahead == 'l') ADVANCE(6);
      if (lookahead == 'o') ADVANCE(34);
      if (lookahead == 'p') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(20);
      if (lookahead == 's') ADVANCE(11);
      if (lookahead == 't') ADVANCE(24);
      if (lookahead == 'u') ADVANCE(28);
      if (lookahead == 'w') ADVANCE(23);
      if (lookahead == '{') ADVANCE(68);
      if (lookahead == '}') ADVANCE(70);
      if (lookahead == '~') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(47);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(63);
      if (lookahead == '(') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(46);
      if (lookahead == ':' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(63);
      if (lookahead == '{') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(67);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(45);
      if (lookahead == '*') ADVANCE(59);
      if (lookahead == '+') ADVANCE(57);
      if (lookahead == ',') ADVANCE(42);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == ';') ADVANCE(73);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == '=') ADVANCE(49);
      if (lookahead == '>') ADVANCE(60);
      if (lookahead == '}') ADVANCE(70);
      if (lookahead == '~') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == 'b') ADVANCE(54);
      END_STATE();
    case 8:
      if (lookahead == 'b') ADVANCE(53);
      END_STATE();
    case 9:
      if (lookahead == 'b') ADVANCE(35);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead == 'u') ADVANCE(8);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(25);
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 15:
      if (lookahead == 'g') ADVANCE(50);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 17:
      if (lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 21:
      if (lookahead == 'p') ADVANCE(55);
      END_STATE();
    case 22:
      if (lookahead == 'q') ADVANCE(41);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(5);
      END_STATE();
    case 25:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 27:
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 28:
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 33:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 34:
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 35:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 36:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 37:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_seq);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_rout);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_seq_name);
      if (lookahead == '_') ADVANCE(78);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_seq_name);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_put);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_debug);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_trans);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_pers);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_lab);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_jump);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_write);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_debug_literal);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_debug_literal);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(64);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_debug_literal);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_debug_literal);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(77);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_key_in);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_key_out);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_eos);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_bind);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '{') ADVANCE(69);
      if (lookahead == '}') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(64);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_iden);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
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
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 4},
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
  [43] = {.lex_state = 75},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 4},
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
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 76},
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
    [anon_sym_write] = ACTIONS(1),
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
    [sym_source_file] = STATE(98),
    [sym_unit] = STATE(14),
    [sym_import] = STATE(44),
    [sym_sequence] = STATE(44),
    [sym_routine] = STATE(44),
    [aux_sym_source_file_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_use] = ACTIONS(7),
    [anon_sym_seq] = ACTIONS(9),
    [anon_sym_rout] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
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
      anon_sym_write,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      sym_close_scope,
    STATE(4), 2,
      sym_statement,
      aux_sym_routine_repeat1,
    STATE(101), 8,
      sym_put,
      sym_debug,
      sym_trans,
      sym_pers,
      sym_sub,
      sym_lab,
      sym_jump,
      sym_write,
  [48] = 13,
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
      anon_sym_write,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    STATE(49), 1,
      sym_close_scope,
    STATE(5), 2,
      sym_statement,
      aux_sym_routine_repeat1,
    STATE(101), 8,
      sym_put,
      sym_debug,
      sym_trans,
      sym_pers,
      sym_sub,
      sym_lab,
      sym_jump,
      sym_write,
  [96] = 13,
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
      anon_sym_write,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    STATE(49), 1,
      sym_close_scope,
    STATE(6), 2,
      sym_statement,
      aux_sym_routine_repeat1,
    STATE(101), 8,
      sym_put,
      sym_debug,
      sym_trans,
      sym_pers,
      sym_sub,
      sym_lab,
      sym_jump,
      sym_write,
  [144] = 13,
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
      anon_sym_write,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      sym_close_scope,
    STATE(6), 2,
      sym_statement,
      aux_sym_routine_repeat1,
    STATE(101), 8,
      sym_put,
      sym_debug,
      sym_trans,
      sym_pers,
      sym_sub,
      sym_lab,
      sym_jump,
      sym_write,
  [192] = 12,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(36), 1,
      anon_sym_put,
    ACTIONS(39), 1,
      anon_sym_debug,
    ACTIONS(42), 1,
      anon_sym_trans,
    ACTIONS(45), 1,
      anon_sym_pers,
    ACTIONS(48), 1,
      anon_sym_sub,
    ACTIONS(51), 1,
      anon_sym_lab,
    ACTIONS(54), 1,
      anon_sym_jump,
    ACTIONS(57), 1,
      anon_sym_write,
    ACTIONS(60), 1,
      anon_sym_RBRACE,
    STATE(6), 2,
      sym_statement,
      aux_sym_routine_repeat1,
    STATE(101), 8,
      sym_put,
      sym_debug,
      sym_trans,
      sym_pers,
      sym_sub,
      sym_lab,
      sym_jump,
      sym_write,
  [237] = 1,
    ACTIONS(62), 13,
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
  [253] = 2,
    STATE(22), 1,
      sym_op,
    ACTIONS(64), 12,
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
  [271] = 1,
    ACTIONS(66), 12,
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
  [286] = 1,
    ACTIONS(68), 12,
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
  [301] = 1,
    ACTIONS(70), 12,
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
  [316] = 1,
    ACTIONS(72), 12,
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
  [331] = 8,
    ACTIONS(74), 1,
      anon_sym_LPAREN,
    ACTIONS(78), 1,
      anon_sym_SQUOTE,
    ACTIONS(80), 1,
      sym_number,
    STATE(36), 1,
      sym_expr,
    STATE(86), 1,
      sym_debug_string,
    ACTIONS(76), 2,
      sym_seq_name,
      sym_iden,
    STATE(10), 2,
      sym_binary,
      sym_paran,
    STATE(11), 2,
      sym_variable,
      sym_string,
  [359] = 7,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_use,
    ACTIONS(9), 1,
      anon_sym_seq,
    ACTIONS(11), 1,
      anon_sym_rout,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    STATE(16), 2,
      sym_unit,
      aux_sym_source_file_repeat1,
    STATE(44), 3,
      sym_import,
      sym_sequence,
      sym_routine,
  [384] = 7,
    ACTIONS(74), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 1,
      sym_number,
    ACTIONS(84), 1,
      anon_sym_SQUOTE,
    STATE(34), 1,
      sym_expr,
    ACTIONS(76), 2,
      sym_seq_name,
      sym_iden,
    STATE(10), 2,
      sym_binary,
      sym_paran,
    STATE(11), 2,
      sym_variable,
      sym_string,
  [409] = 7,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_use,
    ACTIONS(94), 1,
      anon_sym_seq,
    ACTIONS(97), 1,
      anon_sym_rout,
    STATE(16), 2,
      sym_unit,
      aux_sym_source_file_repeat1,
    STATE(44), 3,
      sym_import,
      sym_sequence,
      sym_routine,
  [434] = 7,
    ACTIONS(74), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 1,
      sym_number,
    ACTIONS(84), 1,
      anon_sym_SQUOTE,
    STATE(37), 1,
      sym_expr,
    ACTIONS(76), 2,
      sym_seq_name,
      sym_iden,
    STATE(10), 2,
      sym_binary,
      sym_paran,
    STATE(11), 2,
      sym_variable,
      sym_string,
  [459] = 7,
    ACTIONS(74), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 1,
      sym_number,
    ACTIONS(84), 1,
      anon_sym_SQUOTE,
    STATE(35), 1,
      sym_expr,
    ACTIONS(76), 2,
      sym_seq_name,
      sym_iden,
    STATE(10), 2,
      sym_binary,
      sym_paran,
    STATE(11), 2,
      sym_variable,
      sym_string,
  [484] = 1,
    ACTIONS(100), 10,
      sym_comment,
      anon_sym_put,
      anon_sym_debug,
      anon_sym_trans,
      anon_sym_pers,
      anon_sym_sub,
      anon_sym_lab,
      anon_sym_jump,
      anon_sym_write,
      anon_sym_RBRACE,
  [497] = 7,
    ACTIONS(74), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 1,
      sym_number,
    ACTIONS(84), 1,
      anon_sym_SQUOTE,
    STATE(38), 1,
      sym_expr,
    ACTIONS(76), 2,
      sym_seq_name,
      sym_iden,
    STATE(10), 2,
      sym_binary,
      sym_paran,
    STATE(11), 2,
      sym_variable,
      sym_string,
  [522] = 7,
    ACTIONS(74), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 1,
      sym_number,
    ACTIONS(84), 1,
      anon_sym_SQUOTE,
    STATE(40), 1,
      sym_expr,
    ACTIONS(76), 2,
      sym_seq_name,
      sym_iden,
    STATE(10), 2,
      sym_binary,
      sym_paran,
    STATE(11), 2,
      sym_variable,
      sym_string,
  [547] = 7,
    ACTIONS(74), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 1,
      sym_number,
    ACTIONS(84), 1,
      anon_sym_SQUOTE,
    STATE(8), 1,
      sym_expr,
    ACTIONS(76), 2,
      sym_seq_name,
      sym_iden,
    STATE(10), 2,
      sym_binary,
      sym_paran,
    STATE(11), 2,
      sym_variable,
      sym_string,
  [572] = 7,
    ACTIONS(74), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 1,
      sym_number,
    ACTIONS(84), 1,
      anon_sym_SQUOTE,
    STATE(39), 1,
      sym_expr,
    ACTIONS(76), 2,
      sym_seq_name,
      sym_iden,
    STATE(10), 2,
      sym_binary,
      sym_paran,
    STATE(11), 2,
      sym_variable,
      sym_string,
  [597] = 1,
    ACTIONS(102), 10,
      sym_comment,
      anon_sym_put,
      anon_sym_debug,
      anon_sym_trans,
      anon_sym_pers,
      anon_sym_sub,
      anon_sym_lab,
      anon_sym_jump,
      anon_sym_write,
      anon_sym_RBRACE,
  [610] = 7,
    ACTIONS(74), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 1,
      sym_number,
    ACTIONS(84), 1,
      anon_sym_SQUOTE,
    STATE(33), 1,
      sym_expr,
    ACTIONS(76), 2,
      sym_seq_name,
      sym_iden,
    STATE(10), 2,
      sym_binary,
      sym_paran,
    STATE(11), 2,
      sym_variable,
      sym_string,
  [635] = 7,
    ACTIONS(74), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 1,
      sym_number,
    ACTIONS(84), 1,
      anon_sym_SQUOTE,
    STATE(32), 1,
      sym_expr,
    ACTIONS(76), 2,
      sym_seq_name,
      sym_iden,
    STATE(10), 2,
      sym_binary,
      sym_paran,
    STATE(11), 2,
      sym_variable,
      sym_string,
  [660] = 7,
    ACTIONS(74), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 1,
      sym_number,
    ACTIONS(84), 1,
      anon_sym_SQUOTE,
    STATE(42), 1,
      sym_expr,
    ACTIONS(76), 2,
      sym_seq_name,
      sym_iden,
    STATE(10), 2,
      sym_binary,
      sym_paran,
    STATE(11), 2,
      sym_variable,
      sym_string,
  [685] = 7,
    ACTIONS(74), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 1,
      sym_number,
    ACTIONS(84), 1,
      anon_sym_SQUOTE,
    STATE(41), 1,
      sym_expr,
    ACTIONS(76), 2,
      sym_seq_name,
      sym_iden,
    STATE(10), 2,
      sym_binary,
      sym_paran,
    STATE(11), 2,
      sym_variable,
      sym_string,
  [710] = 7,
    ACTIONS(74), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 1,
      sym_number,
    ACTIONS(84), 1,
      anon_sym_SQUOTE,
    STATE(30), 1,
      sym_expr,
    ACTIONS(76), 2,
      sym_seq_name,
      sym_iden,
    STATE(10), 2,
      sym_binary,
      sym_paran,
    STATE(11), 2,
      sym_variable,
      sym_string,
  [735] = 4,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    STATE(22), 1,
      sym_op,
    ACTIONS(106), 2,
      anon_sym_RPAREN,
      sym_iden,
    ACTIONS(108), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [754] = 1,
    ACTIONS(110), 10,
      sym_comment,
      anon_sym_put,
      anon_sym_debug,
      anon_sym_trans,
      anon_sym_pers,
      anon_sym_sub,
      anon_sym_lab,
      anon_sym_jump,
      anon_sym_write,
      anon_sym_RBRACE,
  [767] = 3,
    ACTIONS(112), 1,
      sym_eos,
    STATE(22), 1,
      sym_op,
    ACTIONS(108), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [782] = 3,
    ACTIONS(114), 1,
      sym_eos,
    STATE(22), 1,
      sym_op,
    ACTIONS(108), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [797] = 3,
    ACTIONS(116), 1,
      anon_sym_EQ,
    STATE(22), 1,
      sym_op,
    ACTIONS(108), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [812] = 3,
    ACTIONS(118), 1,
      sym_bind,
    STATE(22), 1,
      sym_op,
    ACTIONS(108), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [827] = 3,
    ACTIONS(120), 1,
      sym_eos,
    STATE(22), 1,
      sym_op,
    ACTIONS(108), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [842] = 3,
    ACTIONS(122), 1,
      sym_bind,
    STATE(22), 1,
      sym_op,
    ACTIONS(108), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [857] = 3,
    ACTIONS(124), 1,
      sym_eos,
    STATE(22), 1,
      sym_op,
    ACTIONS(108), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [872] = 3,
    ACTIONS(126), 1,
      sym_eos,
    STATE(22), 1,
      sym_op,
    ACTIONS(108), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [887] = 3,
    ACTIONS(128), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_op,
    ACTIONS(108), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [902] = 3,
    ACTIONS(130), 1,
      sym_eos,
    STATE(22), 1,
      sym_op,
    ACTIONS(108), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [917] = 3,
    ACTIONS(132), 1,
      sym_eos,
    STATE(22), 1,
      sym_op,
    ACTIONS(108), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [932] = 5,
    ACTIONS(134), 1,
      anon_sym_SQUOTE,
    ACTIONS(136), 1,
      sym_debug_literal,
    ACTIONS(138), 1,
      anon_sym_LBRACE,
    ACTIONS(140), 1,
      aux_sym_string_token1,
    STATE(52), 2,
      sym_debug_variable,
      aux_sym_debug_string_repeat1,
  [949] = 1,
    ACTIONS(142), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [957] = 3,
    ACTIONS(144), 1,
      anon_sym_RPAREN,
    ACTIONS(146), 2,
      sym_key_in,
      sym_key_out,
    STATE(45), 2,
      sym_param_def,
      aux_sym_param_interface_repeat1,
  [969] = 2,
    ACTIONS(151), 2,
      sym_seq_name,
      sym_iden,
    ACTIONS(149), 3,
      anon_sym_LPAREN,
      anon_sym_SQUOTE,
      sym_number,
  [979] = 1,
    ACTIONS(153), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [987] = 1,
    ACTIONS(155), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [995] = 1,
    ACTIONS(157), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [1003] = 1,
    ACTIONS(159), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [1011] = 1,
    ACTIONS(161), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [1019] = 4,
    ACTIONS(138), 1,
      anon_sym_LBRACE,
    ACTIONS(163), 1,
      anon_sym_SQUOTE,
    ACTIONS(165), 1,
      sym_debug_literal,
    STATE(55), 2,
      sym_debug_variable,
      aux_sym_debug_string_repeat1,
  [1033] = 5,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    ACTIONS(167), 1,
      sym_iden,
    STATE(54), 1,
      sym_close_scope,
    STATE(57), 1,
      aux_sym_sequence_repeat1,
    STATE(70), 1,
      sym_seq_entry,
  [1049] = 1,
    ACTIONS(169), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [1057] = 4,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(173), 1,
      sym_debug_literal,
    ACTIONS(176), 1,
      anon_sym_LBRACE,
    STATE(55), 2,
      sym_debug_variable,
      aux_sym_debug_string_repeat1,
  [1071] = 1,
    ACTIONS(179), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [1079] = 5,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    ACTIONS(167), 1,
      sym_iden,
    STATE(48), 1,
      sym_close_scope,
    STATE(60), 1,
      aux_sym_sequence_repeat1,
    STATE(70), 1,
      sym_seq_entry,
  [1095] = 3,
    ACTIONS(181), 1,
      anon_sym_RPAREN,
    ACTIONS(183), 2,
      sym_key_in,
      sym_key_out,
    STATE(59), 2,
      sym_param_def,
      aux_sym_param_interface_repeat1,
  [1107] = 3,
    ACTIONS(185), 1,
      anon_sym_RPAREN,
    ACTIONS(183), 2,
      sym_key_in,
      sym_key_out,
    STATE(45), 2,
      sym_param_def,
      aux_sym_param_interface_repeat1,
  [1119] = 4,
    ACTIONS(187), 1,
      anon_sym_RBRACE,
    ACTIONS(189), 1,
      sym_iden,
    STATE(60), 1,
      aux_sym_sequence_repeat1,
    STATE(70), 1,
      sym_seq_entry,
  [1132] = 4,
    ACTIONS(192), 1,
      anon_sym_LPAREN,
    ACTIONS(194), 1,
      anon_sym_LBRACE,
    STATE(2), 1,
      sym_open_scope,
    STATE(78), 1,
      sym_param_interface,
  [1145] = 4,
    ACTIONS(196), 1,
      anon_sym_RPAREN,
    ACTIONS(198), 1,
      sym_iden,
    STATE(65), 1,
      aux_sym_sub_repeat1,
    STATE(100), 1,
      sym_param_name,
  [1158] = 4,
    ACTIONS(198), 1,
      sym_iden,
    ACTIONS(200), 1,
      anon_sym_RPAREN,
    STATE(62), 1,
      aux_sym_sub_repeat1,
    STATE(100), 1,
      sym_param_name,
  [1171] = 4,
    ACTIONS(202), 1,
      sym_eos,
    ACTIONS(204), 1,
      sym_bind,
    ACTIONS(206), 1,
      sym_iden,
    STATE(81), 1,
      sym_label,
  [1184] = 4,
    ACTIONS(208), 1,
      anon_sym_RPAREN,
    ACTIONS(210), 1,
      sym_iden,
    STATE(65), 1,
      aux_sym_sub_repeat1,
    STATE(100), 1,
      sym_param_name,
  [1197] = 3,
    ACTIONS(206), 1,
      sym_iden,
    ACTIONS(213), 1,
      sym_eos,
    STATE(89), 1,
      sym_label,
  [1207] = 1,
    ACTIONS(215), 3,
      anon_sym_RPAREN,
      sym_key_in,
      sym_key_out,
  [1213] = 1,
    ACTIONS(217), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_iden,
  [1219] = 2,
    STATE(92), 1,
      sym_variable,
    ACTIONS(76), 2,
      sym_seq_name,
      sym_iden,
  [1227] = 2,
    ACTIONS(219), 1,
      anon_sym_COMMA,
    ACTIONS(221), 2,
      anon_sym_RBRACE,
      sym_iden,
  [1235] = 2,
    ACTIONS(225), 1,
      sym_debug_literal,
    ACTIONS(223), 2,
      anon_sym_SQUOTE,
      anon_sym_LBRACE,
  [1243] = 2,
    ACTIONS(227), 1,
      sym_iden,
    STATE(61), 1,
      sym_rout_name,
  [1250] = 2,
    ACTIONS(229), 1,
      anon_sym_LBRACE,
    STATE(53), 1,
      sym_open_scope,
  [1257] = 1,
    ACTIONS(231), 2,
      sym_eos,
      sym_bind,
  [1262] = 1,
    ACTIONS(233), 2,
      sym_eos,
      sym_bind,
  [1267] = 2,
    ACTIONS(84), 1,
      anon_sym_SQUOTE,
    STATE(97), 1,
      sym_string,
  [1274] = 2,
    ACTIONS(227), 1,
      sym_iden,
    STATE(90), 1,
      sym_rout_name,
  [1281] = 2,
    ACTIONS(194), 1,
      anon_sym_LBRACE,
    STATE(3), 1,
      sym_open_scope,
  [1288] = 2,
    ACTIONS(198), 1,
      sym_iden,
    STATE(88), 1,
      sym_param_name,
  [1295] = 1,
    ACTIONS(235), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [1300] = 2,
    ACTIONS(237), 1,
      sym_eos,
    ACTIONS(239), 1,
      sym_bind,
  [1307] = 1,
    ACTIONS(187), 2,
      anon_sym_RBRACE,
      sym_iden,
  [1312] = 1,
    ACTIONS(110), 2,
      anon_sym_RBRACE,
      sym_iden,
  [1317] = 1,
    ACTIONS(241), 2,
      anon_sym_RPAREN,
      sym_iden,
  [1322] = 1,
    ACTIONS(243), 1,
      anon_sym_LBRACE,
  [1326] = 1,
    ACTIONS(120), 1,
      sym_eos,
  [1330] = 1,
    ACTIONS(245), 1,
      sym_eos,
  [1334] = 1,
    ACTIONS(247), 1,
      sym_eos,
  [1338] = 1,
    ACTIONS(249), 1,
      sym_eos,
  [1342] = 1,
    ACTIONS(251), 1,
      anon_sym_LPAREN,
  [1346] = 1,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
  [1350] = 1,
    ACTIONS(255), 1,
      anon_sym_RBRACE,
  [1354] = 1,
    ACTIONS(257), 1,
      sym_eos,
  [1358] = 1,
    ACTIONS(259), 1,
      sym_eos,
  [1362] = 1,
    ACTIONS(261), 1,
      anon_sym_SQUOTE,
  [1366] = 1,
    ACTIONS(263), 1,
      sym_seq_name,
  [1370] = 1,
    ACTIONS(265), 1,
      sym_eos,
  [1374] = 1,
    ACTIONS(267), 1,
      ts_builtin_sym_end,
  [1378] = 1,
    ACTIONS(269), 1,
      sym_eos,
  [1382] = 1,
    ACTIONS(271), 1,
      sym_bind,
  [1386] = 1,
    ACTIONS(273), 1,
      sym_eos,
  [1390] = 1,
    ACTIONS(275), 1,
      aux_sym_string_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 48,
  [SMALL_STATE(4)] = 96,
  [SMALL_STATE(5)] = 144,
  [SMALL_STATE(6)] = 192,
  [SMALL_STATE(7)] = 237,
  [SMALL_STATE(8)] = 253,
  [SMALL_STATE(9)] = 271,
  [SMALL_STATE(10)] = 286,
  [SMALL_STATE(11)] = 301,
  [SMALL_STATE(12)] = 316,
  [SMALL_STATE(13)] = 331,
  [SMALL_STATE(14)] = 359,
  [SMALL_STATE(15)] = 384,
  [SMALL_STATE(16)] = 409,
  [SMALL_STATE(17)] = 434,
  [SMALL_STATE(18)] = 459,
  [SMALL_STATE(19)] = 484,
  [SMALL_STATE(20)] = 497,
  [SMALL_STATE(21)] = 522,
  [SMALL_STATE(22)] = 547,
  [SMALL_STATE(23)] = 572,
  [SMALL_STATE(24)] = 597,
  [SMALL_STATE(25)] = 610,
  [SMALL_STATE(26)] = 635,
  [SMALL_STATE(27)] = 660,
  [SMALL_STATE(28)] = 685,
  [SMALL_STATE(29)] = 710,
  [SMALL_STATE(30)] = 735,
  [SMALL_STATE(31)] = 754,
  [SMALL_STATE(32)] = 767,
  [SMALL_STATE(33)] = 782,
  [SMALL_STATE(34)] = 797,
  [SMALL_STATE(35)] = 812,
  [SMALL_STATE(36)] = 827,
  [SMALL_STATE(37)] = 842,
  [SMALL_STATE(38)] = 857,
  [SMALL_STATE(39)] = 872,
  [SMALL_STATE(40)] = 887,
  [SMALL_STATE(41)] = 902,
  [SMALL_STATE(42)] = 917,
  [SMALL_STATE(43)] = 932,
  [SMALL_STATE(44)] = 949,
  [SMALL_STATE(45)] = 957,
  [SMALL_STATE(46)] = 969,
  [SMALL_STATE(47)] = 979,
  [SMALL_STATE(48)] = 987,
  [SMALL_STATE(49)] = 995,
  [SMALL_STATE(50)] = 1003,
  [SMALL_STATE(51)] = 1011,
  [SMALL_STATE(52)] = 1019,
  [SMALL_STATE(53)] = 1033,
  [SMALL_STATE(54)] = 1049,
  [SMALL_STATE(55)] = 1057,
  [SMALL_STATE(56)] = 1071,
  [SMALL_STATE(57)] = 1079,
  [SMALL_STATE(58)] = 1095,
  [SMALL_STATE(59)] = 1107,
  [SMALL_STATE(60)] = 1119,
  [SMALL_STATE(61)] = 1132,
  [SMALL_STATE(62)] = 1145,
  [SMALL_STATE(63)] = 1158,
  [SMALL_STATE(64)] = 1171,
  [SMALL_STATE(65)] = 1184,
  [SMALL_STATE(66)] = 1197,
  [SMALL_STATE(67)] = 1207,
  [SMALL_STATE(68)] = 1213,
  [SMALL_STATE(69)] = 1219,
  [SMALL_STATE(70)] = 1227,
  [SMALL_STATE(71)] = 1235,
  [SMALL_STATE(72)] = 1243,
  [SMALL_STATE(73)] = 1250,
  [SMALL_STATE(74)] = 1257,
  [SMALL_STATE(75)] = 1262,
  [SMALL_STATE(76)] = 1267,
  [SMALL_STATE(77)] = 1274,
  [SMALL_STATE(78)] = 1281,
  [SMALL_STATE(79)] = 1288,
  [SMALL_STATE(80)] = 1295,
  [SMALL_STATE(81)] = 1300,
  [SMALL_STATE(82)] = 1307,
  [SMALL_STATE(83)] = 1312,
  [SMALL_STATE(84)] = 1317,
  [SMALL_STATE(85)] = 1322,
  [SMALL_STATE(86)] = 1326,
  [SMALL_STATE(87)] = 1330,
  [SMALL_STATE(88)] = 1334,
  [SMALL_STATE(89)] = 1338,
  [SMALL_STATE(90)] = 1342,
  [SMALL_STATE(91)] = 1346,
  [SMALL_STATE(92)] = 1350,
  [SMALL_STATE(93)] = 1354,
  [SMALL_STATE(94)] = 1358,
  [SMALL_STATE(95)] = 1362,
  [SMALL_STATE(96)] = 1366,
  [SMALL_STATE(97)] = 1370,
  [SMALL_STATE(98)] = 1374,
  [SMALL_STATE(99)] = 1378,
  [SMALL_STATE(100)] = 1382,
  [SMALL_STATE(101)] = 1386,
  [SMALL_STATE(102)] = 1390,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(19),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(15),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(13),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(17),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(18),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(77),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(66),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(64),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(20),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 3, .production_id = 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1, .production_id = 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paran, 3),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(76),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(96),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(72),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sub_repeat1, 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_scope, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pers, 4),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 4),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_debug, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_write, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put, 4),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans, 4),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_param_interface_repeat1, 2),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_param_interface_repeat1, 2), SHIFT_REPEAT(79),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_op, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_routine, 4),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 5),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_routine, 5),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close_scope, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_routine, 6),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 4),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_debug_string_repeat1, 2),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_debug_string_repeat1, 2), SHIFT_REPEAT(55),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_debug_string_repeat1, 2), SHIFT_REPEAT(69),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 2),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(68),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sub_repeat1, 2),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sub_repeat1, 2), SHIFT_REPEAT(74),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lab, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_def, 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seq_entry, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 1),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_debug_variable, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_debug_variable, 3),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_name, 1),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rout_name, 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sub_repeat1, 4),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_interface, 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_debug_string, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lab, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_interface, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub, 4),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_debug_string, 3),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [267] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub, 5),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
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
