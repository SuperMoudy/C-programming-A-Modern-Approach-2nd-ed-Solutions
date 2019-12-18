all: reverse

reverse: reverse.o
	gcc reverse.o -o reverse

reverse.o: reverse.c
	gcc -c reverse.c

clean:
	rm -rf *.o reverse