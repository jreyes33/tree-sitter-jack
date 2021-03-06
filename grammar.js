module.exports = grammar({
  name: 'jack',

  extras: $ => [/\s/, $.comment],

  rules: {
    class_declaration: $ => seq('class', $.identifier, $.class_body),
    class_body: $ =>
      seq(
        '{',
        repeat($._class_var_declaration),
        repeat($._subroutine_declaration),
        '}',
      ),
    _class_var_declaration: $ =>
      choice($.static_declaration, $.field_declaration),
    static_declaration: $ =>
      seq('static', $.type, commaSep1($.identifier), ';'),
    field_declaration: $ => seq('field', $.type, commaSep1($.identifier), ';'),
    _subroutine_declaration: $ =>
      choice(
        $.constructor_declaration,
        $.function_declaration,
        $.method_declaration,
      ),
    constructor_declaration: $ => seq('constructor', $._subroutine),
    function_declaration: $ => seq('function', $._subroutine),
    method_declaration: $ => seq('method', $._subroutine),
    _subroutine: $ =>
      seq($.return_type, $.identifier, $.parameter_list, $.subroutine_body),
    return_type: $ => choice('void', $.type),
    type: $ => choice('int', 'char', 'boolean', $.identifier),
    parameter_list: $ => seq('(', commaSep($.parameter), ')'),
    parameter: $ => seq($.type, $.identifier),
    subroutine_body: $ =>
      seq('{', repeat($.var_declaration), optional($.statements), '}'),
    var_declaration: $ => seq('var', $.type, commaSep1($.identifier), ';'),
    statements: $ => repeat1($._statement),
    _statement: $ =>
      choice(
        $.let_statement,
        $.if_statement,
        $.while_statement,
        $.do_statement,
        $.return_statement,
      ),
    let_statement: $ =>
      seq('let', $.identifier, optional($._subscript), '=', $.expression, ';'),
    if_statement: $ =>
      seq(
        'if',
        '(',
        $.expression,
        ')',
        '{',
        optional($.statements),
        '}',
        optional($._else),
      ),
    _else: $ => seq('else', '{', optional($.statements), '}'),
    while_statement: $ =>
      seq('while', '(', $.expression, ')', '{', optional($.statements), '}'),
    do_statement: $ => seq('do', $.subroutine_call, ';'),
    return_statement: $ => seq('return', optional($.expression), ';'),
    subroutine_call: $ => seq($._callee, $.expression_list),
    _callee: $ => choice($.identifier, $.member_expression),
    member_expression: $ => seq($.identifier, '.', $.identifier),
    expression_list: $ => seq('(', commaSep(seq($.expression)), ')'),
    expression: $ => seq($.term, repeat(seq($.op, $.term))),
    op: $ => choice('+', '-', '*', '/', '&', '|', '<', '>', '='),
    unary_op: $ => choice('-', '~'),
    term: $ =>
      choice(
        $.integer_constant,
        $.string_constant,
        $.keyword_constant,
        $.identifier,
        seq($.identifier, $._subscript),
        $.subroutine_call,
        seq('(', $.expression, ')'),
        seq($.unary_op, $.term),
      ),
    _subscript: $ => seq('[', $.expression, ']'),
    string_constant: $ => seq('"', /[^\n"]*/, '"'),
    integer_constant: $ => /\d+/,
    keyword_constant: $ => choice('true', 'false', 'null', 'this'),
    identifier: $ => /[A-Za-z_]\w*/,
    // From: https://github.com/tree-sitter/tree-sitter-javascript/blob/v0.19.0/grammar.js#L887
    comment: $ =>
      token(
        choice(seq('//', /.*/), seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/')),
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
