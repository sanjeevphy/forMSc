/*
  File name: lecture07_1.c
  do while loop
*/
#include <stdio.h>
int main(){
  int counter=1;
  do{
    printf("%d ", counter);
  } while (++counter <=10);
  
  printf("\n");
  return 0;
}
/*
sanjeev[27]gcc -o lecture07_1 lecture07_1.c 
sanjeev[28]./lecture07_1
1 2 3 4 5 6 7 8 9 10 
sanjeev[29]
*/
