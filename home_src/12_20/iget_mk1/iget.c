#include "head.h"
#define sz 4096


int iget(char * argv[]){

	int fd, n, i;
	
	char buf[sz];
	
	fd = open("test.ini", O_RDWR);
	
	n = read(fd, buf, sz);
	
	char *ptr = strstr(buf, argv[1]);
	
	for(i=0;i<sz;i++){
		if(ptr[i]=='\n')
			break;
		printf("%c", ptr[i]);
	}
	
	printf("\n");
	//printf("%s\n", buf);

	close(fd);
	

	return 0;
}
