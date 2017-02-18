all: lang

lang.tab.c lang.tab.h:	lang.y
	bison -d lang.y

lex.yy.c: lang.l lang.tab.h
	flex lang.l

lang: lex.yy.c lang.tab.c lang.tab.h
	g++ -o lang lang.tab.c lex.yy.c

clean:
	rm lang lang.tab.c lex.yy.c lang.tab.h
