#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 43
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 36
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5
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
  sym_anchor = 14,
  anon_sym_COLON = 15,
  anon_sym_BANG = 16,
  anon_sym__ = 17,
  sym_query = 18,
  sym_pattern = 19,
  sym__pattern = 20,
  sym__quantifier = 21,
  sym_alternation = 22,
  sym_choice = 23,
  sym_anonymous_leaf = 24,
  sym_group = 25,
  sym_named_node = 26,
  sym_node_name = 27,
  sym_child = 28,
  sym_field_name = 29,
  sym_negated_child = 30,
  sym_wildcard_node = 31,
  aux_sym_query_repeat1 = 32,
  aux_sym_alternation_repeat1 = 33,
  aux_sym_anonymous_leaf_repeat1 = 34,
  aux_sym_named_node_repeat1 = 35,
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
  [sym_anchor] = "anchor",
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
  [sym_anchor] = sym_anchor,
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
  [sym_anchor] = {
    .visible = true,
    .named = true,
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
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '(') ADVANCE(19);
      if (lookahead == ')') ADVANCE(20);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '+') ADVANCE(8);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == ':') ADVANCE(22);
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
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '(') ADVANCE(19);
      if (lookahead == ')') ADVANCE(20);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '+') ADVANCE(8);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == ':') ADVANCE(22);
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
      ACCEPT_TOKEN(sym_anchor);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 23:
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
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
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
    [sym_anchor] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
  },
  [1] = {
    [sym_query] = STATE(42),
    [sym_pattern] = STATE(21),
    [sym__pattern] = STATE(35),
    [sym_alternation] = STATE(6),
    [sym_anonymous_leaf] = STATE(6),
    [sym_group] = STATE(6),
    [sym_named_node] = STATE(6),
    [sym_wildcard_node] = STATE(6),
    [aux_sym_query_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym__] = ACTIONS(13),
  },
  [2] = {
    [sym__pattern] = STATE(30),
    [sym_alternation] = STATE(6),
    [sym_anonymous_leaf] = STATE(6),
    [sym_group] = STATE(6),
    [sym_named_node] = STATE(6),
    [sym_child] = STATE(4),
    [sym_field_name] = STATE(41),
    [sym_negated_child] = STATE(4),
    [sym_wildcard_node] = STATE(6),
    [aux_sym_named_node_repeat1] = STATE(4),
    [sym__identifier] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(17),
    [sym_anchor] = ACTIONS(19),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym__] = ACTIONS(23),
  },
  [3] = {
    [sym__pattern] = STATE(30),
    [sym_alternation] = STATE(6),
    [sym_anonymous_leaf] = STATE(6),
    [sym_group] = STATE(6),
    [sym_named_node] = STATE(6),
    [sym_child] = STATE(2),
    [sym_field_name] = STATE(41),
    [sym_negated_child] = STATE(2),
    [sym_wildcard_node] = STATE(6),
    [aux_sym_named_node_repeat1] = STATE(2),
    [sym__identifier] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(25),
    [sym_anchor] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(21),
    [anon_sym__] = ACTIONS(23),
  },
  [4] = {
    [sym__pattern] = STATE(30),
    [sym_alternation] = STATE(6),
    [sym_anonymous_leaf] = STATE(6),
    [sym_group] = STATE(6),
    [sym_named_node] = STATE(6),
    [sym_child] = STATE(4),
    [sym_field_name] = STATE(41),
    [sym_negated_child] = STATE(4),
    [sym_wildcard_node] = STATE(6),
    [aux_sym_named_node_repeat1] = STATE(4),
    [sym__identifier] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(32),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(38),
    [anon_sym_RPAREN] = ACTIONS(41),
    [sym_anchor] = ACTIONS(43),
    [anon_sym_BANG] = ACTIONS(46),
    [anon_sym__] = ACTIONS(49),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(21), 1,
      anon_sym_BANG,
    ACTIONS(23), 1,
      anon_sym__,
    ACTIONS(52), 1,
      anon_sym_RPAREN,
    STATE(30), 1,
      sym__pattern,
    STATE(41), 1,
      sym_field_name,
    STATE(31), 2,
      sym_child,
      sym_negated_child,
    STATE(6), 5,
      sym_alternation,
      sym_anonymous_leaf,
      sym_group,
      sym_named_node,
      sym_wildcard_node,
  [42] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      sym_capture,
    STATE(24), 1,
      sym__quantifier,
    ACTIONS(56), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(58), 3,
      sym_one_or_more,
      sym_zero_or_one,
      sym_zero_or_more,
    ACTIONS(54), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_anchor,
      anon_sym_BANG,
  [71] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(21), 1,
      anon_sym_BANG,
    ACTIONS(23), 1,
      anon_sym__,
    STATE(30), 1,
      sym__pattern,
    STATE(41), 1,
      sym_field_name,
    STATE(31), 2,
      sym_child,
      sym_negated_child,
    STATE(6), 5,
      sym_alternation,
      sym_anonymous_leaf,
      sym_group,
      sym_named_node,
      sym_wildcard_node,
  [110] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(62), 12,
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
      sym_anchor,
      anon_sym_BANG,
  [132] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(66), 12,
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
      sym_anchor,
      anon_sym_BANG,
  [154] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(70), 12,
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
      sym_anchor,
      anon_sym_BANG,
  [176] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(74), 12,
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
      sym_anchor,
      anon_sym_BANG,
  [198] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(78), 12,
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
      sym_anchor,
      anon_sym_BANG,
  [220] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      sym__identifier,
    ACTIONS(84), 1,
      anon_sym__,
    STATE(3), 1,
      sym_node_name,
    STATE(35), 1,
      sym__pattern,
    STATE(20), 2,
      sym_pattern,
      aux_sym_query_repeat1,
    STATE(6), 5,
      sym_alternation,
      sym_anonymous_leaf,
      sym_group,
      sym_named_node,
      sym_wildcard_node,
  [256] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(86), 12,
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
      sym_anchor,
      anon_sym_BANG,
  [278] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(90), 12,
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
      sym_anchor,
      anon_sym_BANG,
  [300] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_LBRACK,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym__,
    STATE(35), 1,
      sym__pattern,
    ACTIONS(94), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
    STATE(16), 2,
      sym_pattern,
      aux_sym_query_repeat1,
    STATE(6), 5,
      sym_alternation,
      sym_anonymous_leaf,
      sym_group,
      sym_named_node,
      sym_wildcard_node,
  [334] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(108), 12,
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
      sym_anchor,
      anon_sym_BANG,
  [356] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(112), 12,
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
      sym_anchor,
      anon_sym_BANG,
  [378] = 9,
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
    ACTIONS(116), 1,
      anon_sym_RBRACK,
    STATE(36), 1,
      sym__pattern,
    STATE(22), 2,
      sym_choice,
      aux_sym_alternation_repeat1,
    STATE(6), 5,
      sym_alternation,
      sym_anonymous_leaf,
      sym_group,
      sym_named_node,
      sym_wildcard_node,
  [411] = 9,
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
    ACTIONS(118), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      sym__pattern,
    STATE(16), 2,
      sym_pattern,
      aux_sym_query_repeat1,
    STATE(6), 5,
      sym_alternation,
      sym_anonymous_leaf,
      sym_group,
      sym_named_node,
      sym_wildcard_node,
  [444] = 9,
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
    ACTIONS(120), 1,
      ts_builtin_sym_end,
    STATE(35), 1,
      sym__pattern,
    STATE(16), 2,
      sym_pattern,
      aux_sym_query_repeat1,
    STATE(6), 5,
      sym_alternation,
      sym_anonymous_leaf,
      sym_group,
      sym_named_node,
      sym_wildcard_node,
  [477] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_LBRACK,
    ACTIONS(125), 1,
      anon_sym_RBRACK,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym__,
    STATE(36), 1,
      sym__pattern,
    STATE(22), 2,
      sym_choice,
      aux_sym_alternation_repeat1,
    STATE(6), 5,
      sym_alternation,
      sym_anonymous_leaf,
      sym_group,
      sym_named_node,
      sym_wildcard_node,
  [510] = 8,
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
    STATE(36), 1,
      sym__pattern,
    STATE(19), 2,
      sym_choice,
      aux_sym_alternation_repeat1,
    STATE(6), 5,
      sym_alternation,
      sym_anonymous_leaf,
      sym_group,
      sym_named_node,
      sym_wildcard_node,
  [540] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      sym_capture,
    ACTIONS(138), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(136), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_anchor,
      anon_sym_BANG,
  [561] = 7,
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
    STATE(34), 1,
      sym__pattern,
    STATE(6), 5,
      sym_alternation,
      sym_anonymous_leaf,
      sym_group,
      sym_named_node,
      sym_wildcard_node,
  [587] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(142), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_anchor,
      anon_sym_BANG,
  [605] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(146), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_anchor,
      anon_sym_BANG,
  [623] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(152), 7,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_anchor,
      anon_sym_COLON,
      anon_sym_BANG,
  [640] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_RPAREN,
    ACTIONS(86), 8,
      sym_one_or_more,
      sym_zero_or_one,
      sym_zero_or_more,
      sym_capture,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym__,
  [657] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(158), 6,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_anchor,
      anon_sym_BANG,
  [673] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(41), 6,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_anchor,
      anon_sym_BANG,
  [689] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(164), 6,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_anchor,
      anon_sym_BANG,
  [705] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(168), 6,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_anchor,
      anon_sym_BANG,
  [721] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(172), 6,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_anchor,
      anon_sym_BANG,
  [737] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym__,
  [749] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 5,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym__,
  [760] = 4,
    ACTIONS(178), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    STATE(37), 1,
      aux_sym_anonymous_leaf_repeat1,
    ACTIONS(182), 2,
      aux_sym_anonymous_leaf_token1,
      sym_escape_sequence,
  [774] = 4,
    ACTIONS(178), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_DQUOTE,
    STATE(39), 1,
      aux_sym_anonymous_leaf_repeat1,
    ACTIONS(187), 2,
      aux_sym_anonymous_leaf_token1,
      sym_escape_sequence,
  [788] = 4,
    ACTIONS(178), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_DQUOTE,
    STATE(37), 1,
      aux_sym_anonymous_leaf_repeat1,
    ACTIONS(191), 2,
      aux_sym_anonymous_leaf_token1,
      sym_escape_sequence,
  [802] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym__identifier,
    STATE(32), 1,
      sym_field_name,
  [812] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_COLON,
  [819] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 42,
  [SMALL_STATE(7)] = 71,
  [SMALL_STATE(8)] = 110,
  [SMALL_STATE(9)] = 132,
  [SMALL_STATE(10)] = 154,
  [SMALL_STATE(11)] = 176,
  [SMALL_STATE(12)] = 198,
  [SMALL_STATE(13)] = 220,
  [SMALL_STATE(14)] = 256,
  [SMALL_STATE(15)] = 278,
  [SMALL_STATE(16)] = 300,
  [SMALL_STATE(17)] = 334,
  [SMALL_STATE(18)] = 356,
  [SMALL_STATE(19)] = 378,
  [SMALL_STATE(20)] = 411,
  [SMALL_STATE(21)] = 444,
  [SMALL_STATE(22)] = 477,
  [SMALL_STATE(23)] = 510,
  [SMALL_STATE(24)] = 540,
  [SMALL_STATE(25)] = 561,
  [SMALL_STATE(26)] = 587,
  [SMALL_STATE(27)] = 605,
  [SMALL_STATE(28)] = 623,
  [SMALL_STATE(29)] = 640,
  [SMALL_STATE(30)] = 657,
  [SMALL_STATE(31)] = 673,
  [SMALL_STATE(32)] = 689,
  [SMALL_STATE(33)] = 705,
  [SMALL_STATE(34)] = 721,
  [SMALL_STATE(35)] = 737,
  [SMALL_STATE(36)] = 749,
  [SMALL_STATE(37)] = 760,
  [SMALL_STATE(38)] = 774,
  [SMALL_STATE(39)] = 788,
  [SMALL_STATE(40)] = 802,
  [SMALL_STATE(41)] = 812,
  [SMALL_STATE(42)] = 819,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_named_node_repeat1, 2), SHIFT_REPEAT(28),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_node_repeat1, 2), SHIFT_REPEAT(23),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_node_repeat1, 2), SHIFT_REPEAT(38),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_node_repeat1, 2), SHIFT_REPEAT(13),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_named_node_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_node_repeat1, 2), SHIFT_REPEAT(7),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_node_repeat1, 2), SHIFT_REPEAT(40),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_named_node_repeat1, 2), SHIFT_REPEAT(14),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 1, .production_id = 2),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pattern, 1, .production_id = 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternation, 3),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alternation, 3),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_node, 3),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wildcard_node, 3),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_node, 4),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_node, 4),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anonymous_leaf, 2),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_anonymous_leaf, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_node, 5),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_node, 5),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_node, 1),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wildcard_node, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_node, 3),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_node, 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2), SHIFT_REPEAT(23),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2), SHIFT_REPEAT(38),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2), SHIFT_REPEAT(13),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2), SHIFT_REPEAT(14),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 3),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anonymous_leaf, 3),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_anonymous_leaf, 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternation_repeat1, 2), SHIFT_REPEAT(23),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alternation_repeat1, 2),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternation_repeat1, 2), SHIFT_REPEAT(38),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternation_repeat1, 2), SHIFT_REPEAT(13),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternation_repeat1, 2), SHIFT_REPEAT(14),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 2, .production_id = 3),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pattern, 2, .production_id = 3),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 2, .production_id = 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pattern, 2, .production_id = 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 3, .production_id = 3),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pattern, 3, .production_id = 3),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_name, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child, 1, .production_id = 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child, 1, .production_id = 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_named_node_repeat1, 2),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negated_child, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negated_child, 2),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_name, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_name, 1),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child, 3, .production_id = 4),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child, 3, .production_id = 4),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1, .production_id = 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 1, .production_id = 1),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_anonymous_leaf_repeat1, 2),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_anonymous_leaf_repeat1, 2), SHIFT_REPEAT(37),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [197] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
