/** Simple statically-typed programming language with functions and variables
 *  taken from "Language Implementation Patterns" book.
 */
grammar MyCriteria;

// Lexer rules
IMPORT: 'import';
SLASH: '/';
DOT: '.';
COMMA: ',';
SEMICOLON: ';';
ARROW: '->';
SQR_L: '[';
SQR_R: ']';
PAR_L: '(';
PAR_R: ')';
CUR_L: '{';
CUR_R: '}';
GTE: '>=';
LTE: '<=';
GT: '>';
LT: '<';
EQUALS: '==';
NOT_EQUALS: '!=';
AND: '&&';
OR: '||';
TRUE: 'true';
FALSE: 'false';
EXCL: '!';
NULL_T: 'null';
BUCK: '$';
ASSIGN: '=';
OBJECT: 'object';
MUL: '*';
ADD: '+';
SUB: '-';
INT: [0-9]+;
IDENTIFIER: [a-zA-Z0-9_]+;
STR_LITERAL: S_Q STRING S_Q | D_Q STRING D_Q;
fragment S_Q: '\'';
fragment D_Q: '"';
fragment STRING : ( '\\' . | ~['"\\] )*;

WS: [ \t\r\n]+ -> skip;

app: (statement)* expr;

statements: statement+;

statement
    : importStatement SEMICOLON
    | identifierDefinition SEMICOLON
    ;

expr
    :
      SQR_L expr (COMMA expr)* SQR_R                               # Array
    | expr op=(MUL|SLASH) expr                                     # MulDiv
    | expr op=(ADD|SUB) expr                                       # AddSub
    | CUR_L lambdaParams expr CUR_R                                # Lambda
    | expr DOT IDENTIFIER funcPars                                 # MethodCall
    | IDENTIFIER funcPars                                          # FuncCall
    | expr IDENTIFIER expr                                         # InfixFuncCall
    | expr EXCL IDENTIFIER expr                                    # InfixFuncCallNot
    | expr op=(GT|GTE|LT|LTE|EQUALS|NOT_EQUALS) expr               # comparison
    | expr AND expr                                                # And
    | expr OR expr                                                 # Or
    | EXCL expr                                                    # NotExpr
    | PAR_L expr PAR_R                                             # ParenExpr
    | (TRUE | FALSE)                                               # Bool
    | numb                                                         # Number
    | NULL_T                                                       # Null
    | STR_LITERAL                                                  # StrLiteral
    | BUCK IDENTIFIER                                              # IdAccess
    | objectAccessParser                                           # ObjectAccess
    ;

lambdaParams: PAR_L (IDENTIFIER COMMA)* IDENTIFIER? PAR_R ARROW;
funcPars: PAR_L (expr COMMA)* expr? PAR_R;
objectAccessParser: OBJECT SQR_L + STR_LITERAL + SQR_R;
importStatement: IMPORT IDENTIFIER;
identifierDefinitions: (identifierDefinition SEMICOLON)*;
identifierDefinition: BUCK IDENTIFIER ASSIGN expr;
strOrNum: STR_LITERAL | numb;
numb: INT | (INT DOT INT);
