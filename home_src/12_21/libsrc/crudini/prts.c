#include "crudini.h"
// 지정된 좌표에 해당하는 문자열 출력 함수
const char *prts(char *buf,int a,int b){
        char *str = malloc(strlen(buf));
	char *ret = strncpy(str,buf+a,b-a);
        printf("%s\n", ret);

	return 0;
}
