grammar Test;

INT: [0-9]+;
S_Q: '\'';
D_Q: '"';
CHOICE: CHARS_AND_NUM_LITERAL | ANY_SYMBOL_LITERAL;
CHARS_AND_NUM_LITERAL: S_Q STR S_Q | D_Q STR D_Q;
fragment STR: [a-zA-Z0-9]+;
ANY_SYMBOL_LITERAL: S_Q STRING S_Q | D_Q STRING D_Q;
fragment STRING : ( '\\' . | ~["\\] )*;


app: CHOICE;



WS: [ \t\r\n]+ -> skip;