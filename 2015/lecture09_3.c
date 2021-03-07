/*
  File name lecture09_3.c
  Recursion: fibonacci function
*/
#include <stdio.h>
long fibonacci(int);
int main(){
  int n;
  long result;
  printf("Enter an integer: ");
  scanf("%d",&n);
  result = fibonacci(n);
  printf("Fibonacci (%d) = %ld\n",n, result);
  return 0;
}
long fibonacci(int m){
  if(m==0 || m==1) return m;
  else return fibonacci(m-1) + fibonacci(m-2);
}

/*
sanjeev[236]gcc lecture09_3.c -o lecture09_3
sanjeev[237]./lecture09_3
Enter an integer: 0
Fibonacci (0) = 0
sanjeev[238]./lecture09_3
Enter an integer: 1
Fibonacci (1) = 1
sanjeev[239]./lecture09_3
Enter an integer: 2
Fibonacci (2) = 1
sanjeev[240]./lecture09_3
Enter an integer: 3
Fibonacci (3) = 2
sanjeev[241]./lecture09_3
Enter an integer: 4
Fibonacci (4) = 3
sanjeev[242]./lecture09_3
Enter an integer: 5
Fibonacci (5) = 5
sanjeev[243]./lecture09_3
Enter an integer: 6
Fibonacci (6) = 8
sanjeev[244]./lecture09_3
Enter an integer: 7
Fibonacci (7) = 13
sanjeev[245]./lecture09_3
Enter an integer: 8
Fibonacci (8) = 21
sanjeev[246]./lecture09_3
Enter an integer: 9
Fibonacci (9) = 34
sanjeev[247]./lecture09_3
Enter an integer: 10
Fibonacci (10) = 55
sanjeev[248]./lecture09_3
Enter an integer: 15
Fibonacci (15) = 610
sanjeev[249]./lecture09_3
Enter an integer: 20
Fibonacci (20) = 6765
sanjeev[250]./lecture09_3
Enter an integer: 30
Fibonacci (30) = 832040
sanjeev[251]./lecture09_3
Enter an integer: 40
Fibonacci (40) = 102334155
sanjeev[252]
*/
