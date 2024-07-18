#include <stdio.h>
#include <time.h>
typedef struct{
	int mID;
	int mScore[10];
}User;

int main(int argc, char* argv[]){
	
	FILE *file_bin, *file_txt;
	int n_read;
	time_t start,stop;
	User buf[1];

	file_bin = fopen(argv[1],"rb");
	file_txt = fopen(argv[2],"r");
	

	time(&start);
	while(1){
		n_read = fread(buf,sizeof(User),1,file_bin);
		if(n_read <=0){
			time(&stop);
			printf("Binary elapsed time : %ld\n",stop-start);
			break;
		}
	}

	time(&start);
	while(1){
		n_read = fread(buf,sizeof(User),1,file_txt);
		if(n_read <=0){
			time(&stop);
			printf("Text elapsed time : %ld\n",stop-start);
			break;
		}
	}
		

	return 0;
}
