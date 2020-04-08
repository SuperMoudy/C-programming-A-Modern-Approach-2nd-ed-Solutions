# Compiler
CC = gcc
# Compiler Flags
CFLAGS = -O0 -g3 -Wall -c -fmessage-length=0
# Object File
OBJ = inventory.o readline.o
# Program File (./PROG argvs)
PROG = inventory

all: $(PROG)

$(PROG): $(OBJ)
	$(CC) $(OBJ) -o $@

inventory.o: inventory.c readline.h
	$(CC) $(CFLAGS) -c inventory.c

readline.o: readline.c readline.h
	$(CC) $(CFLAGS) -c readline.c

clean:
	rm -rf $(OBJ) $(PROG)