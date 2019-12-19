# Compiler
CC = x86_64-w64-mingw32-gcc
# Compiler Flags
CFLAGS = -O0 -g3 -Wall -c -fmessage-length=0 -std=c99
# Source File
SRC = planet.c
# Object File
OBJ = planet.o
# Program File (./PROG argvs)
PROG = planet

all: $(PROG)

$(PROG): $(OBJ)
	$(CC) $(OBJ) -o $@

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)

clean:
	rm -rf $(OBJ) $(PROG)