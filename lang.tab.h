/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_INT = 258,
     T_PLUS = 259,
     T_MINUS = 260,
     T_MULTIPLY = 261,
     T_DIVIDE = 262,
     T_LEFTPAREN = 263,
     T_RIGHTPAREN = 264,
     T_ASSIGNMENT = 265,
     T_EQUALITY = 266,
     T_GT = 267,
     T_LT = 268,
     T_GTE = 269,
     T_LTE = 270,
     T_DIVIDE_ASSIGN = 271,
     T_BITAND = 272,
     T_AND = 273,
     T_OR = 274,
     T_TYPE_SPECIFIER = 275,
     T_PRECEDENCE1 = 276,
     T_PRECEDENCE2 = 277,
     T_IMPLICATION1 = 278,
     T_IMPLICATION2 = 279,
     T_CONTEXTUAL_REFERENCE = 280,
     T_SEMICOLON = 281,
     T_FACET = 282,
     T_BEGIN = 283,
     T_END = 284,
     T_INTERFACE = 285,
     T_IDENTIFIER = 286,
     T_OUTPUT = 287,
     T_IS = 288,
     T_INTEGER = 289,
     T_DISCRETE = 290,
     T_NEWLINE = 291
   };
#endif
/* Tokens.  */
#define T_INT 258
#define T_PLUS 259
#define T_MINUS 260
#define T_MULTIPLY 261
#define T_DIVIDE 262
#define T_LEFTPAREN 263
#define T_RIGHTPAREN 264
#define T_ASSIGNMENT 265
#define T_EQUALITY 266
#define T_GT 267
#define T_LT 268
#define T_GTE 269
#define T_LTE 270
#define T_DIVIDE_ASSIGN 271
#define T_BITAND 272
#define T_AND 273
#define T_OR 274
#define T_TYPE_SPECIFIER 275
#define T_PRECEDENCE1 276
#define T_PRECEDENCE2 277
#define T_IMPLICATION1 278
#define T_IMPLICATION2 279
#define T_CONTEXTUAL_REFERENCE 280
#define T_SEMICOLON 281
#define T_FACET 282
#define T_BEGIN 283
#define T_END 284
#define T_INTERFACE 285
#define T_IDENTIFIER 286
#define T_OUTPUT 287
#define T_IS 288
#define T_INTEGER 289
#define T_DISCRETE 290
#define T_NEWLINE 291




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

