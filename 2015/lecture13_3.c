/*
  File name: lecture13_3.c
  Program will not compile if we try to modify data through a
  non-constant pointer to constant data
*/
#include <stdio.h>
void f(const int *xPtr);
int main(){
  int y;
  f(&y);
  return 0;
}
void f(const int *xPtr){
  *xPtr = 100;
}
/* To compile this program please remove "const" from function */

/*
//  In ubuntu
sanjeev[137]gcc lecture13_3.c 
lecture13_3.c: In function ‘f’:
lecture13_3.c:14:3: error: assignment of read-only location ‘*xPtr’
*xPtr = 100;
   ^
sanjeev[138]

*/

/*
//  In Scientific linux
sanjeev[113]gcc lecture13_3.c -o lecture13_3
lecture13_3.c: In function ‘f’:
lecture13_3.c:14: error: assignment of read-only location ‘*xPtr’
sanjeev[114]
*/
