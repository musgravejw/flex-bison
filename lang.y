%{
  #include <stdio.h>
  #include <stdlib.h>
  extern int yylex();
  extern int yyparse();
  extern FILE* yyin;
  void yyerror(const char* s);
%}

%token
  T_INT
  T_PLUS
  T_MINUS
  T_MULTIPLY
  T_DIVIDE
  T_LEFTPAREN
  T_RIGHTPAREN
  T_ASSIGNMENT
  T_EQUALITY
  T_GT
  T_LT
  T_GTE
  T_LTE
  T_DIVIDE_ASSIGN
  T_BITAND
  T_AND
  T_OR
  T_TYPE_SPECIFIER
  T_PRECEDENCE1
  T_PRECEDENCE2
  T_IMPLICATION1
  T_IMPLICATION2
  T_CONTEXTUAL_REFERENCE
  T_SEMICOLON
  T_FACET
  T_BEGIN
  T_END
  T_INTERFACE
  T_IDENTIFIER
  T_OUTPUT
  T_IS
  T_INTEGER
  T_DISCRETE
  T_NEWLINE
%%

facet :
      T_FACET T_IDENTIFIER parameter_list T_TYPE_SPECIFIER domain
        variable
      T_BEGIN
        term
      T_END T_FACET T_IDENTIFIER T_SEMICOLON
      ;

parameter_list :
               T_LEFTPAREN T_OUTPUT T_IDENTIFIER T_TYPE_SPECIFIER type T_RIGHTPAREN
               ;

domain :
       T_DISCRETE
       ;

variable :
         T_IDENTIFIER T_TYPE_SPECIFIER type T_SEMICOLON
         ;

term :
     T_IDENTIFIER T_CONTEXTUAL_REFERENCE T_LEFTPAREN expression T_RIGHTPAREN T_ASSIGNMENT expression T_SEMICOLON
     ;

expression :
           T_IDENTIFIER T_PLUS T_INT

type :
     T_INTEGER
     ;
%%

int main(int argc, char* argv[]) {
	yyin = fopen(argv[1], "r");

	while(!feof(yyin)) {
		yyparse();
	}

	return 0;
}

void yyerror(const char* s) {
	fprintf(stderr, "Parse error: %s\n", s);
	exit(1);
}
