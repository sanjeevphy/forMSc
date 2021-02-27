/*
  Name name: lecture12_2.c
  Passing arrays and individual array elements to functions
  Demonstrating the const type qualifier with arrays
*/
#include <stdio.h>
#define size 5
void modifyArray(int [], int);
//void modifyArray(int b[], int x);
void modifyElement(int);
int main(){
  int a1[size] = {0, 1, 2, 3, 4};
  int i;
  printf( "Effects of passing entire array by reference:\n\nThe "
	  "values of the original array are:\n" );
  for(i=0; i<size; i++) printf("%3d", a1[i]);
  printf("\n");
  modifyArray(a1, size);
  printf( "The values of the modified array are:\n" );
  for(i=0; i<size; i++) printf("%3d", a1[i]);
  printf( "\n\n\nEffects of passing array element "
	  "by value:\n\nThe value of a[3] is %d\n", a1[3]);
  modifyElement(a1[3]);
  printf( "The value of a[3] is %d\n", a1[3]);

  
  return 0;
}
void modifyArray(int b[], int x){//here "int size" can conflict variables.
  int j;
  for(j=0;j<x;j++)b[j]*=2;
}
void  modifyElement(int e){
  printf( "Value in modifyElement is %d\n", e *= 2 );
}
/*
sanjeev[242]gcc lecture12_2.c -o lecture12_2
sanjeev[243]./lecture12_2
Effects of passing entire array by reference:

The values of the original array are:
  0  1  2  3  4
The values of the modified array are:
  0  2  4  6  8


Effects of passing array element by value:

The value of a[3] is 6
Value in modifyElement is 12
The value of a[3] is 6
sanjeev[244]

*/
