#include "iget.h"

int iget(char *v[]){
	int fd, i, n, cnt, bp;
	cnt = 0;
	bp = 0;
	char buf[sz], *buf2, *buf3, sec[sz];

	fd = open(v[1], O_RDWR);
	n = read(fd, buf, 4096);

	buf2 = strstr(buf, v[2]);

	for(i=0;i<sz;i++){
		switch(buf2[i]){
			case '\n':
				bp = 1;
				break;
			case '[':
				bp = 2;
				break;
			default :
				break;
		}

		if(bp == 1){
			sec[cnt] = buf2[i+1];
			//printf("%c", sec[cnt]);
			cnt++;
		}
		else if(bp == 2)
			break;
	}

	buf3 = strstr(sec, v[3]);
	buf3 = strtok(buf3, "\n");
	buf3 = strtok(buf3, "=");
	buf3 = strtok(NULL, "\0");
	


	printf("%s\n", buf3);

	close(fd);
}
