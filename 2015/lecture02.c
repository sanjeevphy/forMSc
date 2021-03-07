/*
  File name: lecture02.c
  Sample Algebraic and C Expressions
*/
#include <stdio.h>
int main(){
  int i1, i2, i3, i4, i5, j1, j2, j3, j4, j5;
  /* Here i1, i2, i3, i4, i5 and j's are defined as integers */
  printf("Give any 5 integers with single space between them: ");
  scanf("%d%d%d%d%d",&i1, &i2, &i3, &i4, &i5);
  printf("Integers, which are given are follows:\n");
  printf("%d, %d, %d, %d and %d\n\n", i1, i2, i3, i4, i5);
  j1 = i1 + i2 + i3 + i4 + i5;
  /* Here it will first calculate i4 + i5
     In that sum it will add i3 and after i2 and in the end i1;
  */
  j2 = i1 - i2;
  printf("Addition of given integers is = %d\n", j1);
  printf("Addition of %d and %d is %d\n",i1, i2, i1+i2);
  printf("Subtraction of first 2 integers is equal to %d\n\n",j2);
  /* In subtraction also, it will go from right to left*/
  j3 = i1*i2*i3;
  printf("i1 * i2 * i3 = %d\n", j3);
  j4 = i1/i2; j5 = i1%i2;
  printf("i1/i2 = %d and i1 remainder i2 is %d\n\n", j4, j5);
  /* Here in divide, it will show only integer part of the result */
  return 0;
}
/*
sanjeev[25]gcc -o lecture02 lecture02.c
sanjeev[26]./lecture02 
Give any 5 integers with single space between them: 3 4 5 6 7
Integers, which are given are follows:
3, 4, 5, 6 and 7

Addition of given integers is = 25
Addition of 3 and 4 is 7
Subtraction of first 2 integers is equal to -1

i1 * i2 * i3 = 60
i1/i2 = 0 and i1 remainder i2 is 3

sanjeev[27]./lecture2 
Give any 5 integers with single space between them: 7 6 5 4 3
Integers, which are given are follows:
7, 6, 5, 4 and 3

Addition of given integers is = 25
Addition of 7 and 6 is 13
Subtraction of first 2 integers is equal to 1

i1 * i2 * i3 = 210
i1/i2 = 1 and i1 remainder i2 is 1

sanjeev[28]./lecture2 
Give any 5 integers with single space between them: 5 10 15 20 25
Integers, which are given are follows:
5, 10, 15, 20 and 25

Addition of given integers is = 75
Addition of 5 and 10 is 15
Subtraction of first 2 integers is equal to -5

i1 * i2 * i3 = 750
i1/i2 = 0 and i1 remainder i2 is 5

sanjeev[29]./lecture2 
Give any 5 integers with single space between them: 25 20 15 10 5
Integers, which are given are follows:
25, 20, 15, 10 and 5

Addition of given integers is = 75
Addition of 25 and 20 is 45
Subtraction of first 2 integers is equal to 5

i1 * i2 * i3 = 7500
i1/i2 = 1 and i1 remainder i2 is 5

sanjeev[30]./lecture2 
Give any 5 integers with single space between them: 18 3 2 1 1
Integers, which are given are follows:
18, 3, 2, 1 and 1

Addition of given integers is = 25
Addition of 18 and 3 is 21
Subtraction of first 2 integers is equal to 15

i1 * i2 * i3 = 108
i1/i2 = 6 and i1 remainder i2 is 0

sanjeev[31]

*/
