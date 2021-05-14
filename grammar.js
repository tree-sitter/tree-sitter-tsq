module.exports = grammar({
  name: 'tsq',

  word: $ => $.node_name,

  rules: {
    query: $ => repeat($.pattern),
    pattern: $ => $._pattern,

    _pattern: $ => field('pattern', choice(
      $.named_node,
    )),

    node_name: $ => /[a-zA-Z0-9_-][a-zA-Z0-9.?!_-]*/,

    named_node: $ => seq(
      '(',
      $.node_name,
      repeat($.child),
      ')',
    ),

    child: $ => $._pattern,
  }
});
