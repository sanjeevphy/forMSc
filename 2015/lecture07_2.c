/*
  File name : lecture7_2.c
  using break and continue statement in for loop
*/
#include <stdio.h>
int main(){
  int i, ii;
  printf("Break statement in first loop\n");
  // for loop to understand for break statement
  for(i = 1; i <= 10; i++){
    if(i==5){
      break;
    }
    printf("%d ",i);
  }
  printf("\nLoop is broken at i = %d\n\n",i);
  
  // for loop to understand continue loop
  for(ii = 1; ii <= 10; ii++){
    if(ii == 5){
      continue;
    }
    printf("%d ",ii);
  }
  printf("\n");
  return 0;
}

/*
sanjeev[31]gcc -o lecture7_2 lecture7_2.c
sanjeev[32]./lecture7_2
Break statement in first loop
1 2 3 4 
Loop is broken at i = 5

1 2 3 4 6 7 8 9 10 
sanjeev[33]
*/
