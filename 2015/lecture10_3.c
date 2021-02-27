/*
  File name: lecture10_3.c
  randomizing die-rolling program
  rewritten from lecture10_1.c
*/
#include <stdio.h>
#include <stdlib.h> //header file for function rand(), srand();
int main(){
  int il;
  unsigned seed;
  printf("Enter seed: ");
  scanf("%u", &seed);
  srand(seed); //now random number generation will start from number seed

  for(il=1; il<=20; il++){
    printf("%10d", 1+(rand()%6));
    if(il%5==0)printf("\n");
  }
  return 0;
}
/*
sanjeev[290]gcc lecture10_3.c -o lecture10_3
sanjeev[291]./lecture10_3
Enter seed: 85
         6         6         2         6         2
         2         3         5         4         2
         5         2         5         4         4
         5         2         5         3         5
sanjeev[292]./lecture10_3
Enter seed: 888
         5         5         4         6         2
         4         4         5         4         2
         6         4         5         5         4
         1         3         2         3         4
sanjeev[293]./lecture10_3
Enter seed: 37 
         2         6         4         2         5
         6         6         2         1         3
         1         6         4         5         2
         1         3         6         5         3
sanjeev[294]
*/
