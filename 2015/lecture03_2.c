/*
  file name lecture03_2.c
  Testing ordering in sign =
*/
#include <stdio.h>
int main(){
  int a,b,c;
  b=15; c=15;
  a=b=c=10;
  printf("a=%d\nb=%d\nc=%d\n",a,b,c);
  return 0;
}
/*
sanjeev[53]gcc -o lecture03_2 lecture03_2.c 
sanjeev[54]./lecture03_2 
a=10
b=10
c=10
sanjeev[55]
*/
