#include "crudini.h"

int main(){

	int fd;
	int i, n, no;
	char buf[sz];

	fd = open("test.ini", O_RDWR);
	n = read(fd, buf, sz);
	char buf2[n];
		
	strcpy(buf2, buf);
	
	close(fd);
	printf("\n\n---------------------\n\n");
	
	printf("%s",buf2);

	char *p = strstr(buf2, "fuck_you");
	printf("%s\n", p);
	int t = n - strlen(p);

	char *p2 = strchr(buf2, "fuck_you");
	printf("%s\n", p2);
	int t2 = n - strlen(p2);
	

	sync();

	close(fd);

	return 0;
}
