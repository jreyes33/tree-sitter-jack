module.exports = grammar({
  name: 'jack',

  extras: $ => [/\s/, $.comment],

  rules: {
    class_declaration: $ => seq('class', $.identifier, $.class_body),
    class_body: $ => seq('{', repeat($._subroutine_declaration), '}'), // TODO: add class variables
    _subroutine_declaration: $ => choice($.function_declaration), // TODO: add other types
    function_declaration: $ =>
      seq(
        'function',
        $.return_type,
        $.identifier,
        $.parameter_list,
        $.subroutine_body
      ),
    return_type: $ => choice('void', $.type),
    type: $ => choice('int', 'char', 'boolean', $.identifier),
    parameter_list: $ => seq('(', commaSep(seq($.type, $.identifier)), ')'),
    subroutine_body: $ => seq('{', optional($.statements), '}'), // TODO: add variable declarations
    statements: $ => repeat1($._statement),
    _statement: $ => choice($.do_statement, $.return_statement), // TODO: add other statements
    do_statement: $ => seq('do', $.subroutine_call, ';'),
    return_statement: $ => seq('return', optional($.expression), ';'),
    subroutine_call: $ => seq($.member_expression, $.expression_list),
    member_expression: $ => seq($.identifier, '.', $.identifier), // TODO: support more nesting
    expression_list: $ => seq('(', commaSep(seq($.expression)), ')'),
    expression: $ => $.term, // TODO: add (op term)*
    term: $ => choice($.string_constant), // TODO: add others
    string_constant: $ => seq('"', /[^\n"]*/, '"'),
    identifier: $ => /[A-Za-z_]\w*/,
    // From: https://github.com/tree-sitter/tree-sitter-javascript/blob/v0.19.0/grammar.js#L887
    comment: $ =>
      token(
        choice(seq('//', /.*/), seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/'))
      ),
  },
});

// From: https://github.com/tree-sitter/tree-sitter-javascript/blob/v0.19.0/grammar.js#L1117
function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)));
}

function commaSep(rule) {
  return optional(commaSep1(rule));
}
