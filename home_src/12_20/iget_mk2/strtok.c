#include <stdio.h>
#include <string.h>

int main(){
	char *result;

	char str[20] = "i love you always";

	result = strtok(str," ");

	printf("%s\n", str);

	return 0;
}
