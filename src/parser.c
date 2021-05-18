#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 39
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 5

enum {
  sym__identifier = 1,
  sym_comment = 2,
  sym_one_or_more = 3,
  sym_zero_or_one = 4,
  sym_zero_or_more = 5,
  sym_capture = 6,
  anon_sym_LBRACK = 7,
  anon_sym_RBRACK = 8,
  anon_sym_DQUOTE = 9,
  aux_sym_anonymous_leaf_token1 = 10,
  sym_escape_sequence = 11,
  anon_sym_LPAREN = 12,
  anon_sym_RPAREN = 13,
  anon_sym_COLON = 14,
  anon_sym_BANG = 15,
  anon_sym__ = 16,
  sym_query = 17,
  sym_pattern = 18,
  sym__pattern = 19,
  sym__quantifier = 20,
  sym_alternation = 21,
  sym_choice = 22,
  sym_anonymous_leaf = 23,
  sym_group = 24,
  sym_named_node = 25,
  sym_node_name = 26,
  sym_child = 27,
  sym_field_name = 28,
  sym_negated_child = 29,
  sym_wildcard_node = 30,
  aux_sym_query_repeat1 = 31,
  aux_sym_alternation_repeat1 = 32,
  aux_sym_anonymous_leaf_repeat1 = 33,
  aux_sym_named_node_repeat1 = 34,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__identifier] = "_identifier",
  [sym_comment] = "comment",
  [sym_one_or_more] = "one_or_more",
  [sym_zero_or_one] = "zero_or_one",
  [sym_zero_or_more] = "zero_or_more",
  [sym_capture] = "capture",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_anonymous_leaf_token1] = "anonymous_leaf_token1",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [anon_sym_BANG] = "!",
  [anon_sym__] = "_",
  [sym_query] = "query",
  [sym_pattern] = "pattern",
  [sym__pattern] = "_pattern",
  [sym__quantifier] = "_quantifier",
  [sym_alternation] = "alternation",
  [sym_choice] = "choice",
  [sym_anonymous_leaf] = "anonymous_leaf",
  [sym_group] = "group",
  [sym_named_node] = "named_node",
  [sym_node_name] = "node_name",
  [sym_child] = "child",
  [sym_field_name] = "field_name",
  [sym_negated_child] = "negated_child",
  [sym_wildcard_node] = "wildcard_node",
  [aux_sym_query_repeat1] = "query_repeat1",
  [aux_sym_alternation_repeat1] = "alternation_repeat1",
  [aux_sym_anonymous_leaf_repeat1] = "anonymous_leaf_repeat1",
  [aux_sym_named_node_repeat1] = "named_node_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__identifier] = sym__identifier,
  [sym_comment] = sym_comment,
  [sym_one_or_more] = sym_one_or_more,
  [sym_zero_or_one] = sym_zero_or_one,
  [sym_zero_or_more] = sym_zero_or_more,
  [sym_capture] = sym_capture,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_anonymous_leaf_token1] = aux_sym_anonymous_leaf_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym__] = anon_sym__,
  [sym_query] = sym_query,
  [sym_pattern] = sym_pattern,
  [sym__pattern] = sym__pattern,
  [sym__quantifier] = sym__quantifier,
  [sym_alternation] = sym_alternation,
  [sym_choice] = sym_choice,
  [sym_anonymous_leaf] = sym_anonymous_leaf,
  [sym_group] = sym_group,
  [sym_named_node] = sym_named_node,
  [sym_node_name] = sym_node_name,
  [sym_child] = sym_child,
  [sym_field_name] = sym_field_name,
  [sym_negated_child] = sym_negated_child,
  [sym_wildcard_node] = sym_wildcard_node,
  [aux_sym_query_repeat1] = aux_sym_query_repeat1,
  [aux_sym_alternation_repeat1] = aux_sym_alternation_repeat1,
  [aux_sym_anonymous_leaf_repeat1] = aux_sym_anonymous_leaf_repeat1,
  [aux_sym_named_node_repeat1] = aux_sym_named_node_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_one_or_more] = {
    .visible = true,
    .named = true,
  },
  [sym_zero_or_one] = {
    .visible = true,
    .named = true,
  },
  [sym_zero_or_more] = {
    .visible = true,
    .named = true,
  },
  [sym_capture] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_anonymous_leaf_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [sym_query] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym__pattern] = {
    .visible = false,
    .named = true,
  },
  [sym__quantifier] = {
    .visible = false,
    .named = true,
  },
  [sym_alternation] = {
    .visible = true,
    .named = true,
  },
  [sym_choice] = {
    .visible = true,
    .named = true,
  },
  [sym_anonymous_leaf] = {
    .visible = true,
    .named = true,
  },
  [sym_group] = {
    .visible = true,
    .named = true,
  },
  [sym_named_node] = {
    .visible = true,
    .named = true,
  },
  [sym_node_name] = {
    .visible = true,
    .named = true,
  },
  [sym_child] = {
    .visible = true,
    .named = true,
  },
  [sym_field_name] = {
    .visible = true,
    .named = true,
  },
  [sym_negated_child] = {
    .visible = true,
    .named = true,
  },
  [sym_wildcard_node] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_query_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_alternation_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_anonymous_leaf_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_named_node_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_pattern = 1,
  field_quantifier = 2,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_pattern] = "pattern",
  [field_quantifier] = "quantifier",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_pattern, 0, .inherited = true},
    {field_quantifier, 0, .inherited = true},
  [2] =
    {field_pattern, 0},
  [3] =
    {field_pattern, 0},
    {field_quantifier, 1},
  [5] =
    {field_pattern, 2, .inherited = true},
    {field_quantifier, 2, .inherited = true},
};

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '(') ADVANCE(19);
      if (lookahead == ')') ADVANCE(20);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '+') ADVANCE(8);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == ';') ADVANCE(7);
      if (lookahead == '?') ADVANCE(9);
      if (lookahead == '@') ADVANCE(4);
      if (lookahead == '[') ADVANCE(12);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == ']') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == ';') ADVANCE(16);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == ';') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '0' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 5:
      if (eof) ADVANCE(6);
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '(') ADVANCE(19);
      if (lookahead == ')') ADVANCE(20);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '+') ADVANCE(8);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == ';') ADVANCE(7);
      if (lookahead == '?') ADVANCE(9);
      if (lookahead == '@') ADVANCE(4);
      if (lookahead == '[') ADVANCE(12);
      if (lookahead == ']') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_one_or_more);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_zero_or_one);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_zero_or_more);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_capture);
      if (lookahead == '!' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_anonymous_leaf_token1);
      if (lookahead == ';') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_anonymous_leaf_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '!' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == '_') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
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
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__identifier] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_one_or_more] = ACTIONS(1),
    [sym_zero_or_one] = ACTIONS(1),
    [sym_zero_or_more] = ACTIONS(1),
    [sym_capture] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
  },
  [1] = {
    [sym_query] = STATE(37),
    [sym_pattern] = STATE(10),
    [sym__pattern] = STATE(31),
    [sym_alternation] = STATE(5),
    [sym_anonymous_leaf] = STATE(5),
    [sym_group] = STATE(5),
    [sym_named_node] = STATE(5),
    [sym_wildcard_node] = STATE(5),
    [aux_sym_query_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym__] = ACTIONS(13),
  },
  [2] = {
    [sym__pattern] = STATE(27),
    [sym_alternation] = STATE(5),
    [sym_anonymous_leaf] = STATE(5),
    [sym_group] = STATE(5),
    [sym_named_node] = STATE(5),
    [sym_child] = STATE(2),
    [sym_field_name] = STATE(38),
    [sym_negated_child] = STATE(2),
    [sym_wildcard_node] = STATE(5),
    [aux_sym_named_node_repeat1] = STATE(2),
    [sym__identifier] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(18),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(24),
    [anon_sym_RPAREN] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym__] = ACTIONS(32),
  },
  [3] = {
    [sym__pattern] = STATE(27),
    [sym_alternation] = STATE(5),
    [sym_anonymous_leaf] = STATE(5),
    [sym_group] = STATE(5),
    [sym_named_node] = STATE(5),
    [sym_child] = STATE(2),
    [sym_field_name] = STATE(38),
    [sym_negated_child] = STATE(2),
    [sym_wildcard_node] = STATE(5),
    [aux_sym_named_node_repeat1] = STATE(2),
    [sym__identifier] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(37),
    [anon_sym_BANG] = ACTIONS(39),
    [anon_sym__] = ACTIONS(41),
  },
  [4] = {
    [sym__pattern] = STATE(27),
    [sym_alternation] = STATE(5),
    [sym_anonymous_leaf] = STATE(5),
    [sym_group] = STATE(5),
    [sym_named_node] = STATE(5),
    [sym_child] = STATE(3),
    [sym_field_name] = STATE(38),
    [sym_negated_child] = STATE(3),
    [sym_wildcard_node] = STATE(5),
    [aux_sym_named_node_repeat1] = STATE(3),
    [sym__identifier] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(43),
    [anon_sym_BANG] = ACTIONS(39),
    [anon_sym__] = ACTIONS(41),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      sym_capture,
    STATE(22), 1,
      sym__quantifier,
    ACTIONS(47), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(49), 3,
      sym_one_or_more,
      sym_zero_or_one,
      sym_zero_or_more,
    ACTIONS(45), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BANG,
  [28] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      sym__identifier,
    ACTIONS(55), 1,
      anon_sym__,
    STATE(4), 1,
      sym_node_name,
    STATE(31), 1,
      sym__pattern,
    STATE(16), 2,
      sym_pattern,
      aux_sym_query_repeat1,
    STATE(5), 5,
      sym_alternation,
      sym_anonymous_leaf,
      sym_group,
      sym_named_node,
      sym_wildcard_node,
  [64] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(62), 1,
      anon_sym_DQUOTE,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(68), 1,
      anon_sym__,
    STATE(31), 1,
      sym__pattern,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
    STATE(7), 2,
      sym_pattern,
      aux_sym_query_repeat1,
    STATE(5), 5,
      sym_alternation,
      sym_anonymous_leaf,
      sym_group,
      sym_named_node,
      sym_wildcard_node,
  [98] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(71), 11,
      ts_builtin_sym_end,
      sym_one_or_more,
      sym_zero_or_one,
      sym_zero_or_more,
      sym_capture,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BANG,
  [119] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(75), 11,
      ts_builtin_sym_end,
      sym_one_or_more,
      sym_zero_or_one,
      sym_zero_or_more,
      sym_capture,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BANG,
  [140] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym__,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    STATE(31), 1,
      sym__pattern,
    STATE(7), 2,
      sym_pattern,
      aux_sym_query_repeat1,
    STATE(5), 5,
      sym_alternation,
      sym_anonymous_leaf,
      sym_group,
      sym_named_node,
      sym_wildcard_node,
  [173] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(81), 11,
      ts_builtin_sym_end,
      sym_one_or_more,
      sym_zero_or_one,
      sym_zero_or_more,
      sym_capture,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BANG,
  [194] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym__,
    ACTIONS(85), 1,
      anon_sym_RBRACK,
    STATE(32), 1,
      sym__pattern,
    STATE(19), 2,
      sym_choice,
      aux_sym_alternation_repeat1,
    STATE(5), 5,
      sym_alternation,
      sym_anonymous_leaf,
      sym_group,
      sym_named_node,
      sym_wildcard_node,
  [227] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(87), 11,
      ts_builtin_sym_end,
      sym_one_or_more,
      sym_zero_or_one,
      sym_zero_or_more,
      sym_capture,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BANG,
  [248] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(91), 11,
      ts_builtin_sym_end,
      sym_one_or_more,
      sym_zero_or_one,
      sym_zero_or_more,
      sym_capture,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BANG,
  [269] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(95), 11,
      ts_builtin_sym_end,
      sym_one_or_more,
      sym_zero_or_one,
      sym_zero_or_more,
      sym_capture,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BANG,
  [290] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym__,
    ACTIONS(99), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      sym__pattern,
    STATE(7), 2,
      sym_pattern,
      aux_sym_query_repeat1,
    STATE(5), 5,
      sym_alternation,
      sym_anonymous_leaf,
      sym_group,
      sym_named_node,
      sym_wildcard_node,
  [323] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(101), 11,
      ts_builtin_sym_end,
      sym_one_or_more,
      sym_zero_or_one,
      sym_zero_or_more,
      sym_capture,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BANG,
  [344] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(105), 11,
      ts_builtin_sym_end,
      sym_one_or_more,
      sym_zero_or_one,
      sym_zero_or_more,
      sym_capture,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BANG,
  [365] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      anon_sym_RBRACK,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      anon_sym__,
    STATE(32), 1,
      sym__pattern,
    STATE(19), 2,
      sym_choice,
      aux_sym_alternation_repeat1,
    STATE(5), 5,
      sym_alternation,
      sym_anonymous_leaf,
      sym_group,
      sym_named_node,
      sym_wildcard_node,
  [398] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym__,
    STATE(32), 1,
      sym__pattern,
    STATE(12), 2,
      sym_choice,
      aux_sym_alternation_repeat1,
    STATE(5), 5,
      sym_alternation,
      sym_anonymous_leaf,
      sym_group,
      sym_named_node,
      sym_wildcard_node,
  [428] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym__,
    STATE(30), 1,
      sym__pattern,
    STATE(5), 5,
      sym_alternation,
      sym_anonymous_leaf,
      sym_group,
      sym_named_node,
      sym_wildcard_node,
  [454] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      sym_capture,
    ACTIONS(125), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(123), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BANG,
  [474] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_RPAREN,
    ACTIONS(95), 8,
      sym_one_or_more,
      sym_zero_or_one,
      sym_zero_or_more,
      sym_capture,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym__,
  [491] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(131), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BANG,
  [508] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(135), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BANG,
  [525] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(141), 6,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_BANG,
  [541] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(145), 5,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BANG,
  [556] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(149), 5,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BANG,
  [571] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(153), 5,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BANG,
  [586] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(157), 5,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BANG,
  [601] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym__,
  [613] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 5,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym__,
  [624] = 4,
    ACTIONS(163), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      aux_sym_anonymous_leaf_repeat1,
    ACTIONS(167), 2,
      aux_sym_anonymous_leaf_token1,
      sym_escape_sequence,
  [638] = 4,
    ACTIONS(163), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      aux_sym_anonymous_leaf_repeat1,
    ACTIONS(172), 2,
      aux_sym_anonymous_leaf_token1,
      sym_escape_sequence,
  [652] = 4,
    ACTIONS(163), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
      aux_sym_anonymous_leaf_repeat1,
    ACTIONS(176), 2,
      aux_sym_anonymous_leaf_token1,
      sym_escape_sequence,
  [666] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      sym__identifier,
    STATE(28), 1,
      sym_field_name,
  [676] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      ts_builtin_sym_end,
  [683] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_COLON,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 28,
  [SMALL_STATE(7)] = 64,
  [SMALL_STATE(8)] = 98,
  [SMALL_STATE(9)] = 119,
  [SMALL_STATE(10)] = 140,
  [SMALL_STATE(11)] = 173,
  [SMALL_STATE(12)] = 194,
  [SMALL_STATE(13)] = 227,
  [SMALL_STATE(14)] = 248,
  [SMALL_STATE(15)] = 269,
  [SMALL_STATE(16)] = 290,
  [SMALL_STATE(17)] = 323,
  [SMALL_STATE(18)] = 344,
  [SMALL_STATE(19)] = 365,
  [SMALL_STATE(20)] = 398,
  [SMALL_STATE(21)] = 428,
  [SMALL_STATE(22)] = 454,
  [SMALL_STATE(23)] = 474,
  [SMALL_STATE(24)] = 491,
  [SMALL_STATE(25)] = 508,
  [SMALL_STATE(26)] = 525,
  [SMALL_STATE(27)] = 541,
  [SMALL_STATE(28)] = 556,
  [SMALL_STATE(29)] = 571,
  [SMALL_STATE(30)] = 586,
  [SMALL_STATE(31)] = 601,
  [SMALL_STATE(32)] = 613,
  [SMALL_STATE(33)] = 624,
  [SMALL_STATE(34)] = 638,
  [SMALL_STATE(35)] = 652,
  [SMALL_STATE(36)] = 666,
  [SMALL_STATE(37)] = 676,
  [SMALL_STATE(38)] = 683,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_named_node_repeat1, 2), SHIFT_REPEAT(26),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_node_repeat1, 2), SHIFT_REPEAT(20),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_node_repeat1, 2), SHIFT_REPEAT(35),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_node_repeat1, 2), SHIFT_REPEAT(6),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_named_node_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_node_repeat1, 2), SHIFT_REPEAT(36),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_named_node_repeat1, 2), SHIFT_REPEAT(15),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 1, .production_id = 2),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pattern, 1, .production_id = 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2), SHIFT_REPEAT(20),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2), SHIFT_REPEAT(35),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2), SHIFT_REPEAT(6),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2), SHIFT_REPEAT(15),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_node, 3),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_node, 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anonymous_leaf, 3),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_anonymous_leaf, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_node, 4),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_node, 4),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anonymous_leaf, 2),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_anonymous_leaf, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_node, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wildcard_node, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_node, 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wildcard_node, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternation, 3),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alternation, 3),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternation_repeat1, 2), SHIFT_REPEAT(20),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alternation_repeat1, 2),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternation_repeat1, 2), SHIFT_REPEAT(35),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternation_repeat1, 2), SHIFT_REPEAT(6),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternation_repeat1, 2), SHIFT_REPEAT(15),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 2, .production_id = 3),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pattern, 2, .production_id = 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 2, .production_id = 2),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pattern, 2, .production_id = 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 3, .production_id = 3),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pattern, 3, .production_id = 3),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_name, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child, 1, .production_id = 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child, 1, .production_id = 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negated_child, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negated_child, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_name, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_name, 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child, 3, .production_id = 4),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child, 3, .production_id = 4),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1, .production_id = 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 1, .production_id = 1),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_anonymous_leaf_repeat1, 2),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_anonymous_leaf_repeat1, 2), SHIFT_REPEAT(33),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [180] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_tsq(void) {
  static TSLanguage language = {
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
    .parse_table = (const uint16_t *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym__identifier,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
