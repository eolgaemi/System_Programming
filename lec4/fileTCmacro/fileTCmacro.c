#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>

int main(int argc, char* argv[]){
	
	struct stat buf;

	stat("linux.txt",&buf);

	printf("Mode = %o (Hexa : %x)\n", (unsigned int)buf.st_mode, (unsigned int)buf.st_mode);

	if(S_ISFIFO(buf.st_mode)) printf("linux.txt : FIFO\n");
	if(S_ISDIR(buf.st_mode)) printf("linux.txt : Directoty\n");
	if(S_ISREG(buf.st_mode)) printf("linux.txt : Regular File\n");

	return 0;
}
