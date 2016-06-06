#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define P "Sully_%d.c"
char*ss="#include <stdio.h>%c#include <stdlib.h>%c#include <string.h>%c#define P %cSully_%%d.c%c%cchar*ss=%c%s%c;%cint main(int argc, char **av){%c(void)argc;int a=strcmp(%c./Sully%c,av[0]);%cint i=%d;%cchar s[1000];char s2[1000];if(i>0){sprintf(s,P,a?i-1:i);FILE *f=fopen(s,%cw%c);if(a){fprintf(f,ss,10,10,10,34,34,10,34,ss,34,10,10,34,34,10,i-1,10,34,34,34,34,10);}else{fprintf(f,ss,10,10,10,34,34,10,34,ss,34,10,10,34,34,10,i,10,34,34,34,34,10);}fclose(f);sprintf(s2, %cclang -Wall -Wextra -Werror %%s -o Sully_%%d; ./Sully_%%d%c, s, a?i-1:i,a?i-1:i);system(s2);}}%c";
int main(int argc, char **av){
(void)argc;int a=strcmp("./Sully",av[0]);
int i=5;
char s[1000];char s2[1000];if(i>0){sprintf(s,P,a?i-1:i);FILE *f=fopen(s,"w");if(a){fprintf(f,ss,10,10,10,34,34,10,34,ss,34,10,10,34,34,10,i-1,10,34,34,34,34,10);}else{fprintf(f,ss,10,10,10,34,34,10,34,ss,34,10,10,34,34,10,i,10,34,34,34,34,10);}fclose(f);sprintf(s2, "clang -Wall -Wextra -Werror %s -o Sully_%d; ./Sully_%d", s, a?i-1:i,a?i-1:i);system(s2);}}
