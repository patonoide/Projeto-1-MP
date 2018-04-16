IDIR =include
CC=g++
CFLAGS=   -fprofile-arcs -ftest-coverage   -I$(IDIR)


ODIR=include
LIBS=-lm

_DEPS = cabecalho.h arvore.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = funcoes.o main.o arvore.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -fprofile-arcs -ftest-coverage -c -o $@ $< $(CFLAGS)

projetomp: $(OBJ)
	g++ -fprofile-arcs -ftest-coverage  -o  $ $@ $^   $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~
