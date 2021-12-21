#include <stdio.h>
#include <stdlib.h>

int main(int c, char **v){
	while (--c > 1 && !fork());
	sleep(c = atoi(v[c]));
	printf("%d\n", c);
	wait(0);
	return 0;
}
