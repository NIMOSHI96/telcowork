#include "crudini.h"


// v[0] : ./crud | v[1] : command | v[2] = .ini | v[3] = section | v[4] = key | v[5] = value
int main(int c, char *v[]){
	
	if(!strcmp(v[1],"get")){
		const char *ans = get(v[2],v[3],v[4]);
		printf("ans=%s\n", ans);
	}
	else if(!strcmp(v[1],"set")){
		set(v[2],v[3],v[4],v[5]);
	}
	else if(!strcmp(v[1],"del")){
		del(v[2], v[3], v[4]);
	}
	else
		printf("wrong command!\n");
	

	return 0;
}
