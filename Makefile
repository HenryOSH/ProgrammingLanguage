# Makefile for Expr Evaluation in C++
PROG=expr.exe
G4=Expr.g4

ANTLR4=java -jar /usr/local/lib/antlr-complete.jar -Dlanguage=Cpp -o Expr
ANTLR4_RUNTIME=/usr/local/include/antlr4-runtime
CFLAGS=-I. -I$(ANTLR4_RUNTIME)
LIBS=-lantlr4-runtime

OBJ=ExprMain.o Expr/ExprBaseListener.o Expr/ExprLexer.o Expr/ExprListener.o Expr/ExprParser.o

default: antlr $(PROG)

$(PROG): $(OBJ)
	$(CXX) -o $@ $^ $(CFLAGS) $(LIBS)

%.o:    %.cpp
	$(CXX) -c -o $@ $< $(CFLAGS)

antlr: $(G4)
	$(ANTLR4) $<

.PHONY: clean

clean:
	rm -f $(PROG) *.o Expr/*.o *~ core

wipe:   clean
	rm -rf Expr
