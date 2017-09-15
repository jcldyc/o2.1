#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main (int argc, char *argv[]){
	pid_t childpid = 0;
	int i, n, c;

	if (argc != 2){
		fprintf (stderr, "Usage: %s processes\n", argv[0]);
		return 1;
	}

	while((c = getopt (argc, argv, "h")) != -1)
		switch(c){
			case 'h':
				fprintf(stderr,"Use:  %s <int>\n",argv[0], argv[0]);
				break;
			default:
				perror(" simplechain: Error:" );
				break;
	}



	n = atoi(argv[1]);
	for (i = 1; i < n; i++)
		if(childpid = fork())
			break;

	fprintf(stderr, "i:%d process ID: %ld parent ID: %ld child ID: %ld\n",
		i, (long)getpid(), (long)getppid(), (long)childpid);
	return 0;
}
