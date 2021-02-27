/*
  File name: lecture8_2.c
  creating and using a programmer-defined function
*/
#include <stdio.h>
int square(int a); //function prototype
int main(){
  int i;
  for(i=1; i<=10; i++){
    printf("%d ", square(i));
  }
  printf("\n");
  return 0;
}

/*
  square function will return a value which is square of given parameter
*/
int square(int a){
  return a*a;
}

/*

sanjeev[53]gcc -o lecture7_4 lecture7_4.c 
sanjeev[54]./lecture7_4
1 4 9 16 25 36 49 64 81 100 
sanjeev[55]

*/
