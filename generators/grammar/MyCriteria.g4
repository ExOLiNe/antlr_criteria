/** Simple statically-typed programming language with functions and variables
 *  taken from "Language Implementation Patterns" book.
 */
grammar MyCriteria;

app: expr;

// Parser rules
expr: inArrayParser             # InArray
    | expr op=('*'|'/') expr    # MulDiv
    | expr op=('+'|'-') expr    # AddSub
    | (STR '(' (expr ',')* expr? ')') # FuncCall
    | expr STR expr             # InfixFuncCall
    | expr op=('>'|'<'|'<='|'>='|'=='|'!=') expr # comparison
    | expr '&&' expr            # And
    | expr '||' expr            # Or
    | '!' expr                  # NotExpr
    | '(' expr ')'              # ParenExpr
    | BOOL                      # Bool
    | numb                      # Number
    | objectAccessParser        # ObjectAccess
    | STR_LITERAL               # StrLiteral
    | NULL_T                      # Null
    ;

test_expr: inArrayParser
    | expr op=('*'|'/') expr
    | expr op=('+'|'-') expr
    | (STR '(' (expr ',')* expr ? ')')
    | expr STR expr
    | expr op=('>'|'<'|'<='|'>=' |'=='|'!=') expr
    | expr '&&' expr
    | expr '||' expr
    | EXCL expr
    | '(' expr ')'
    | BOOL
    | INT
    | objectAccessParser
    | STR_LITERAL
    | NULL_T
    ;

objectAccessParser: 'object' SQR_L + STR_LITERAL + SQR_R;
strOrNum: STR_LITERAL | numb;
numb: INT | (INT DOT INT);
inArrayParser: objectAccessParser (IN | EXCL IN) SQR_L strOrNum (COMMA strOrNum)* SQR_R;

// Lexer rules
SLASH: '/';
DOT: '.';
COMMA: ',';
SQR_L: '[';
SQR_R: ']';
IN: 'in';
BOOL: 'true' | 'false';
EXCL: '!';
INT: [0-9]+;
STR_LITERAL: '\'' STR '\'' | '"' STR '"';
STR: [a-zA-Z0-9]+;
NULL_T: 'null';

WS: [ \t\r\n]+ -> skip;