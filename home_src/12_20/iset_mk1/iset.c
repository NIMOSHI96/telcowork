#include "iset.h"

int main(int c, char *v[]){

	int fd, n, n2, i;
	char buf[sz];
	
	fd = open(v[1], O_RDWR);

	n = read(fd, buf, sz);
	n2 = n - strlen(strstr(buf,"section2"));
	
	printf("original size : %d\n", n);
	printf("modified size : %d\n", n2);

	lseek(fd, n2, SEEK_SET);
	char buf2[n2];
	n = read(fd, buf2, n2);
	
	printf("%s\n", buf2);
	printf("%d\n", n);

	close(fd);

	return 0;
}
