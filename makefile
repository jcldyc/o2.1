CC=gcc
CFLAGS=-I.

simplechain: simplechain.c simplechain4.c
	$(CC) -o simplechain simplechain.c -I.

	$(CC) -o simplechain4 simplechain4.c -I.
