#include "crudini.h"


void set(char *ini, char *sec, char *key, char *val){

 	//섹션 시작 좌표 : ss | 섹션 종료 좌표 : se
        int ss, se;
        //key 시작 좌표 : ks | key 종료 좌표 : ke
        int ks, ke;
        char buf[sz];
        int fd, i, n;
	
        fd = open(ini, O_RDWR);
	read(fd, buf, sz);
	n = strlen(buf);

        //섹션 위치(오프셋) 확인
	char *p1 = strstr(buf, sec);
	int sl = n - strlen(p1);
 
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
        

        char *p2 = strstr(p1, key);
        ks = n - strlen(p2);


        int check;

        for(i=ks;i<se;i++){
                if(buf[i]== '\n'){
                        ke = i;
                        break;
                }
        }
	if(ke == 0){
		perror("key is not exist");

	}
        //printf("k값 시작 좌표 : %d\n", ks);
        //printf("k값 종료 좌표 : %d\n", ke);
	
	char pl[50] = "\n";
	strcat(pl,key);
        strcat(pl,"=");
	strcat(pl,val);
		
	//printf("%s\n", pl);

	lseek(fd, 0,SEEK_SET);
	char sep1[sz];
	read(fd, sep1, ks-1);
	sep1[ks-1] = '\0';
	lseek(fd, ke, SEEK_SET);
	char sep2[n-ke-1];
	read(fd, sep2, n-ke);
	sep2[n-ke]='\0';

	strcat(sep1,pl);
	
	int fn =strlen(strcat(sep1,sep2));

	printf("\n\n---------confirm change---------\n\n");
	printf("%s\n", sep1);

	close(fd);

	fd = open(ini, O_WRONLY|O_TRUNC);
	write(fd, sep1,fn);
	close(fd);
}

