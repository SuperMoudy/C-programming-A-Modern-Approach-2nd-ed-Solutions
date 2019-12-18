all: sum

sum: sum.o
	gcc sum.o -o sum

sum.o: sum.c
	gcc -c sum.c

clean:
	rm -rf *.o sum