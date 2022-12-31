let i = token.immediate;

module.exports = grammar({
    name: "erde",

    externals: $ => [
        $.string_escaped_char,
    ],

    extras: $ => [
        $.comment,
        /\s/,
    ],

    supertypes: $ => [
        $.value,
    ],

    rules: {
        program: $ => repeat(
            choice(
                $.variable_definition,
                $.function_invocation,
            ),
        ),

        identifier: _ => /[\w_]+/,

        // TODO: $.expression

        comment: _ => seq(
            "--",
            i(/[^\n]*/),
        ),

        boolean: $ => choice(
            "true",
            "false",
        ),

        number: $ => /\d+/,
        nil: _ => "nil",

        verbatim_string: $ => seq(
            "'",
            alias(repeat(
                choice(
                    $.string_escaped_char,
                    /[^\n'\\]+/,
                ),
            ), $.string_content),
            i("'"),
        ),

        string_interpolation: $ => seq(
            "{",
            $.identifier, // TODO: This can be any expression
            i("}"),
        ),

        string: $ => seq(
            '"',
            alias(repeat(
                choice(
                    $.string_escaped_char,
                    $.string_interpolation,
                    /[^\n"\\{]+/,
                ),
            ), $.string_content),
            i('"'),
        ),

        value: $ => choice(
            $.boolean,
            $.number,
            $.nil,
            $.verbatim_string,
            $.string,
        ),

        variable_scope: $ => choice("local", "global"),
        variable_definition: $ => seq(
            $.variable_scope,
            alias($.identifier, $.variable_name),
            optional(
                seq(
                    "=",
                    field("value", choice($.value, $.function_invocation)),
                ),
            ),
        ),

        function_invocation: $ => seq(
            $.identifier,
            "(",
            optional(
                seq(
                    field("parameter", $.value),
                    repeat(
                        seq(
                            ",",
                            field("parameter", $.value),
                        ),
                    ),
                ),
            ),
            optional(","),
            ")",
        )
    }
});