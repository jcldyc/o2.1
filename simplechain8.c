#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main (int argc, char *argv[]){
	pid_t childpid = 0;
	int i, n, c, j=0;
	nchars=argv[2];
	char mybuf[strlen(nchars)+1]="";

	if (argc != 3){
		fprintf (stderr, "Usage: %s processes\n", argv[0]);
		return 1;
	}

	while((c = getopt (argc, argv, "h")) != -1)
		switch(c){
			case 'h':
				fprintf(stderr,"Use:  %s <int> <nchars>\n",argv[0], argv[0]);
				break;
			default:
				perror(" simplechain8: Error:" );
				break;
	}
	n = atoi(argv[1]);
	for (i = 1; i < n; i++)
		if(childpid = fork())
			break;
	
	while(argv[2][j] != '\0')
       		mybuf[j]=nchars[j];   
		j++;
    	}
	mybuf[j+1]='\0';

	fprintf(stderr, "process ID: %ld: %s", (long)getpid(), nchars);
	
	
	
	return 0;
}
