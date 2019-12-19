# Compiler
CC = x86_64-w64-mingw32-gcc
# Compiler Flags
CFLAGS = -O0 -g3 -Wall -c -fmessage-length=0
# Source File
SRC = sum.c
# Object File
OBJ = sum.o
# Program File (./PROG argvs)
PROG = sum

all: $(PROG)

$(PROG): $(OBJ)
	$(CC) $(OBJ) -o $@

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)

clean:
	rm -rf $(OBJ) $(PROG)