CC=gcc
CFLAGS=-I.
guessnumber: guessnumber.c #list of files on which the command depends on
	$(CC) -o guessnumber guessnumber.c
createfile: createfile.c
	$(CC) -o createfile createfile.c
