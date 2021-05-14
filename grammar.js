module.exports = grammar({
  name: 'tsq',

  word: $ => $._identifier,

  rules: {
    query: $ => repeat($.pattern),
    pattern: $ => $._pattern,

    _pattern: $ => field('pattern', choice(
      $.named_node,
      $.wildcard_node,
    )),

    _identifier: $ => /[a-zA-Z0-9_-][a-zA-Z0-9.?!_-]*/,

    named_node: $ => seq(
      '(',
      $.node_name,
      repeat($.child),
      ')',
    ),

    node_name: $ => $._identifier,

    child: $ => seq(
      optional(seq($.field_name, ':')),
      $._pattern,
    ),

    field_name: $ => $._identifier,

    wildcard_node: $ => choice('_', seq('(', '_', ')')),
  }
});
