#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>

#define sz 4096

const char *prts(char *buf,int a,int b);

const char *get(char *ini, char *sec, char *key);

void set(char *ini, char *sec, char *key, char *val);

void del(char *ini, char *sec, char *key);

//int upd(char *ini, char *sec, char *key, char *val);

