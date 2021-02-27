/*
  File name: lecture11_2.c
  Histogram/plot printing program with array
*/
#include <stdio.h>
#define size 10
int main(){
  int n[size]={15, 10, 5, 7, 11, 13, 1, 5, 15, 10};
  int i, j;
  printf("Element        Value        Histogram\n");
  for(i = 0; i< size; i++){
    printf("%7d%13d\t",i, n[i]);
    for(j=1; j<=n[i]; j++)printf("%c",'|');
    printf("\n");
  }
  return 0;
}
/*
sanjeev[152]gcc lecture11_2.c -o lecture11_2
sanjeev[153]./lecture11_2
Element        Value        Histogram
0           15|||||||||||||||
1           10||||||||||
2            5|||||
3            7|||||||
4           11|||||||||||
5           13|||||||||||||
6            1|
7            5|||||
8           15|||||||||||||||
9           10||||||||||
sanjeev[154]

*/
