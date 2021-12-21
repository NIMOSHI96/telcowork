#include <stdio.h>

int main(){
	char *buf[100];
	buf[0] = "hello world\n";
	buf[1] = "world hello\n";
	buf[2] = "hello darkness my old  friend\n";


	printf("%s\n", buf[0]);
	printf("%s\n", buf[1]);
	printf("%s\n", buf[2]);

	return 0;
}
