#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>

int main(int argc, char* argv[]){
	
	struct stat buf;
	int kind;
	
	stat("linux.txt",&buf);

	printf("Mode = %o (Hexa : %x)\n", (unsigned int)buf.st_mode, (unsigned int)buf.st_mode);

	kind = buf.st_mode & S_IFMT;

	printf("Kind = %x\n",kind); //buf.st_mode (AND) (1111 000 000 000)

	switch (kind){
		case S_IFIFO:
			printf("unix.txt : FIFO\n"); break;
		case S_IFDIR:
			printf("unix.txt : Directory\n"); break;
		case S_IFREG:
			printf("unix.txt : Regular File\n"); break;
	}

	return 0;
}
