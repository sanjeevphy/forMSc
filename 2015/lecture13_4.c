/*
  File name: lecture13_4.c
  similar to lecture13_3.c
*/
#include <stdio.h>
int main(){
  int x, y;
  int *const ptr = &x;
  *ptr = 7;
  ptr = &y;
  return 0;
}
/*
//  In ubuntu 14.04

sanjeev[139]gcc lecture13_4.c 
lecture13_4.c: In function ‘main’:
lecture13_4.c:10:3: error: assignment of read-only variable ‘ptr’
   ptr = &y;
   ^
sanjeev[140]

*/

/*
//  In Scientific linux
sanjeev[115]gcc lecture13_4.c -o lecture13_4
lecture13_4.c: In function ‘main’:
lecture13_4.c:10: error: assignment of read-only variable ‘ptr’
sanjeev[116]
*/
