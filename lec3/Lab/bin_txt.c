#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

typedef struct{
	int mID;
	int mScore[10];	
}User;

int main(int argc,char* argv[]){
	
	int wfd1, wfd2;
	int n1_write,n2_write;
	User data[10];

	wfd1 = open("test.bin",O_WRONLY | O_CREAT | O_TRUNC, 0644);
	wfd2 = open("test.txt",O_WRONLY | O_CREAT | O_TRUNC, 0644);

	for(int i=0; i<10; i++){
		data[i].mID = i;
		for(int j=0; j<10; j++){
			data[i].mScore[j] = (j+1)*10;
		}
	}


	n1_write = write(wfd1,data,sizeof(data));
        n2_write = write(wfd2,data,sizeof(data));


	

	return 0;
}
