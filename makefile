CC=gcc
CFLAGS=-I.

simplechain: simplechain.c simplechain4.c simplechain5.c simplechain6.c simplechain7.c
	$(CC) -o simplechain simplechain.c -I.

	$(CC) -o simplechain4 simplechain4.c -I.

	$(CC) -o simplechain5 simplechain5.c -I.

	$(CC) -o simplechain6 simplechain6.c -I.

	$(CC) -o simplechain7 simplechain7.c -I.
