#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define T "#include<stdio.h>%1$c#include<stdlib.h>%1$c#include<string.h>%1$c#define T %2$c%3$s%2$c%1$cint main(){%1$cint i=%4$d;%1$cif(i<1)return 0;%1$cchar file[1000],cmd[1000];%1$csprintf(file,%2$cSully_%%d.c%2$c,i--);%1$cFILE*f=fopen(file,%2$cw%2$c);%1$cfprintf(f,T,10,34,T,i);%1$cfclose(f);%1$csprintf(cmd, %2$cclang %%s -o %%.*s && ./%%.*s%2$c, file, (int)strlen(file)-2, file,(int)strlen(file)-2,file);%1$csystem(cmd);}"
int main(){
int i=5;
if(i<1)return 0;
char file[1000],cmd[1000];
sprintf(file,"Sully_%d.c",i--);
FILE*f=fopen(file,"w");
fprintf(f,T,10,34,T,i);
fclose(f);
sprintf(cmd, "clang %s -o %.*s && ./%.*s", file, (int)strlen(file)-2, file,(int)strlen(file)-2,file);
system(cmd);}