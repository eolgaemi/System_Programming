#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void){

	int rfd,wfd,n = 0;
	int chunksize[] = {1,64,256,1024,1130};
	char *buffer = (char *)malloc(sizeof(char) * 10 * 1024 * 1024);

	rfd = open("10MB.txt",O_RDWR);
	if(rfd == -1){
		perror("Open Error 10MB.txt");
		exit(-1);
	}
	
	wfd = open("10MB_Copied.txt",O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if(wfd == -1){
		perror("Write error");
		exit(-1);
	}

	for(int i = 0; i < 5; i++){
		time_t start, end;
		off_t off_set;
		off_set = lseek(rfd,0,SEEK_SET);
		if(off_set == -1){
			perror("OFFSET");
			exit(-1);
		}

		time(&start);
		while((n=read(rfd,buffer,chunksize[i]) > 0)){
			if(write(wfd,buffer,n) != n){
				perror("Write");
				exit(1);
			}
		}

		if (n == -1){
			perror("READ");
		}
		time(&end);

		printf("chunck_size = %d, elapsed time = %d seconds \n",chunksize[i],(int)(end-start));
	}
	
	close(rfd);
	close(wfd);

	return 0;
}
