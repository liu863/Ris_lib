
cc = gcc

all: hex2char

hex2char: hex2char.o
	$(cc) -o hex2char hex2char.o

hex2char.o: hex2char.c
	$(cc) -c hex2char.c

clean:
	rm hex2char.o hex2char
