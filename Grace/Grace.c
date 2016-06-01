#include <stdio.h>
/*
	lol
*/
#define FILE1 "Grace_kid.c"
#define W "w"
#define T(a) int main(){FILE *f=fopen(FILE1, W);fprintf(f,a,10,10,10,10,10,10,#a,10);}
T("#include <stdio.h>%c/*%c\tlol%c*/%c#define FILE1 \"Grace_kid.c\"%c#define W \"w\"%c#define T(a) int main(){FILE *f=fopen(FILE1, W);fprintf(f,a,10,10,10,10,10,10,#a,10);}\nT(%s)%c")
