/** Simple statically-typed programming language with functions and variables
 *  taken from "Language Implementation Patterns" book.
 */
grammar MyCriteria;

app: (statement)* expr;

// Lexer rules
SLASH: '/';
DOT: '.';
COMMA: ',';
SEMICOLON: ';';
SQR_L: '[';
SQR_R: ']';
IN: 'in';
BOOL: 'true' | 'false';
EXCL: '!';
INT: [0-9]+;
STR_LITERAL: S_Q STR S_Q | D_Q STR D_Q;
STR: [a-zA-Z0-9]+;
NULL_T: 'null';
S_Q: '\'';
D_Q: '"';
BUCK: '$';
EQUALS: '=';

WS: [ \t\r\n]+ -> skip;

statement
    : identifierDefinition SEMICOLON;

// Parser rules
expr
    : identifierAccess          # IdAccess
    | inArrayParser             # InArray
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

identifierDefinition: BUCK STR EQUALS expr;
identifierAccess: BUCK STR;
jsonPointerInner: SLASH? STR (SLASH STR)* SLASH?;
jsonPointer: (S_Q jsonPointerInner S_Q) | (D_Q jsonPointerInner D_Q) | STR_LITERAL;
objectAccessParser: 'object' SQR_L + jsonPointer + SQR_R;
strOrNum: STR_LITERAL | numb;
numb: INT | (INT DOT INT);
inArrayParser: objectAccessParser (IN | EXCL IN) SQR_L strOrNum (COMMA strOrNum)* SQR_R;