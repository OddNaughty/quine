#include <stdio.h>
/*
  comment
*/
char*s="#include <stdio.h>%c/*%c  comment%c*/%cchar*s=%c%s%c;%cvoid func(){};int main(void){%c/*%c  lol%c*/%cprintf(s,10,10,10,10,34,s,34,10,10,10,10,10,10);}%c";
void func(){};int main(void){
/*
  lol
*/
printf(s,10,10,10,10,34,s,34,10,10,10,10,10,10);}
