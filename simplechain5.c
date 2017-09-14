#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main (int argc, char *argv[]){
	pid_t childpid = 0;
	int i, n, k, m, q;

	if (argc != 2){
		fprintf (stderr, "Usage: %s processes\n", argv[0]);
		return 1;
	}
	n = atoi(argv[1]);
	k = atoi(argv[2]);
	m = atoi(argv[3]);
	for (i = 1; i < n; i++)
		if(childpid = fork())
			break;

	for(q=0; q<k; q++){
	fprintf(stderr, "i:%d process ID: %ld parent ID: %ld child ID: %ld\n",
		i, (long)getpid(), (long)getppid(), (long)childpid);
	sleep(m);
	}
	return 0;
}
