#include<stdio.h>
/*comment1*/
#define a
#define b
#define F(x) int main(){FILE*f=fopen("grace_kid.c", "w");char*t="#include<stdio.h>%1$c/*comment1*/%1$c#define a%1$c#define b%1$c#define F(x) int main(){FILE*f=fopen(%3$cgrace_kid.c%3$c, %3$cw%3$c);char*t=%3$c%4$s%3$c;fprintf(f,t,10,9,34,t);}%1$cF(42)%1$c";fprintf(f,t,10,9,34,t);}
F(42)
