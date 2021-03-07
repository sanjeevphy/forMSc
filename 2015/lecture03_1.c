/*
  File name: lecture03_1.c
  statements, relations, operators and equality operators
*/
#include <stdio.h>
int main(){
  int n1, n2; /* 2 integers are defined */
  printf("Give 2 integers: ");
  scanf("%d%d",&n1, &n2);
  if(n1 == n2) printf("%d and %d are equal.\n",n1,n2);
  if(n1 != n2) printf("%d and %d are not equal.\n",n1,n2);
  if(n1 < n2) printf("%d is smaller than %d\n",n1,n2);
  if(n1 > n2) printf("%d is bigger than %d\n",n1,n2);
  if(n1 <= n2) printf("%d is smaller than or equal to %d\n",n1,n2);
  if(n1 >= n2) printf("%d is bigger than or equal to %d\n",n1,n2);
  return 0;
}
/*
sanjeev[32]gcc -o lecture03_1 lecture03_1.c
sanjeev[33]./lecture03_1
Give 2 integers: 4 8
4 and 8 are not equal.
4 is smaller than 8
4 is smaller than or equal to 8
sanjeev[34]./lecture03_1
Give 2 integers: 11 8
11 and 8 are not equal.
11 is bigger than 8
11 is bigger than or equal to 8
sanjeev[35]./lecture03_1
Give 2 integers: 11 11
11 and 11 are equal.
11 is smaller than or equal to 11
11 is bigger than or equal to 11
sanjeev[36]./lecture03_1
Give 2 integers: 11 21
11 and 21 are not equal.
11 is smaller than 21
11 is smaller than or equal to 21
sanjeev[37]./lecture03_1
Give 2 integers: 1 1
1 and 1 are equal.
1 is smaller than or equal to 1
1 is bigger than or equal to 1
sanjeev[38]

*/
