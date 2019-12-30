# Compiler
CC = gcc
# Compiler Flags
CFLAGS = -O0 -g3 -Wall -c -fmessage-length=0 -std=c99
# Object File
OBJ = main.o stack.o
# Program File (./PROG argvs)
PROG = rpn

all: $(PROG)

$(PROG): $(OBJ)
	$(CC) $(OBJ) -o $@

main.o: main.c stack.h
	$(CC) $(CFLAGS) -c main.c

stack.o: stack.c stack.h
	$(CC) $(CFLAGS) -c stack.c

clean:
	rm -rf $(OBJ) $(PROG)