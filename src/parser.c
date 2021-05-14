#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 31
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 16
#define ALIAS_COUNT 0
#define TOKEN_COUNT 6
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 4

enum {
  sym__identifier = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_COLON = 4,
  anon_sym__ = 5,
  sym_query = 6,
  sym_pattern = 7,
  sym__pattern = 8,
  sym_named_node = 9,
  sym_node_name = 10,
  sym_child = 11,
  sym_field_name = 12,
  sym_wildcard_node = 13,
  aux_sym_query_repeat1 = 14,
  aux_sym_named_node_repeat1 = 15,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__identifier] = "_identifier",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [anon_sym__] = "_",
  [sym_query] = "query",
  [sym_pattern] = "pattern",
  [sym__pattern] = "_pattern",
  [sym_named_node] = "named_node",
  [sym_node_name] = "node_name",
  [sym_child] = "child",
  [sym_field_name] = "field_name",
  [sym_wildcard_node] = "wildcard_node",
  [aux_sym_query_repeat1] = "query_repeat1",
  [aux_sym_named_node_repeat1] = "named_node_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__identifier] = sym__identifier,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym__] = anon_sym__,
  [sym_query] = sym_query,
  [sym_pattern] = sym_pattern,
  [sym__pattern] = sym__pattern,
  [sym_named_node] = sym_named_node,
  [sym_node_name] = sym_node_name,
  [sym_child] = sym_child,
  [sym_field_name] = sym_field_name,
  [sym_wildcard_node] = sym_wildcard_node,
  [aux_sym_query_repeat1] = aux_sym_query_repeat1,
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
  [sym_wildcard_node] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_query_repeat1] = {
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
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_pattern] = "pattern",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_pattern, 0, .inherited = true},
  [1] =
    {field_pattern, 0},
  [2] =
    {field_pattern, 2, .inherited = true},
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
      if (eof) ADVANCE(1);
      if (lookahead == '(') ADVANCE(3);
      if (lookahead == ')') ADVANCE(4);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '!' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_COLON);
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
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__identifier] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
  },
  [1] = {
    [sym_query] = STATE(30),
    [sym_pattern] = STATE(7),
    [sym__pattern] = STATE(23),
    [sym_named_node] = STATE(22),
    [sym_wildcard_node] = STATE(22),
    [aux_sym_query_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym__] = ACTIONS(7),
  },
  [2] = {
    [sym__pattern] = STATE(11),
    [sym_named_node] = STATE(14),
    [sym_child] = STATE(6),
    [sym_field_name] = STATE(28),
    [sym_wildcard_node] = STATE(14),
    [aux_sym_named_node_repeat1] = STATE(6),
    [sym__identifier] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(13),
    [anon_sym__] = ACTIONS(15),
  },
  [3] = {
    [sym__pattern] = STATE(11),
    [sym_named_node] = STATE(14),
    [sym_child] = STATE(5),
    [sym_field_name] = STATE(28),
    [sym_wildcard_node] = STATE(14),
    [aux_sym_named_node_repeat1] = STATE(5),
    [sym__identifier] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(17),
    [anon_sym__] = ACTIONS(15),
  },
  [4] = {
    [sym__pattern] = STATE(11),
    [sym_named_node] = STATE(14),
    [sym_child] = STATE(3),
    [sym_field_name] = STATE(28),
    [sym_wildcard_node] = STATE(14),
    [aux_sym_named_node_repeat1] = STATE(3),
    [sym__identifier] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(19),
    [anon_sym__] = ACTIONS(15),
  },
  [5] = {
    [sym__pattern] = STATE(11),
    [sym_named_node] = STATE(14),
    [sym_child] = STATE(5),
    [sym_field_name] = STATE(28),
    [sym_wildcard_node] = STATE(14),
    [aux_sym_named_node_repeat1] = STATE(5),
    [sym__identifier] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(24),
    [anon_sym_RPAREN] = ACTIONS(27),
    [anon_sym__] = ACTIONS(29),
  },
  [6] = {
    [sym__pattern] = STATE(11),
    [sym_named_node] = STATE(14),
    [sym_child] = STATE(5),
    [sym_field_name] = STATE(28),
    [sym_wildcard_node] = STATE(14),
    [aux_sym_named_node_repeat1] = STATE(5),
    [sym__identifier] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(32),
    [anon_sym__] = ACTIONS(15),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      anon_sym__,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      sym__pattern,
    STATE(8), 2,
      sym_pattern,
      aux_sym_query_repeat1,
    STATE(22), 2,
      sym_named_node,
      sym_wildcard_node,
  [21] = 6,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym__,
    STATE(23), 1,
      sym__pattern,
    STATE(8), 2,
      sym_pattern,
      aux_sym_query_repeat1,
    STATE(22), 2,
      sym_named_node,
      sym_wildcard_node,
  [42] = 4,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(44), 1,
      anon_sym__,
    STATE(10), 1,
      sym__pattern,
    STATE(14), 2,
      sym_named_node,
      sym_wildcard_node,
  [56] = 2,
    ACTIONS(46), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(48), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [65] = 2,
    ACTIONS(50), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(52), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [74] = 2,
    ACTIONS(54), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(56), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [83] = 2,
    ACTIONS(58), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(60), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [92] = 2,
    ACTIONS(62), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(64), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [101] = 2,
    ACTIONS(66), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(68), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [110] = 2,
    ACTIONS(70), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(72), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [119] = 2,
    ACTIONS(74), 2,
      sym__identifier,
      anon_sym__,
    ACTIONS(76), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [128] = 1,
    ACTIONS(68), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym__,
  [134] = 1,
    ACTIONS(72), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym__,
  [140] = 3,
    ACTIONS(78), 1,
      sym__identifier,
    ACTIONS(80), 1,
      anon_sym__,
    STATE(2), 1,
      sym_node_name,
  [150] = 1,
    ACTIONS(76), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym__,
  [156] = 1,
    ACTIONS(64), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym__,
  [162] = 1,
    ACTIONS(82), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym__,
  [168] = 1,
    ACTIONS(60), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym__,
  [174] = 3,
    ACTIONS(78), 1,
      sym__identifier,
    ACTIONS(84), 1,
      anon_sym__,
    STATE(4), 1,
      sym_node_name,
  [184] = 1,
    ACTIONS(86), 1,
      anon_sym_RPAREN,
  [188] = 1,
    ACTIONS(88), 1,
      anon_sym_COLON,
  [192] = 1,
    ACTIONS(90), 1,
      anon_sym_COLON,
  [196] = 1,
    ACTIONS(92), 1,
      anon_sym_RPAREN,
  [200] = 1,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 21,
  [SMALL_STATE(9)] = 42,
  [SMALL_STATE(10)] = 56,
  [SMALL_STATE(11)] = 65,
  [SMALL_STATE(12)] = 74,
  [SMALL_STATE(13)] = 83,
  [SMALL_STATE(14)] = 92,
  [SMALL_STATE(15)] = 101,
  [SMALL_STATE(16)] = 110,
  [SMALL_STATE(17)] = 119,
  [SMALL_STATE(18)] = 128,
  [SMALL_STATE(19)] = 134,
  [SMALL_STATE(20)] = 140,
  [SMALL_STATE(21)] = 150,
  [SMALL_STATE(22)] = 156,
  [SMALL_STATE(23)] = 162,
  [SMALL_STATE(24)] = 168,
  [SMALL_STATE(25)] = 174,
  [SMALL_STATE(26)] = 184,
  [SMALL_STATE(27)] = 188,
  [SMALL_STATE(28)] = 192,
  [SMALL_STATE(29)] = 196,
  [SMALL_STATE(30)] = 200,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_named_node_repeat1, 2), SHIFT_REPEAT(27),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_node_repeat1, 2), SHIFT_REPEAT(25),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_named_node_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_named_node_repeat1, 2), SHIFT_REPEAT(13),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2), SHIFT_REPEAT(20),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2), SHIFT_REPEAT(24),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child, 3, .production_id = 3),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child, 3, .production_id = 3),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_child, 1, .production_id = 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_child, 1, .production_id = 1),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_name, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_name, 1),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wildcard_node, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_node, 1),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pattern, 1, .production_id = 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 1, .production_id = 2),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wildcard_node, 3),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_node, 3),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_node, 3),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_node, 3),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_node, 4),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_node, 4),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1, .production_id = 1),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [94] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
