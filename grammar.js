module.exports = grammar({
  name: 'tsq',

  extras: $ => [/\s/, $.comment],
  word: $ => $._identifier,

  rules: {
    query: $ => repeat($.pattern),
    pattern: $ => $._pattern,

    comment: $ => token(seq(';', /.*/)),

    _pattern: $ => field('pattern', choice(
      $.anonymous_leaf,
      $.named_node,
      $.wildcard_node,
    )),

    anonymous_leaf: $ => seq(
      '"',
      repeat(choice(
        token.immediate(prec(1, /[^"\n\\]+/)),
        $.escape_sequence
      )),
      '"',
    ),

    escape_sequence: $ => token.immediate(seq(
      '\\',
      choice('n', 'r', 't', '0', '\\'),
    )),

    _identifier: $ => /[a-zA-Z0-9_-][a-zA-Z0-9.?!_-]*/,

    named_node: $ => seq(
      '(',
      $.node_name,
      repeat(choice($.child, $.negated_child)),
      ')',
    ),

    node_name: $ => $._identifier,

    child: $ => seq(
      optional(seq($.field_name, ':')),
      $._pattern,
    ),

    field_name: $ => $._identifier,

    negated_child: $ => seq('!', $.field_name),

    wildcard_node: $ => choice('_', seq('(', '_', ')')),
  }
});
