module.exports = grammar({
  name: 'tsq',

  extras: $ => [/\s/, $.comment],
  word: $ => $._identifier,

  rules: {
    query: $ => repeat($.pattern),
    pattern: $ => $._pattern,

    comment: $ => token(seq(';', /.*/)),

    _pattern: $ => seq(
      field('pattern', choice(
        $.alternation,
        $.anonymous_leaf,
        $.group,
        $.named_node,
        $.wildcard_node,
      )),
      optional(field('quantifier', $._quantifier)),
      optional($.capture),
    ),

    _quantifier: $ => choice(
      $.one_or_more,
      $.zero_or_one,
      $.zero_or_more,
    ),
    one_or_more: $ => '+',
    zero_or_one: $ => '?',
    zero_or_more: $ => '*',

    capture: $ => /@[a-zA-Z0-9_-][a-zA-Z0-9.?!_-]*/,

    alternation: $ => seq('[', repeat1($.choice), ']'),
    choice: $ => $._pattern,

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

    group: $ => seq('(', repeat1($.pattern), ')'),

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

    wildcard_node: $ => prec.right(choice('_', seq('(', '_', ')'))),
  }
});
