# My first makefile
 
all: READER
 
READER: reader_writer.o ANIMACAO.o
    gcc -o reader_writer.o ANIMACAO.o -pthread
 
reader_writer.o: reader_writer.c ANIMACAO.h
    gcc -o reader_writer.o reader_writer.c -c -W -Wall -ansi -pedantic -pthread
 
ANIMACAO.o: ANIMACAO.c ANIMACAO.h
    gcc -o ANIMACAO.o ANIMACAO.c -c -W -Wall -ansi -pedantic -pthread
 
clean:
    rm -rf *.o *~ READER