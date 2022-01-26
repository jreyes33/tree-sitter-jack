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
        '}'
      ),
    _class_var_declaration: $ =>
      choice($.static_declaration, $.field_declaration),
    static_declaration: $ =>
      seq('static', $.type, commaSep1($.identifier), ';'),
    field_declaration: $ => seq('field', $.type, commaSep1($.identifier), ';'),
    _subroutine_declaration: $ =>
      choice($.constructor_declaration, $.function_declaration), // TODO: add other types
    constructor_declaration: $ => seq('constructor', $._subroutine),
    function_declaration: $ => seq('function', $._subroutine),
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
      seq(choice($.let_statement, $.do_statement, $.return_statement), ';'), // TODO: add other statements
    let_statement: $ => seq('let', $.identifier, '=', $.expression),
    do_statement: $ => seq('do', $.subroutine_call),
    return_statement: $ => seq('return', optional($.expression)),
    subroutine_call: $ => seq($.member_expression, $.expression_list),
    member_expression: $ => seq($.identifier, '.', $.identifier), // TODO: support more nesting
    expression_list: $ => seq('(', commaSep(seq($.expression)), ')'),
    expression: $ => $.term, // TODO: add (op term)*
    term: $ =>
      choice(
        $.integer_constant,
        $.string_constant,
        $.keyword_constant,
        $.identifier
      ), // TODO: add others
    string_constant: $ => seq('"', /[^\n"]*/, '"'),
    integer_constant: $ => /\d/,
    keyword_constant: $ => choice('true', 'false', 'this'), // TODO: add others
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
