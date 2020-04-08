# Compiler
CC = gcc
# Compiler Flags
CFLAGS = -O0 -g3 -Wall -c -fmessage-length=0 -std=c99
# Object File
OBJ = justify.o word.o line.o
# Program File (./PROG argvs)
PROG = justify

all: $(PROG)

$(PROG): $(OBJ)
	$(CC) $(OBJ) -o $@

justify.o: justify.c word.h line.h
	$(CC) $(CFLAGS) -c justify.c

word.o: word.c word.h
	$(CC) $(CFLAGS) -c word.c

line.o: line.c line.h
	$(CC) $(CFLAGS) -c line.c

clean:
	rm -rf $(OBJ) $(PROG)