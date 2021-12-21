#include "main.h"

int main(){
	int fd, i, n, ns, nm, ne;
	char buf[sz];
	
	fd = open("test.ini", O_RDWR);
	n = read(fd, buf, sz);

	ns = strlen(buf, "section2");
	
	for(i=0;i<n;i++){
		if(i > ns)
			nm = 1;

		if((buf[i] == '[')){
			nm = i;
			
		}
			
			
	}
}
