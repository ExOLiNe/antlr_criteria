/** Simple statically-typed programming language with functions and variables
 *  taken from "Language Implementation Patterns" book.
 */
grammar MyCriteria;

app: expr;

// Parser rules
expr: expr op=('*'|'/') expr    # MulDiv
    | expr op=('+'|'-') expr    # AddSub
    | (STR '(' (expr ',')* expr? ')') # FuncCall
    | expr STR expr             # InfixFuncCall
    | expr op=('>'|'<'|'<='|'>='|'=='|'!=') expr # comparison
    | expr op=('&&'|'||') expr  # AndOr
    | '!' expr                  # NotExpr
    | '(' expr ')'              # ParenExpr
    | BOOL                      # Bool
    | INT                       # Int
    | objectAccessParser        # ObjectAccess
    | STR_LITERAL               # StrLiteral
    | NULL_T                      # Null
    ;

objectAccessParser: 'object' '[' + STR_LITERAL + ']';

// Lexer rules
BOOL: 'true' | 'false';
INT: [0-9]+;
STR_LITERAL: '\'' STR '\'' | '"' STR '"';
STR: [a-zA-Z]+;
NULL_T: 'null';

WS: [ \t\r\n]+ -> skip;