#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

#define size 100

int main(){
	int fd, i, c1, c2;
	c1 = 0;
	c2 = 0;
	char buf[100], *buf2[100], temp[100];

	fd = open("test2.ini", O_RDONLY);

	read(fd, buf, size);
	
	for(i=0;i<size;i++){
		if(buf[i] == '['){
			c1 = 1;
		}
		
		if(c1){
			buf2[c2][i] = buf[i];
		}

		if(buf[i] == ']'){
			c1 = 0;
			c2++;
		}
		

	}

	for(i=0;i<c2;i++){
		printf("%s\n", buf2[i]);
	}

	printf("%s\n", buf);

	return 0;
}
