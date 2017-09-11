all: test

CFLAGS = -g -02

test: test.o mytoc.o

	gcc -o test test.o mytoc.o
	
clean: 

	rm -f *.o test test.exe