# Compiler
CC = gcc
# Compiler Flags
CFLAGS = -O0 -g3 -Wall -c -fmessage-length=0 -std=c99
# Object File
OBJ = qsort.o quicksort.o
# Program File (./PROG argvs)
PROG = qsort

all: $(PROG)

$(PROG): $(OBJ)
	$(CC) $(OBJ) -o $@

qsort.o: qsort.c quicksort.h
	$(CC) $(CFLAGS) -c qsort.c

quicksort.o: quicksort.c quicksort.h
	$(CC) $(CFLAGS) -c quicksort.c

clean:
	rm -rf $(OBJ) $(PROG)