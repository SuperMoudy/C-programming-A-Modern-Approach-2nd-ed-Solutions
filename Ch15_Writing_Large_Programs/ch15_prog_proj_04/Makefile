# Compiler
CC = gcc
# Compiler Flags
CFLAGS = -O0 -g3 -Wall -c -fmessage-length=0 -std=c99
# Object File
OBJ = remind.o readline.o
# Program File (./PROG argvs)
PROG = remind

all: $(PROG)

$(PROG): $(OBJ)
	$(CC) $(OBJ) -o $@

remind.o: remind.c readline.h
	$(CC) $(CFLAGS) -c remind.c

readline.o: readline.c readline.h
	$(CC) $(CFLAGS) -c readline.c

clean:
	rm -rf $(OBJ) $(PROG)