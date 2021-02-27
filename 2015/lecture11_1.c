/*
  File name: lecture11_1.c
  Array example: initializing an array with zero
  and initializer list.
*/
#include <stdio.h>
#define size 10
int main(){
  int n1[10];
  int i;
  for( i=0; i<10; i++){
    n1[i]=0; //set all elements equal to zero
  }
  printf("%s%13s\n", "Elements", "Value");
  for(i=0; i < 10; i++)
    printf("%7d%13d\n",i, n1[i]); //printing all elements
  
  /* new array variable */
  int n2[size] = {30, 28, 47, 52, 42, 44, 48, 78, 92, 10 };
  printf("\n%s%13s\n", "Elements", "Value");
  for(i=0;i<size;i++)printf("%7d%13d\n",i,n2[i]);

  /* array size is omitted */
  int n3[] = {11,22,33,44,55};
  printf("\n%s%13s\n", "Elements", "Value");
  for(i=0;i<size;i++)printf("%7d%13d\n",i,n3[i]);
  // here n3[5] to n3[9] are not defined.

  return 0;
}
/*
sanjeev[149]gcc lecture11_1.c -o lecture11_1
sanjeev[150]./lecture11_1
Elements        Value
      0            0
      1            0
      2            0
      3            0
      4            0
      5            0
      6            0
      7            0
      8            0
      9            0

Elements        Value
      0           30
      1           28
      2           47
      3           52
      4           42
      5           44
      6           48
      7           78
      8           92
      9           10

Elements        Value
      0           11
      1           22
      2           33
      3           44
      4           55
      5            0
      6   1347335896
      7        32547
      8           30
      9           28
sanjeev[151]

*/
