/*
  File name: lecture13_8.c
  Relation between Pointers and Arrays
*/
#include <stdio.h>
int main(){
  int b[] = {10, 20, 30, 40};
  int *bPtr = b, i, offset;
  printf("Array b printed with:\nArray subscript notation\n");
  for(i=0; i<4; i++)printf("b[%d] = %d\n", i, b[i]);
  printf("\nPointer/offset notation where\n"
	 "the pointer is the array name\n" );
  for(offset = 0; offset < 4; offset++ )
    printf("*(b + %d) = %d\n", offset, *(b+offset));
  printf("\nPointer subscript notation\n");
  for(i=0; i<4; i++)printf("bPtr[%d] = %d\n",i, bPtr[i]);
  printf("\nPointer/offset notation\n");
  for(offset=0; offset<4; offset++)
    printf("* (bPtr + %d) = %d\n",offset , *(bPtr + offset));
  return 0;
}
/*

sanjeev[129]gcc lecture13_8.c -o lecture13_8
sanjeev[130]./lecture13_8
Array b printed with:
Array subscript notation
b[0] = 10
b[1] = 20
b[2] = 30
b[3] = 40

Pointer/offset notation where
the pointer is the array name
*(b + 0) = 10
*(b + 1) = 20
*(b + 2) = 30
*(b + 3) = 40

Pointer subscript notation
bPtr[0] = 10
bPtr[1] = 20
bPtr[2] = 30
bPtr[3] = 40

Pointer/offset notation
* (bPtr + 0) = 10
* (bPtr + 1) = 20
* (bPtr + 2) = 30
* (bPtr + 3) = 40
sanjeev[131]

*/
