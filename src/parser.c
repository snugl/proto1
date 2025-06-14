#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 87
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 62
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
  sym_op = 54,
  sym_label = 55,
  sym_string = 56,
  aux_sym_source_file_repeat1 = 57,
  aux_sym_sequence_repeat1 = 58,
  aux_sym_routine_repeat1 = 59,
  aux_sym_param_interface_repeat1 = 60,
  aux_sym_sub_repeat1 = 61,
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
  [sym_op] = "op",
  [sym_label] = "label",
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
  [sym_op] = sym_op,
  [sym_label] = sym_label,
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
  [sym_op] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
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
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 2},
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
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
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
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 61},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
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
    [sym_source_file] = STATE(72),
    [sym_unit] = STATE(11),
    [sym_import] = STATE(36),
    [sym_sequence] = STATE(36),
    [sym_routine] = STATE(36),
    [aux_sym_source_file_repeat1] = STATE(11),
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
    ACTIONS(16), 1,
      anon_sym_put,
    ACTIONS(19), 1,
      anon_sym_debug,
    ACTIONS(22), 1,
      anon_sym_trans,
    ACTIONS(25), 1,
      anon_sym_pers,
    ACTIONS(28), 1,
      anon_sym_sub,
    ACTIONS(31), 1,
      anon_sym_lab,
    ACTIONS(34), 1,
      anon_sym_jump,
    ACTIONS(37), 1,
      sym_close_scope,
    STATE(2), 2,
      sym_statement,
      aux_sym_routine_repeat1,
    STATE(71), 7,
      sym_put,
      sym_debug,
      sym_trans,
      sym_pers,
      sym_sub,
      sym_lab,
      sym_jump,
  [41] = 11,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_put,
    ACTIONS(43), 1,
      anon_sym_debug,
    ACTIONS(45), 1,
      anon_sym_trans,
    ACTIONS(47), 1,
      anon_sym_pers,
    ACTIONS(49), 1,
      anon_sym_sub,
    ACTIONS(51), 1,
      anon_sym_lab,
    ACTIONS(53), 1,
      anon_sym_jump,
    ACTIONS(55), 1,
      sym_close_scope,
    STATE(6), 2,
      sym_statement,
      aux_sym_routine_repeat1,
    STATE(71), 7,
      sym_put,
      sym_debug,
      sym_trans,
      sym_pers,
      sym_sub,
      sym_lab,
      sym_jump,
  [82] = 11,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_put,
    ACTIONS(43), 1,
      anon_sym_debug,
    ACTIONS(45), 1,
      anon_sym_trans,
    ACTIONS(47), 1,
      anon_sym_pers,
    ACTIONS(49), 1,
      anon_sym_sub,
    ACTIONS(51), 1,
      anon_sym_lab,
    ACTIONS(53), 1,
      anon_sym_jump,
    ACTIONS(57), 1,
      sym_close_scope,
    STATE(5), 2,
      sym_statement,
      aux_sym_routine_repeat1,
    STATE(71), 7,
      sym_put,
      sym_debug,
      sym_trans,
      sym_pers,
      sym_sub,
      sym_lab,
      sym_jump,
  [123] = 11,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_put,
    ACTIONS(43), 1,
      anon_sym_debug,
    ACTIONS(45), 1,
      anon_sym_trans,
    ACTIONS(47), 1,
      anon_sym_pers,
    ACTIONS(49), 1,
      anon_sym_sub,
    ACTIONS(51), 1,
      anon_sym_lab,
    ACTIONS(53), 1,
      anon_sym_jump,
    ACTIONS(59), 1,
      sym_close_scope,
    STATE(2), 2,
      sym_statement,
      aux_sym_routine_repeat1,
    STATE(71), 7,
      sym_put,
      sym_debug,
      sym_trans,
      sym_pers,
      sym_sub,
      sym_lab,
      sym_jump,
  [164] = 11,
    ACTIONS(39), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_put,
    ACTIONS(43), 1,
      anon_sym_debug,
    ACTIONS(45), 1,
      anon_sym_trans,
    ACTIONS(47), 1,
      anon_sym_pers,
    ACTIONS(49), 1,
      anon_sym_sub,
    ACTIONS(51), 1,
      anon_sym_lab,
    ACTIONS(53), 1,
      anon_sym_jump,
    ACTIONS(57), 1,
      sym_close_scope,
    STATE(2), 2,
      sym_statement,
      aux_sym_routine_repeat1,
    STATE(71), 7,
      sym_put,
      sym_debug,
      sym_trans,
      sym_pers,
      sym_sub,
      sym_lab,
      sym_jump,
  [205] = 2,
    STATE(28), 1,
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
  [268] = 7,
    ACTIONS(5), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_use,
    ACTIONS(9), 1,
      anon_sym_seq,
    ACTIONS(11), 1,
      anon_sym_rout,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    STATE(12), 2,
      sym_unit,
      aux_sym_source_file_repeat1,
    STATE(36), 3,
      sym_import,
      sym_sequence,
      sym_routine,
  [293] = 7,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_use,
    ACTIONS(79), 1,
      anon_sym_seq,
    ACTIONS(82), 1,
      anon_sym_rout,
    STATE(12), 2,
      sym_unit,
      aux_sym_source_file_repeat1,
    STATE(36), 3,
      sym_import,
      sym_sequence,
      sym_routine,
  [318] = 4,
    ACTIONS(85), 1,
      anon_sym_COMMA,
    STATE(28), 1,
      sym_op,
    ACTIONS(87), 2,
      anon_sym_RPAREN,
      sym_iden,
    ACTIONS(89), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [337] = 1,
    ACTIONS(91), 9,
      sym_comment,
      anon_sym_put,
      anon_sym_debug,
      anon_sym_trans,
      anon_sym_pers,
      anon_sym_sub,
      anon_sym_lab,
      anon_sym_jump,
      sym_close_scope,
  [349] = 1,
    ACTIONS(93), 9,
      sym_comment,
      anon_sym_put,
      anon_sym_debug,
      anon_sym_trans,
      anon_sym_pers,
      anon_sym_sub,
      anon_sym_lab,
      anon_sym_jump,
      sym_close_scope,
  [361] = 3,
    ACTIONS(95), 1,
      sym_eos,
    STATE(28), 1,
      sym_op,
    ACTIONS(89), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [376] = 3,
    ACTIONS(97), 1,
      sym_eos,
    STATE(28), 1,
      sym_op,
    ACTIONS(89), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [391] = 3,
    ACTIONS(99), 1,
      anon_sym_EQ,
    STATE(28), 1,
      sym_op,
    ACTIONS(89), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [406] = 3,
    ACTIONS(101), 1,
      sym_bind,
    STATE(28), 1,
      sym_op,
    ACTIONS(89), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [421] = 3,
    ACTIONS(103), 1,
      sym_bind,
    STATE(28), 1,
      sym_op,
    ACTIONS(89), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [436] = 3,
    ACTIONS(105), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      sym_op,
    ACTIONS(89), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [451] = 3,
    ACTIONS(107), 1,
      sym_eos,
    STATE(28), 1,
      sym_op,
    ACTIONS(89), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [466] = 3,
    ACTIONS(109), 1,
      sym_eos,
    STATE(28), 1,
      sym_op,
    ACTIONS(89), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [481] = 3,
    ACTIONS(111), 1,
      sym_eos,
    STATE(28), 1,
      sym_op,
    ACTIONS(89), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_DOT,
  [496] = 4,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      sym_expr,
    ACTIONS(115), 2,
      sym_iden,
      sym_number,
    STATE(10), 2,
      sym_binary,
      sym_paran,
  [511] = 4,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      sym_expr,
    ACTIONS(115), 2,
      sym_iden,
      sym_number,
    STATE(10), 2,
      sym_binary,
      sym_paran,
  [526] = 4,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym_expr,
    ACTIONS(115), 2,
      sym_iden,
      sym_number,
    STATE(10), 2,
      sym_binary,
      sym_paran,
  [541] = 4,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    STATE(7), 1,
      sym_expr,
    ACTIONS(115), 2,
      sym_iden,
      sym_number,
    STATE(10), 2,
      sym_binary,
      sym_paran,
  [556] = 4,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym_expr,
    ACTIONS(115), 2,
      sym_iden,
      sym_number,
    STATE(10), 2,
      sym_binary,
      sym_paran,
  [571] = 4,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym_expr,
    ACTIONS(115), 2,
      sym_iden,
      sym_number,
    STATE(10), 2,
      sym_binary,
      sym_paran,
  [586] = 4,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym_expr,
    ACTIONS(115), 2,
      sym_iden,
      sym_number,
    STATE(10), 2,
      sym_binary,
      sym_paran,
  [601] = 4,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      sym_expr,
    ACTIONS(115), 2,
      sym_iden,
      sym_number,
    STATE(10), 2,
      sym_binary,
      sym_paran,
  [616] = 4,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    STATE(19), 1,
      sym_expr,
    ACTIONS(115), 2,
      sym_iden,
      sym_number,
    STATE(10), 2,
      sym_binary,
      sym_paran,
  [631] = 4,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    STATE(24), 1,
      sym_expr,
    ACTIONS(115), 2,
      sym_iden,
      sym_number,
    STATE(10), 2,
      sym_binary,
      sym_paran,
  [646] = 4,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym_expr,
    ACTIONS(115), 2,
      sym_iden,
      sym_number,
    STATE(10), 2,
      sym_binary,
      sym_paran,
  [661] = 1,
    ACTIONS(117), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [669] = 1,
    ACTIONS(119), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [677] = 1,
    ACTIONS(121), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [685] = 3,
    ACTIONS(123), 1,
      anon_sym_RPAREN,
    ACTIONS(125), 2,
      sym_key_in,
      sym_key_out,
    STATE(39), 2,
      sym_param_def,
      aux_sym_param_interface_repeat1,
  [697] = 1,
    ACTIONS(128), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [705] = 3,
    ACTIONS(130), 1,
      anon_sym_RPAREN,
    ACTIONS(132), 2,
      sym_key_in,
      sym_key_out,
    STATE(43), 2,
      sym_param_def,
      aux_sym_param_interface_repeat1,
  [717] = 1,
    ACTIONS(134), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [725] = 3,
    ACTIONS(136), 1,
      anon_sym_RPAREN,
    ACTIONS(132), 2,
      sym_key_in,
      sym_key_out,
    STATE(39), 2,
      sym_param_def,
      aux_sym_param_interface_repeat1,
  [737] = 1,
    ACTIONS(138), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [745] = 1,
    ACTIONS(140), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_use,
      anon_sym_seq,
      anon_sym_rout,
  [753] = 4,
    ACTIONS(142), 1,
      sym_close_scope,
    ACTIONS(144), 1,
      sym_iden,
    STATE(48), 1,
      aux_sym_sequence_repeat1,
    STATE(52), 1,
      sym_seq_entry,
  [766] = 4,
    ACTIONS(144), 1,
      sym_iden,
    ACTIONS(146), 1,
      sym_close_scope,
    STATE(46), 1,
      aux_sym_sequence_repeat1,
    STATE(52), 1,
      sym_seq_entry,
  [779] = 4,
    ACTIONS(148), 1,
      sym_close_scope,
    ACTIONS(150), 1,
      sym_iden,
    STATE(48), 1,
      aux_sym_sequence_repeat1,
    STATE(52), 1,
      sym_seq_entry,
  [792] = 4,
    ACTIONS(153), 1,
      anon_sym_RPAREN,
    ACTIONS(155), 1,
      sym_iden,
    STATE(51), 1,
      aux_sym_sub_repeat1,
    STATE(81), 1,
      sym_param_name,
  [805] = 4,
    ACTIONS(155), 1,
      sym_iden,
    ACTIONS(157), 1,
      anon_sym_RPAREN,
    STATE(49), 1,
      aux_sym_sub_repeat1,
    STATE(81), 1,
      sym_param_name,
  [818] = 4,
    ACTIONS(159), 1,
      anon_sym_RPAREN,
    ACTIONS(161), 1,
      sym_iden,
    STATE(51), 1,
      aux_sym_sub_repeat1,
    STATE(81), 1,
      sym_param_name,
  [831] = 2,
    ACTIONS(164), 1,
      anon_sym_COMMA,
    ACTIONS(166), 2,
      sym_close_scope,
      sym_iden,
  [839] = 3,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(170), 1,
      sym_open_scope,
    STATE(79), 1,
      sym_param_interface,
  [849] = 1,
    ACTIONS(172), 3,
      anon_sym_RPAREN,
      sym_key_in,
      sym_key_out,
  [855] = 1,
    ACTIONS(174), 3,
      anon_sym_LPAREN,
      sym_iden,
      sym_number,
  [861] = 1,
    ACTIONS(176), 3,
      anon_sym_COMMA,
      sym_close_scope,
      sym_iden,
  [867] = 2,
    ACTIONS(178), 1,
      sym_iden,
    STATE(75), 1,
      sym_label,
  [874] = 2,
    ACTIONS(178), 1,
      sym_iden,
    STATE(66), 1,
      sym_label,
  [881] = 1,
    ACTIONS(148), 2,
      sym_close_scope,
      sym_iden,
  [886] = 2,
    ACTIONS(155), 1,
      sym_iden,
    STATE(76), 1,
      sym_param_name,
  [893] = 1,
    ACTIONS(180), 2,
      sym_eos,
      sym_bind,
  [898] = 1,
    ACTIONS(182), 2,
      anon_sym_LPAREN,
      sym_open_scope,
  [903] = 2,
    ACTIONS(184), 1,
      sym_iden,
    STATE(53), 1,
      sym_rout_name,
  [910] = 2,
    ACTIONS(186), 1,
      sym_iden,
    STATE(70), 1,
      sym_seq_name,
  [917] = 1,
    ACTIONS(188), 2,
      sym_eos,
      sym_bind,
  [922] = 2,
    ACTIONS(190), 1,
      sym_eos,
    ACTIONS(192), 1,
      sym_bind,
  [929] = 2,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    STATE(86), 1,
      sym_string,
  [936] = 2,
    ACTIONS(184), 1,
      sym_iden,
    STATE(74), 1,
      sym_rout_name,
  [943] = 1,
    ACTIONS(196), 2,
      anon_sym_RPAREN,
      sym_iden,
  [948] = 1,
    ACTIONS(198), 1,
      sym_open_scope,
  [952] = 1,
    ACTIONS(200), 1,
      sym_eos,
  [956] = 1,
    ACTIONS(202), 1,
      ts_builtin_sym_end,
  [960] = 1,
    ACTIONS(204), 1,
      sym_open_scope,
  [964] = 1,
    ACTIONS(206), 1,
      anon_sym_LPAREN,
  [968] = 1,
    ACTIONS(208), 1,
      sym_eos,
  [972] = 1,
    ACTIONS(210), 1,
      sym_eos,
  [976] = 1,
    ACTIONS(212), 1,
      anon_sym_SQUOTE,
  [980] = 1,
    ACTIONS(214), 1,
      sym_open_scope,
  [984] = 1,
    ACTIONS(216), 1,
      sym_open_scope,
  [988] = 1,
    ACTIONS(218), 1,
      sym_eos,
  [992] = 1,
    ACTIONS(220), 1,
      sym_bind,
  [996] = 1,
    ACTIONS(222), 1,
      sym_eos,
  [1000] = 1,
    ACTIONS(224), 1,
      aux_sym_string_token1,
  [1004] = 1,
    ACTIONS(226), 1,
      sym_open_scope,
  [1008] = 1,
    ACTIONS(228), 1,
      sym_eos,
  [1012] = 1,
    ACTIONS(230), 1,
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
  [SMALL_STATE(12)] = 293,
  [SMALL_STATE(13)] = 318,
  [SMALL_STATE(14)] = 337,
  [SMALL_STATE(15)] = 349,
  [SMALL_STATE(16)] = 361,
  [SMALL_STATE(17)] = 376,
  [SMALL_STATE(18)] = 391,
  [SMALL_STATE(19)] = 406,
  [SMALL_STATE(20)] = 421,
  [SMALL_STATE(21)] = 436,
  [SMALL_STATE(22)] = 451,
  [SMALL_STATE(23)] = 466,
  [SMALL_STATE(24)] = 481,
  [SMALL_STATE(25)] = 496,
  [SMALL_STATE(26)] = 511,
  [SMALL_STATE(27)] = 526,
  [SMALL_STATE(28)] = 541,
  [SMALL_STATE(29)] = 556,
  [SMALL_STATE(30)] = 571,
  [SMALL_STATE(31)] = 586,
  [SMALL_STATE(32)] = 601,
  [SMALL_STATE(33)] = 616,
  [SMALL_STATE(34)] = 631,
  [SMALL_STATE(35)] = 646,
  [SMALL_STATE(36)] = 661,
  [SMALL_STATE(37)] = 669,
  [SMALL_STATE(38)] = 677,
  [SMALL_STATE(39)] = 685,
  [SMALL_STATE(40)] = 697,
  [SMALL_STATE(41)] = 705,
  [SMALL_STATE(42)] = 717,
  [SMALL_STATE(43)] = 725,
  [SMALL_STATE(44)] = 737,
  [SMALL_STATE(45)] = 745,
  [SMALL_STATE(46)] = 753,
  [SMALL_STATE(47)] = 766,
  [SMALL_STATE(48)] = 779,
  [SMALL_STATE(49)] = 792,
  [SMALL_STATE(50)] = 805,
  [SMALL_STATE(51)] = 818,
  [SMALL_STATE(52)] = 831,
  [SMALL_STATE(53)] = 839,
  [SMALL_STATE(54)] = 849,
  [SMALL_STATE(55)] = 855,
  [SMALL_STATE(56)] = 861,
  [SMALL_STATE(57)] = 867,
  [SMALL_STATE(58)] = 874,
  [SMALL_STATE(59)] = 881,
  [SMALL_STATE(60)] = 886,
  [SMALL_STATE(61)] = 893,
  [SMALL_STATE(62)] = 898,
  [SMALL_STATE(63)] = 903,
  [SMALL_STATE(64)] = 910,
  [SMALL_STATE(65)] = 917,
  [SMALL_STATE(66)] = 922,
  [SMALL_STATE(67)] = 929,
  [SMALL_STATE(68)] = 936,
  [SMALL_STATE(69)] = 943,
  [SMALL_STATE(70)] = 948,
  [SMALL_STATE(71)] = 952,
  [SMALL_STATE(72)] = 956,
  [SMALL_STATE(73)] = 960,
  [SMALL_STATE(74)] = 964,
  [SMALL_STATE(75)] = 968,
  [SMALL_STATE(76)] = 972,
  [SMALL_STATE(77)] = 976,
  [SMALL_STATE(78)] = 980,
  [SMALL_STATE(79)] = 984,
  [SMALL_STATE(80)] = 988,
  [SMALL_STATE(81)] = 992,
  [SMALL_STATE(82)] = 996,
  [SMALL_STATE(83)] = 1000,
  [SMALL_STATE(84)] = 1004,
  [SMALL_STATE(85)] = 1008,
  [SMALL_STATE(86)] = 1012,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(15),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(25),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(34),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(33),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(35),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(68),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(57),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2), SHIFT_REPEAT(58),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_routine_repeat1, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 3, .production_id = 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paran, 3),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1, .production_id = 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(36),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(64),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(63),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sub_repeat1, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put, 4),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 4),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trans, 4),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pers, 4),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_debug, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 5),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_routine, 5),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_param_interface_repeat1, 2),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_param_interface_repeat1, 2), SHIFT_REPEAT(60),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_routine, 4),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequence, 4),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_routine, 6),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 2),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 2), SHIFT_REPEAT(56),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sub_repeat1, 2),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sub_repeat1, 2), SHIFT_REPEAT(65),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sequence_repeat1, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_def, 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seq_entry, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rout_name, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_name, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sub_repeat1, 4),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [202] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seq_name, 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lab, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_interface, 3),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub, 4),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_interface, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub, 5),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
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
