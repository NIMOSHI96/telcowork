#include "crudini.h"

//ini : ini 파일, sec : 섹션명, key : key값
const char *get(char *ini, char *sec, char *key){
 	//섹션 시작 좌표 : ss | 섹션 종료 좌표 : se
        int ss, se;
        //key 시작 좌표 : ks | key 종료 좌표 : ke
        int ks, ke;
        char buf[sz];
        int fd, i, n;
	
	printf("function operating!\n");
        fd = open(ini, O_RDONLY);
	read(fd, buf, sz);
	n = strlen(buf);

        //섹션 위치(오프셋) 확인
	int sl = n - strlen(strstr(buf, sec));
        for(i=0;i<n;i++){
                if((i > sl)&&(buf[i]==']')){
                        ss = i+2;
                }
                else if((i>sl)&&(buf[i]=='[')){
                        se = i;
                        break;
                }
        }

        if(se == 0)
                se = n;
        

        char *ptr = strstr(buf, key);
        ks = n - strlen(ptr);


        int check;

        while(1){
                if(ks > ss){
                        for(i=ks;i<n;i++){
				if(buf[i]=='=')
					ks=i+1;
                                if(buf[i]== '\n'){
                                        ke = i;
                                        break;
                                }
                        }
                        break;
                }
                ptr = strstr(ptr+1,key);
                ks = n - strlen(ptr);
        }



        //printf("k값 시작 좌표 : %d\n", ks);
        //printf("k값 종료 좌표 : %d\n", ke);

	
	char ret[ke-ks+2];

	for(i=ks;i<ke;i++){
		ret[i-ks] = buf[i];	
	}
	char *ret2 = ret;
	//printf("%s", ret);

        return ret2;
}

