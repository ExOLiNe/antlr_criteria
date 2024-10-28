/** Simple statically-typed programming language with functions and variables
 *  taken from "Language Implementation Patterns" book.
 */
grammar MyCriteria;

app: (statement)* expr;

// Lexer rules
IMPORT: 'import';
SLASH: '/';
DOT: '.';
COMMA: ',';
SEMICOLON: ';';
SQR_L: '[';
SQR_R: ']';
IN: 'in';
BOOL: 'true' | 'false';
EXCL: '!';
NULL_T: 'null';
BUCK: '$';
EQUALS: '=';
OBJECT: 'object';
INT: [0-9]+;
IDENTIFIER: [a-zA-Z0-9_]+;
//STR: [a-zA-Z0-9]+;
STR_LITERAL: S_Q STRING S_Q | D_Q STRING D_Q;
fragment S_Q: '\'';
fragment D_Q: '"';
fragment STRING : ( '\\' . | ~['"\\] )*;
//fragment STRING : [^'"\r\n]+ ;

WS: [ \t\r\n]+ -> skip;

statements: statement+;

statement
    : importStatement SEMICOLON
    | identifierDefinition SEMICOLON
    ;

// Parser rules
expr
    : inArrayParser                               # InArray
    | expr op=('*'|'/') expr                      # MulDiv
    | expr op=('+'|'-') expr                      # AddSub
    | (IDENTIFIER '(' (expr ',')* expr? ')')      # FuncCall
    | expr IDENTIFIER expr                        # InfixFuncCall
    | expr EXCL IDENTIFIER expr                        # InfixFuncCallNot
    | expr op=('>'|'<'|'<='|'>='|'=='|'!=') expr  # comparison
    | expr '&&' expr                              # And
    | expr '||' expr                              # Or
    | '!' expr                                    # NotExpr
    | '(' expr ')'                                # ParenExpr
    | BOOL                                        # Bool
    | numb                                        # Number
    | NULL_T                                      # Null
    | STR_LITERAL                                 # StrLiteral
    | identifierAccess                            # IdAccess
    | objectAccessParser                          # ObjectAccess
    ;
//test_expr: inArrayParser
//    | expr op=('*'|'/') expr
//    | expr op=('+'|'-') expr
//    | (STR '(' (expr ',')* expr ? ')')
//    | expr STR expr
//    | expr op=('>'|'<'|'<='|'>=' |'=='|'!=') expr
//    | expr '&&' expr
//    | expr '||' expr
//    | EXCL expr
//    | '(' expr ')'
//    | BOOL
//    | INT
//    | objectAccessParser
//    | STR_LITERAL
//    | NULL_T
//    ;

//jsonPointer: (S_Q jsonPointerInner S_Q) | (D_Q jsonPointerInner D_Q);
//jsonPointerInner: SLASH? STR_LITERAL (SLASH STR_LITERAL)* SLASH?;
objectAccessParser: OBJECT SQR_L + STR_LITERAL + SQR_R;
identifierAccess: BUCK IDENTIFIER;
importStatement: IMPORT IDENTIFIER;
identifierDefinitions: (identifierDefinition SEMICOLON)*;
identifierDefinition: BUCK IDENTIFIER EQUALS expr;
strOrNum: STR_LITERAL | numb;
inArrayParser: objectAccessParser (IN | EXCL IN) SQR_L strOrNum (COMMA strOrNum)* SQR_R;
numb: INT | (INT DOT INT);
