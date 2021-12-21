#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(){
	
	int fd, i, cnt;
	
	char buf[1024];
	char *buf2[1024];
	fd = open("./test.ini", O_RDWR);

	read(fd, buf, 100);
	
	for(i=0;i<1024;i++){
		if(buf[i]=='['){
			cnt = 1;
		}

		if(cnt == 1){
			buf2[i] = buf[i];
			printf("%c", buf2[i]);
		}

		if(buf[i]==']'){
			printf("\n");
			cnt = 0;
			if(buf2=="[section1]")
				printf("section confirm\n");
		}

	}
	printf("%s\n",buf);

	return 0;
}

