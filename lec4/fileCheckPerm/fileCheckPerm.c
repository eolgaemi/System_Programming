#include <sys/errno.h>
#include <unistd.h>
#include <stdio.h>

extern int errno;

int main(int argc, char* argv[]){
	int per;
	
	if(access("linux.bak",F_OK)== -1 && errno == ENOENT)
		printf("linux.bak : file not exist.\n");

	per = access("linux.txt",R_OK);
	if(per == 0)
		printf("linux.txt : Read Permission is permitted \n");
	else if(per==-1 && errno == EACCES)
		printf("linux.txt : Read Permission is not permitted \n");

	return 0;
}
