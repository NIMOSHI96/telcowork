#include "test.h"

int get(char *fd){
	char *buff;
	int folder = open(fd, O_RDWR);
	read(fd,buff, sizeof(buff)-1);
	printf("%s\n", buff);
	close(fd);

	return 0;
}
