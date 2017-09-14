CC=gcc
CFLAGS=-I.

simplechain: simplechain.c
	$(CC) -o simplechain simplechain.c -I.
