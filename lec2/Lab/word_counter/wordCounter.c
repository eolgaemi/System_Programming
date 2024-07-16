#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(int argc, char* argv[]){
	
	int rfd, wfd, chunksize;
	char inputChar[3] = "the";
	char buffer[1];
	int wordCounter = 0;
	int n;
	int matchCounter = 0;
	int index = 0;

	chunksize = 1;
	wordCounter = 0;

	rfd = open("the100novel.txt",O_RDONLY,0644);
	if(rfd == -1){
		perror("novel open");
		exit(-1);
	}
	while(n = read(rfd,buffer,chunksize)>0){
		printf("buffer = %c , inpuChar = %c, index= %d ", *buffer, inputChar[index],index);	
		if(*buffer == inputChar[index] | *buffer == inputChar[index]-32){
			matchCounter += 1;
			index += 1;
		}else{
			matchCounter = 0;
			index = 0;
		}
		if(matchCounter == 3){
			wordCounter += 1;
			matchCounter = 0;
			index = 0;
		}

		printf(" matchCounter = %d, wordCounter = %d \n",matchCounter,wordCounter);

	}

	printf("The Counted : %d \n",wordCounter);

	return 0;
}
