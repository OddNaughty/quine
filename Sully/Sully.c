#include <stdio.h>
#include <stdlib.h>
#define P "Sully_%d.c"
char*ss="#include <stdio.h>%c#include <stdlib.h>%c#define P %cSully_%%d.c%c%cchar*ss=%c%s%c;%cint main(){%cint i=%d;%cchar s[1000];char s2[1000];sprintf(s,P,i-1);FILE *f=fopen(s,%cw%c);if(i>0){fprintf(f,ss,10,10,34,34,10,34,ss,34,10,10,i-1,10,34,34,34,34,10);sprintf(s2, %cclang -Wall -Wextra -Werror %%s -o Sully_%%d; ./Sully_%%d%c, s, i-1, i-1);system(s2);}}%c";
int main(){
int i=5;
char s[1000];char s2[1000];sprintf(s,P,i-1);FILE *f=fopen(s,"w");if(i>0){fprintf(f,ss,10,10,34,34,10,34,ss,34,10,10,i-1,10,34,34,34,34,10);sprintf(s2, "clang -Wall -Wextra -Werror %s -o Sully_%d; ./Sully_%d", s, i-1, i-1);printf("%s\n",s2);system(s2);}}
