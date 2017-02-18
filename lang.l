%option noyywrap

%{
  #include <stdio.h>
  #define YY_DECL int yylex()
  #include "lang.tab.h"
%}

%%
[ \t];
[\n]
[0-9]+  {return T_INT;}
[a-zA-Z][a-zA-Z0-9] {return T_IDENTIFIER;}
"+"  {return T_PLUS;}
"-"  {return T_MINUS;}
"*"  {return T_MULTIPLY;}
"/"  {return T_DIVIDE;}
"("  {return T_LEFTPAREN;}
")"  {return T_RIGHTPAREN;}
"="  {return T_ASSIGNMENT;}
"==" {return T_EQUALITY;}
">" {return T_GT;}
"<" {return T_LT;}
">=" {return T_GTE;}
"<=" {return T_LTE;}
"/=" {return T_DIVIDE_ASSIGN;}
"&"  {return T_BITAND;}
"&&"  {return T_AND;}
"||"  {return T_OR;}
"::" {return T_TYPE_SPECIFIER;}
">>>" {return T_PRECEDENCE1;}
"=>>" {return T_PRECEDENCE2;}
"=>" {return T_IMPLICATION1;}
"<=" {return T_IMPLICATION2;}
"@" {return T_CONTEXTUAL_REFERENCE;}
";" {return T_SEMICOLON;}
"facet" {return T_FACET;}
"begin" {return T_BEGIN;}
"end" {return T_END;}
"interface" {return T_INTERFACE;}
"output" {return T_OUTPUT;}
"is" {return T_IS;}
"integer" {return T_INTEGER;}
"discrete" {return T_DISCRETE;}
%%
