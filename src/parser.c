#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 91
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 65
#define ALIAS_COUNT 0
#define TOKEN_COUNT 32
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
  anon_sym_put = 8,
  anon_sym_EQ = 9,
  anon_sym_debug = 10,
  anon_sym_trans = 11,
  anon_sym_pers = 12,
  anon_sym_sub = 13,
  anon_sym_lab = 14,
  anon_sym_jump = 15,
  anon_sym_PLUS = 16,
  anon_sym_DASH = 17,
  anon_sym_STAR = 18,
  anon_sym_GT = 19,
  anon_sym_LT = 20,
  anon_sym_DOT = 21,
  sym_key_in = 22,
  sym_key_out = 23,
  sym_eos = 24,
  sym_bind = 25,
  sym_open_scope = 26,
  sym_close_scope = 27,
  anon_sym_SQUOTE = 28,
  aux_sym_string_token1 = 29,
  sym_iden = 30,
  sym_number = 31,
  sym_source_file = 32,
  sym_unit = 33,
  sym_import = 34,
  sym_sequence = 35,
  sym_routine = 36,
  sym_param_interface = 37,
  sym_param_def = 38,
  sym_param_name = 39,
  sym_rout_name = 40,
  sym_seq_name = 41,
  sym_seq_entry = 42,
  sym_statement = 43,
  sym_put = 44,
  sym_debug = 45,
  sym_trans = 46,
  sym_pers = 47,
  sym_sub = 48,
  sym_lab = 49,
  sym_jump = 50,
  sym_expr = 51,
  sym_binary = 52,
  sym_paran = 53,
  sym_lexpr = 54,
  sym_op = 55,
  sym_label = 56,
  sym_variable = 57,
  sym_var_decl = 58,
  sym_string = 59,
  aux_sym_source_file_repeat1 = 60,
  aux_sym_sequence_repeat1 = 61,
  aux_sym_routine_repeat1 = 62,
  aux_sym_param_interface_repeat1 = 63,
  aux_sym_sub_repeat1 = 64,
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
  [sym_key_in] = "key_in",
  [sym_key_out] = "key_out",
  [sym_eos] = "eos",
  [sym_bind] = "bind",
  [sym_open_scope] = "open_scope",
  [sym_close_scope] = "close_scope",
  [anon_sym_SQUOTE] = "'",
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
  [sym_seq_name] = "seq_name",
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
  [sym_lexpr] = "lexpr",
  [sym_op] = "op",
  [sym_label] = "label",
  [sym_variable] = "variable",
  [sym_var_decl] = "var_decl",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_sequence_repeat1] = "sequence_repeat1",
  [aux_sym_routine_repeat1] = "routine_repeat1",
  [aux_sym_param_interface_repeat1] = "param_interface_repeat1",
  [aux_sym_sub_repeat1] = "sub_repeat1",
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
  [sym_key_in] = sym_key_in,
  [sym_key_out] = sym_key_out,
  [sym_eos] = sym_eos,
  [sym_bind] = sym_bind,
  [sym_open_scope] = sym_open_scope,
  [sym_close_scope] = sym_close_scope,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
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
  [sym_seq_name] = sym_seq_name,
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
  [sym_lexpr] = sym_lexpr,
  [sym_op] = sym_op,
  [sym_label] = sym_label,
  [sym_variable] = sym_variable,
  [sym_var_decl] = sym_var_decl,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_sequence_repeat1] = aux_sym_sequence_repeat1,
  [aux_sym_routine_repeat1] = aux_sym_routine_repeat1,
  [aux_sym_param_interface_repeat1] = aux_sym_param_interface_repeat1,
  [aux_sym_sub_repeat1] = aux_sym_sub_repeat1,
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
  [sym_open_scope] = {
    .visible = true,
    .named = true,
  },
  [sym_close_scope] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
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
  [sym_seq_name] = {
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
  [sym_lexpr] = {
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
  [sym_var_decl] = {
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
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(32);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '\'') ADVANCE(60);
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == '*') ADVANCE(50);
      if (lookahead == '+') ADVANCE(48);
      if (lookahead == ',') ADVANCE(36);
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == ';') ADVANCE(56);
      if (lookahead == '<') ADVANCE(52);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '>') ADVANCE(51);
      if (lookahead == 'd') ADVANCE(8);
      if (lookahead == 'i') ADVANCE(14);
      if (lookahead == 'j') ADVANCE(27);
      if (lookahead == 'l') ADVANCE(4);
      if (lookahead == 'o') ADVANCE(28);
      if (lookahead == 'p') ADVANCE(11);
      if (lookahead == 'r') ADVANCE(16);
      if (lookahead == 's') ADVANCE(9);
      if (lookahead == 't') ADVANCE(19);
      if (lookahead == 'u') ADVANCE(23);
      if (lookahead == '{') ADVANCE(58);
      if (lookahead == '}') ADVANCE(59);
      if (lookahead == '~') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == '*') ADVANCE(50);
      if (lookahead == '+') ADVANCE(48);
      if (lookahead == ',') ADVANCE(36);
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == ';') ADVANCE(56);
      if (lookahead == '<') ADVANCE(52);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '>') ADVANCE(51);
      if (lookahead == '}') ADVANCE(59);
      if (lookahead == '~') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == 'b') ADVANCE(46);
      END_STATE();
    case 6:
      if (lookahead == 'b') ADVANCE(45);
      END_STATE();
    case 7:
      if (lookahead == 'b') ADVANCE(29);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(18);
      if (lookahead == 'u') ADVANCE(6);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(20);
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 12:
      if (lookahead == 'g') ADVANCE(42);
      END_STATE();
    case 13:
      if (lookahead == 'm') ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 17:
      if (lookahead == 'p') ADVANCE(47);
      END_STATE();
    case 18:
      if (lookahead == 'q') ADVANCE(35);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(3);
      END_STATE();
    case 20:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 22:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 23:
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 27:
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 28:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 29:
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 30:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 31:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_seq);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_rout);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_put);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_debug);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_trans);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_pers);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_lab);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_jump);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_key_in);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_key_out);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_eos);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_bind);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_open_scope);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_close_scope);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_iden);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
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
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
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
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 61},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
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
    [sym_key_in] = ACTIONS(1),
    [sym_key_out] = ACTIONS(1),
    [sym_eos] = ACTIONS(1),
    [sym_bind] = ACTIONS(1),
    [sym_open_scope] = ACTIONS(1),
    [sym_close_scope] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(85),
    [sym_unit] = STATE(13),
    [sym_import] = STATE(34),
    [sym_sequence] = STATE(34),
    [sym_routine] = STATE(34),
    [aux_sym_source_file_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_use] = ACTIONS(7),
    [anon_sym_seq] = ACTIONS(9),
    [anon_sym_rout] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
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
      sym_close_scope,
    STATE(3), 2,
      sym_statement,
      aux_sym_routine_repeat1,
    STATE(78), 7,
      sym_put,
      sym_debug,
      sym_trans,
      sym_pers,
      sym_sub,
      sym_lab,
      sym_jump,
  [41] = 11,
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
    ACTIONS(31), 1,
      sym_close_scope,
    STATE(5), 2,
      sym_statement,
      aux_sym_routine_repeat1,
    STATE(78), 7,
      sym_put,
      sym_debug,
      sym_trans,
      sym_pers,
      sym_sub,
      sym_lab,
      sym_jump,
  [82] = 11,
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
    ACTIONS(31), 1,
      sym_close_scope,
    STATE(6), 2,
      sym_statement,
      aux_sym_routine_repeat1,
    STATE(78), 7,
      sym_put,
      sym_debug,
      sym_trans,
      sym_pers,
      sym_sub,
      sym_lab,
      sym_jump,
  [123] = 11,
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
      sym_close_scope,
    STATE(5), 2,
      sym_statement,
      aux_sym_routine_repeat1,
    STATE(78), 7,
      sym_put,
      sym_debug,
      sym_trans,
      sym_pers,
      sym_sub,
      sym_lab,
      sym_jump,
  [164] = 11,
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
    ACTIONS(59), 1,
      sym_close_scope,
    STATE(5), 2,
      sym_statement,
      aux_sym_routine_repeat1,
    STATE(78), 7,
      sym_put,
      sym_debug,
      sym_trans,
      sym_pers,
      sym_sub,
      sym_lab,
      sym_jump,
  [205] = 2,
    STATE(29), 1,
      sym_op,
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
  [223] = 1,
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
  [238] = 1,
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
  [253] = 1,
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
  [268] = 1,
    ACTIONS(69), 12,
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
  [283] = 4,
    ACTIONS(71), 1,
      anon_sym_COMMA,
    STATE(29), 1,
      sym_op,
    ACTIONS(73), 2,
      anon_sym_RPAREN,
      sym_iden,
    ACTIONS(75), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [302] = 7,
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
    STATE(14), 2,
      sym_unit,
      aux_sym_source_file_repeat1,
    STATE(34), 3,
      sym_import,
      sym_sequence,
      sym_routine,
  [327] = 7,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(81), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_use,
    ACTIONS(87), 1,
      anon_sym_seq,
    ACTIONS(90), 1,
      anon_sym_rout,
    STATE(14), 2,
      sym_unit,
      aux_sym_source_file_repeat1,
    STATE(34), 3,
      sym_import,
      sym_sequence,
      sym_routine,
  [352] = 3,
    STATE(29), 1,
      sym_op,
    ACTIONS(93), 2,
      anon_sym_EQ,
      sym_eos,
    ACTIONS(75), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [368] = 1,
    ACTIONS(95), 9,
      sym_comment,
      anon_sym_put,
      anon_sym_debug,
      anon_sym_trans,
      anon_sym_pers,
      anon_sym_sub,
      anon_sym_lab,
      anon_sym_jump,
      sym_close_scope,
  [380] = 1,
    ACTIONS(97), 9,
      sym_comment,
      anon_sym_put,
      anon_sym_debug,
      anon_sym_trans,
      anon_sym_pers,
      anon_sym_sub,
      anon_sym_lab,
      anon_sym_jump,
      sym_close_scope,
  [392] = 3,
    ACTIONS(99), 1,
      sym_bind,
    STATE(29), 1,
      sym_op,
    ACTIONS(75), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [407] = 3,
    ACTIONS(101), 1,
      sym_eos,
    STATE(29), 1,
      sym_op,
    ACTIONS(75), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [422] = 3,
    ACTIONS(103), 1,
      sym_bind,
    STATE(29), 1,
      sym_op,
    ACTIONS(75), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [437] = 3,
    ACTIONS(105), 1,
      sym_eos,
    STATE(29), 1,
      sym_op,
    ACTIONS(75), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [452] = 3,
    ACTIONS(107), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      sym_op,
    ACTIONS(75), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [467] = 3,
    ACTIONS(109), 1,
      sym_eos,
    STATE(29), 1,
      sym_op,
    ACTIONS(75), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [482] = 6,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      sym_iden,
    ACTIONS(115), 1,
      sym_number,
    STATE(11), 1,
      sym_variable,
    STATE(20), 1,
      sym_expr,
    STATE(9), 2,
      sym_binary,
      sym_paran,
  [502] = 6,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      sym_iden,
    ACTIONS(115), 1,
      sym_number,
    STATE(11), 1,
      sym_variable,
    STATE(19), 1,
      sym_expr,
    STATE(9), 2,
      sym_binary,
      sym_paran,
  [522] = 6,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      sym_iden,
    ACTIONS(115), 1,
      sym_number,
    STATE(11), 1,
      sym_variable,
    STATE(18), 1,
      sym_expr,
    STATE(9), 2,
      sym_binary,
      sym_paran,
  [542] = 6,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      sym_iden,
    ACTIONS(115), 1,
      sym_number,
    STATE(11), 1,
      sym_variable,
    STATE(21), 1,
      sym_expr,
    STATE(9), 2,
      sym_binary,
      sym_paran,
  [562] = 6,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      sym_iden,
    ACTIONS(115), 1,
      sym_number,
    STATE(11), 1,
      sym_variable,
    STATE(23), 1,
      sym_expr,
    STATE(9), 2,
      sym_binary,
      sym_paran,
  [582] = 6,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      sym_iden,
    ACTIONS(115), 1,
      sym_number,
    STATE(7), 1,
      sym_expr,
    STATE(11), 1,
      sym_variable,
    STATE(9), 2,
      sym_binary,
      sym_paran,
  [602] = 6,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      sym_iden,
    ACTIONS(115), 1,
      sym_number,
    STATE(11), 1,
      sym_variable,
    STATE(15), 1,
      sym_expr,
    STATE(9), 2,
      sym_binary,
      sym_paran,
  [622] = 6,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      sym_iden,
    ACTIONS(115), 1,
      sym_number,
    STATE(11), 1,
      sym_variable,
    STATE(12), 1,
      sym_expr,
    STATE(9), 2,
      sym_binary,
      sym_paran,
  [642] = 6,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      sym_iden,
    ACTIONS(115), 1,
      sym_number,
    STATE(11), 1,
      sym_variable,
    STATE(22), 1,
      sym_expr,
    STATE(9), 2,
      sym_binary,
      sym_paran,
  [662] = 1,
    ACTIONS(117), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [670] = 1,
    ACTIONS(119), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [678] = 3,
    ACTIONS(121), 1,
      anon_sym_RPAREN,
    ACTIONS(123), 2,
      sym_key_in,
      sym_key_out,
    STATE(41), 2,
      sym_param_def,
      aux_sym_param_interface_repeat1,
  [690] = 1,
    ACTIONS(125), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [698] = 1,
    ACTIONS(127), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [706] = 1,
    ACTIONS(129), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [714] = 1,
    ACTIONS(131), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [722] = 3,
    ACTIONS(133), 1,
      anon_sym_RPAREN,
    ACTIONS(135), 2,
      sym_key_in,
      sym_key_out,
    STATE(40), 2,
      sym_param_def,
      aux_sym_param_interface_repeat1,
  [734] = 3,
    ACTIONS(138), 1,
      anon_sym_RPAREN,
    ACTIONS(123), 2,
      sym_key_in,
      sym_key_out,
    STATE(40), 2,
      sym_param_def,
      aux_sym_param_interface_repeat1,
  [746] = 1,
    ACTIONS(140), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [754] = 4,
    ACTIONS(142), 1,
      anon_sym_RPAREN,
    ACTIONS(144), 1,
      sym_iden,
    STATE(45), 1,
      aux_sym_sub_repeat1,
    STATE(83), 1,
      sym_param_name,
  [767] = 4,
    ACTIONS(146), 1,
      sym_close_scope,
    ACTIONS(148), 1,
      sym_iden,
    STATE(48), 1,
      aux_sym_sequence_repeat1,
    STATE(52), 1,
      sym_seq_entry,
  [780] = 4,
    ACTIONS(150), 1,
      anon_sym_RPAREN,
    ACTIONS(152), 1,
      sym_iden,
    STATE(45), 1,
      aux_sym_sub_repeat1,
    STATE(83), 1,
      sym_param_name,
  [793] = 4,
    ACTIONS(148), 1,
      sym_iden,
    ACTIONS(155), 1,
      sym_close_scope,
    STATE(44), 1,
      aux_sym_sequence_repeat1,
    STATE(52), 1,
      sym_seq_entry,
  [806] = 4,
    ACTIONS(144), 1,
      sym_iden,
    ACTIONS(157), 1,
      anon_sym_RPAREN,
    STATE(43), 1,
      aux_sym_sub_repeat1,
    STATE(83), 1,
      sym_param_name,
  [819] = 4,
    ACTIONS(159), 1,
      sym_close_scope,
    ACTIONS(161), 1,
      sym_iden,
    STATE(48), 1,
      aux_sym_sequence_repeat1,
    STATE(52), 1,
      sym_seq_entry,
  [832] = 1,
    ACTIONS(164), 3,
      anon_sym_LPAREN,
      sym_iden,
      sym_number,
  [838] = 3,
    ACTIONS(166), 1,
      sym_iden,
    STATE(30), 1,
      sym_var_decl,
    STATE(79), 1,
      sym_lexpr,
  [848] = 1,
    ACTIONS(168), 3,
      anon_sym_COMMA,
      sym_close_scope,
      sym_iden,
  [854] = 2,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    ACTIONS(172), 2,
      sym_close_scope,
      sym_iden,
  [862] = 3,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      sym_open_scope,
    STATE(89), 1,
      sym_param_interface,
  [872] = 1,
    ACTIONS(178), 3,
      anon_sym_RPAREN,
      sym_key_in,
      sym_key_out,
  [878] = 3,
    ACTIONS(166), 1,
      sym_iden,
    STATE(30), 1,
      sym_var_decl,
    STATE(80), 1,
      sym_lexpr,
  [888] = 3,
    ACTIONS(166), 1,
      sym_iden,
    STATE(30), 1,
      sym_var_decl,
    STATE(81), 1,
      sym_lexpr,
  [898] = 1,
    ACTIONS(180), 3,
      anon_sym_LPAREN,
      sym_iden,
      sym_number,
  [904] = 1,
    ACTIONS(182), 2,
      sym_eos,
      sym_bind,
  [909] = 2,
    ACTIONS(184), 1,
      sym_eos,
    ACTIONS(186), 1,
      sym_bind,
  [916] = 2,
    ACTIONS(188), 1,
      anon_sym_SQUOTE,
    STATE(75), 1,
      sym_string,
  [923] = 2,
    ACTIONS(144), 1,
      sym_iden,
    STATE(72), 1,
      sym_param_name,
  [930] = 1,
    ACTIONS(190), 2,
      anon_sym_LPAREN,
      sym_open_scope,
  [935] = 1,
    ACTIONS(192), 2,
      anon_sym_RPAREN,
      sym_iden,
  [940] = 2,
    ACTIONS(194), 1,
      sym_iden,
    STATE(59), 1,
      sym_label,
  [947] = 2,
    ACTIONS(196), 1,
      sym_iden,
    STATE(88), 1,
      sym_rout_name,
  [954] = 2,
    ACTIONS(198), 1,
      sym_iden,
    STATE(84), 1,
      sym_seq_name,
  [961] = 2,
    ACTIONS(196), 1,
      sym_iden,
    STATE(53), 1,
      sym_rout_name,
  [968] = 1,
    ACTIONS(159), 2,
      sym_close_scope,
      sym_iden,
  [973] = 1,
    ACTIONS(200), 2,
      sym_eos,
      sym_bind,
  [978] = 2,
    ACTIONS(194), 1,
      sym_iden,
    STATE(90), 1,
      sym_label,
  [985] = 1,
    ACTIONS(202), 1,
      anon_sym_SQUOTE,
  [989] = 1,
    ACTIONS(204), 1,
      sym_eos,
  [993] = 1,
    ACTIONS(206), 1,
      sym_eos,
  [997] = 1,
    ACTIONS(208), 1,
      aux_sym_string_token1,
  [1001] = 1,
    ACTIONS(210), 1,
      sym_eos,
  [1005] = 1,
    ACTIONS(212), 1,
      sym_open_scope,
  [1009] = 1,
    ACTIONS(214), 1,
      sym_open_scope,
  [1013] = 1,
    ACTIONS(216), 1,
      sym_eos,
  [1017] = 1,
    ACTIONS(218), 1,
      anon_sym_EQ,
  [1021] = 1,
    ACTIONS(220), 1,
      sym_eos,
  [1025] = 1,
    ACTIONS(222), 1,
      sym_eos,
  [1029] = 1,
    ACTIONS(224), 1,
      sym_eos,
  [1033] = 1,
    ACTIONS(226), 1,
      sym_bind,
  [1037] = 1,
    ACTIONS(228), 1,
      sym_open_scope,
  [1041] = 1,
    ACTIONS(230), 1,
      ts_builtin_sym_end,
  [1045] = 1,
    ACTIONS(232), 1,
      sym_open_scope,
  [1049] = 1,
    ACTIONS(234), 1,
      sym_eos,
  [1053] = 1,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
  [1057] = 1,
    ACTIONS(238), 1,
      sym_open_scope,
  [1061] = 1,
    ACTIONS(240), 1,
      sym_eos,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 41,
  [SMALL_STATE(4)] = 82,
  [SMALL_STATE(5)] = 123,
  [SMALL_STATE(6)] = 164,
  [SMALL_STATE(7)] = 205,
  [SMALL_STATE(8)] = 223,
  [SMALL_STATE(9)] = 238,
  [SMALL_STATE(10)] = 253,
  [SMALL_STATE(11)] = 268,
  [SMALL_STATE(12)] = 283,
  [SMALL_STATE(13)] = 302,
  [SMALL_STATE(14)] = 327,
  [SMALL_STATE(15)] = 352,
  [SMALL_STATE(16)] = 368,
  [SMALL_STATE(17)] = 380,
  [SMALL_STATE(18)] = 392,
  [SMALL_STATE(19)] = 407,
  [SMALL_STATE(20)] = 422,
  [SMALL_STATE(21)] = 437,
  [SMALL_STATE(22)] = 452,
  [SMALL_STATE(23)] = 467,
  [SMALL_STATE(24)] = 482,
  [SMALL_STATE(25)] = 502,
  [SMALL_STATE(26)] = 522,
  [SMALL_STATE(27)] = 542,
  [SMALL_STATE(28)] = 562,
  [SMALL_STATE(29)] = 582,
  [SMALL_STATE(30)] = 602,
  [SMALL_STATE(31)] = 622,
  [SMALL_STATE(32)] = 642,
  [SMALL_STATE(33)] = 662,
  [SMALL_STATE(34)] = 670,
  [SMALL_STATE(35)] = 678,
  [SMALL_STATE(36)] = 690,
  [SMALL_STATE(37)] = 698,
  [SMALL_STATE(38)] = 706,
  [SMALL_STATE(39)] = 714,
  [SMALL_STATE(40)] = 722,
  [SMALL_STATE(41)] = 734,
  [SMALL_STATE(42)] = 746,
  [SMALL_STATE(43)] = 754,
  [SMALL_STATE(44)] = 767,
  [SMALL_STATE(45)] = 780,
  [SMALL_STATE(46)] = 793,
  [SMALL_STATE(47)] = 806,
  [SMALL_STATE(48)] = 819,
  [SMALL_STATE(49)] = 832,
  [SMALL_STATE(50)] = 838,
  [SMALL_STATE(51)] = 848,
  [SMALL_STATE(52)] = 854,
  [SMALL_STATE(53)] = 862,
  [SMALL_STATE(54)] = 872,
  [SMALL_STATE(55)] = 878,
  [SMALL_STATE(56)] = 888,
  [SMALL_STATE(57)] = 898,
  [SMALL_STATE(58)] = 904,
  [SMALL_STATE(59)] = 909,
  [SMALL_STATE(60)] = 916,
  [SMALL_STATE(61)] = 923,
  [SMALL_STATE(62)] = 930,
  [SMALL_STATE(63)] = 935,
  [SMALL_STATE(64)] = 940,
  [SMALL_STATE(65)] = 947,
  [SMALL_STATE(66)] = 954,
  [SMALL_STATE(67)] = 961,
  [SMALL_STATE(68)] = 968,
  [SMALL_STATE(69)] = 973,
  [SMALL_STATE(70)] = 978,
  [SMALL_STATE(71)] = 985,
  [SMALL_STATE(72)] = 989,
  [SMALL_STATE(73)] = 993,
  [SMALL_STATE(74)] = 997,
  [SMALL_STATE(75)] = 1001,
  [SMALL_STATE(76)] = 1005,
  [SMALL_STATE(77)] = 1009,
  [SMALL_STATE(78)] = 1013,
  [SMALL_STATE(79)] = 1017,
  [SMALL_STATE(80)] = 1021,
  [SMALL_STATE(81)] = 1025,
  [SMALL_STATE(82)] = 1029,
  [SMALL_STATE(83)] = 1033,
  [SMALL_STATE(84)] = 1037,
  [SMALL_STATE(85)] = 1041,
  [SMALL_STATE(86)] = 1045,
  [SMALL_STATE(87)] = 1049,
  [SMALL_STATE(88)] = 1053,
  [SMALL_STATE(89)] = 1057,
  [SMALL_STATE(90)] = 1061,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(17),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(50),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(25),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(24),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(26),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(65),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(70),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(64),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 3, .production_id = 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paran, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1, .production_id = 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sub_repeat1, 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(60),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(66),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lexpr, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_debug, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put, 4),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 4),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_routine, 4),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_routine, 5),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 4),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 5),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_param_interface_repeat1, 2),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_param_interface_repeat1, 2), SHIFT_REPEAT(61),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_routine, 6),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sub_repeat1, 2),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sub_repeat1, 2), SHIFT_REPEAT(69),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 2),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(51),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_decl, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seq_entry, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_def, 3),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rout_name, 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sub_repeat1, 4),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_name, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seq_name, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_interface, 3),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans, 4),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pers, 4),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub, 4),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [230] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_interface, 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub, 5),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lab, 2),
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
