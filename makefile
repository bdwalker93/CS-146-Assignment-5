all: parse.tab.c lex.yy.c 
	gcc parse.tab.c lex.yy.c -o parser

lex.yy.c: parse.l
	flex parse.l; 

parse.tab.c: parse.y
	bison -d parse.y; 

#run: parse.c parse.tab.c lex.yy.c
#	parser

clean:
	rm -f parser parse.tab.h parse.tab.c lex.yy.c
