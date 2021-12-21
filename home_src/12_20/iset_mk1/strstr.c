#include "iset.h"

int main(){
	char *buf = "hello world";
	
	printf("buf = %s\n", buf);
	printf("buf size = %d\n", strlen(buf));

	char *buf2 = strstr(buf, "wo");

	printf("buf2 = %s\n", buf2);
	printf("buf2 size = %d\n", strlen(buf2));
	
	return 0;
}
