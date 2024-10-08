#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>

int main(int argc, char* argv[]){
	
	struct stat buf;

	stat("querying_finfo.c",&buf);

	printf("Inode = %d\n",(int)buf.st_ino);
	printf("Mode = %o\n",(unsigned int)buf.st_mode);
	printf("Nlink = %o\n",(unsigned int)buf.st_nlink);
	printf("UID = %d\n",(int)buf.st_uid);
	printf("GID = %d\n",(int)buf.st_gid);
	printf("SIZE = %d\n",(int)buf.st_size);
	printf("Atime = %d\n",(int)buf.st_atime);
	printf("Mtime = %d\n",(int)buf.st_mtime);
	printf("Ctime = %d\n",(int)buf.st_ctime);
	printf("Blksize = %d\n",(int)buf.st_blksize);
	printf("Blocks = %d\n",(int)buf.st_blocks);

	return 0;
}
