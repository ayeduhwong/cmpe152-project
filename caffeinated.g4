grammar caffeinated; // language is similar to c/c++ format but coffee/boba themed!

@header {
#include "wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;
}


program: header mainBlock;
header : PROGRAM ID ';';
mainBlock : declarations compoundStmt;

declarations : VAR ':' declList ';' ;
declList     : decl ( ';' decl )* ;
decl         : varList ':' typeId ;
varList      : varId ( ',' varId )* ;
varId        : ID ;
typeId       : Type_ID ;

compoundStmt : ORDER stmtList PICKUP;

stmt : compoundStmt 
		| assignmentStmt 
		| if_statement 
		| while_loop
		| ;
					
stmtList : stmt (';' stmt) *;

assignmentStmt : variable '=' expr; 

variable : ID;

expr locals [TypeSpec *type = nullptr]
		: number 				#numberExpr 
		| true_false 			#boolExpr
		// | letter 				#charExpr
		| variable 				#variableExpr
		| expr mulDivOp expr 	#mulDivExpr
		| expr addSubOp expr 	#addSubExpr 
		| expr rel_op expr 		#relOpExpr
		;

number locals [TypeSpec *type = nullptr] : INTEGER #integerConst;
// letter locals [TypeSpec *type = nullptr] : CHARACTER #charConst;
true_false locals [TypeSpec *type = nullptr] : BOOLEAN #boolConst;
	
	
mulDivOp : Mult | Div ;
addSubOp : Add | Sub ;

rel_op 
	: Less_than 	
	| Greater_than 
	| Equals 
	| Gt_EQ
	| Lt_EQ 		
	| Not_EQ 
	;

if_statement : IF '(' expr ')' START stmtList COMPLETE;

while_loop : WHILE '(' expr ')' START stmtList COMPLETE;


PROGRAM : 'customer';
FUNCTION: 'MENU';
VAR: 'toppings';
ORDER: 'ORDER';
PICKUP: 'PICKUP';


IF: 'milk';
// ELSE: 'nondairy';
WHILE: 'brew';

START : 'START';
COMPLETE : 'COMPLETE';
Type_ID: INTEGER_TYPE | BOOLEAN_TYPE // | CHARACTER_TYPE;
;

INTEGER_TYPE : 'boba';
BOOLEAN_TYPE : 'ice';
// CHARACTER_TYPE : 'sweet';

ID : [a-zA-Z][a-zA-Z0-9]*;
INTEGER : [0-9]+ ; 			// boba
BOOLEAN : [0-1];
CHARACTER: [a-zA-Z] ; 		// sweet

//Mathematical Operations
Add : '+';
Sub : '-';
Mult : '*';
Div: '/';

//Relational Operators
Less_than: '<';
Greater_than: '>';
Equals: '==';
Gt_EQ: '>=';
Lt_EQ: '<=';
Not_EQ: '!=';

NEWLINE : '\r'? '\n' -> skip  ;
WS      : [ \t]+ -> skip ;
BlockComment : '/*' .*? '*/' -> skip ;
LineComment : '//' ~ [\r\n]* -> skip ;

