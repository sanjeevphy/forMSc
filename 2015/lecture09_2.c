/*
  File name lecture9_2.c
  Recursion: calculating factorial
*/
#include <stdio.h>
long factorial(int);
int main(){
  int i;
  for(i=0; i<=10; i++){
    printf("%2d = %1d\n",i, factorial(i));
    /* number between % and d denotes the digits should be occupied in printing */
  }
  return 0;
}
long factorial(int n){
  if(n<=1) return 1;
  else return n*factorial(n-1);
}

/*
sanjeev[202]gcc lecture9_2.c -o lecture9_2
sanjeev[203]./lecture9_2
 0 = 1
 1 = 1
 2 = 2
 3 = 6
 4 = 24
 5 = 120
 6 = 720
 7 = 5040
 8 = 40320
 9 = 362880
10 = 3628800
sanjeev[204]


*/
