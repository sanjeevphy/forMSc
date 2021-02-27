/*
  File name: lecture10_1.c
  program for rolling a six-sided die
  random number generator, scaled
*/
#include <stdio.h>
#include <stdlib.h> //header file for function rand(), srand();
int main(){
  int il;
  for(il=1; il<=20; il++){
    printf("%10d", 1+(rand()%6));
    if(il%5==0)printf("\n");
  }
  return 0;
}
/*
sanjeev[256]gcc lecture10_1.c -o lecture10_1
sanjeev[257]./lecture10_1 
         2         5         4         2         6
         2         5         1         4         2
         3         2         3         2         6
         5         1         1         5         5
sanjeev[258]
*/
