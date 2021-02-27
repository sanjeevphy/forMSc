/*
  File name: lecture13_5.c
  similar to lecture13_4.c and lecture13_3.c
*/
#include <stdio.h>
int main(){
  int x = 5, y;
  const int *const ptr = &x;
  printf("%d\n", *ptr);
  *ptr = 7;
  ptr = &y;
  return 0;
}
/*
//  In ubuntu 14.04
sanjeev[142]gcc lecture13_5.c 
lecture13_5.c: In function ‘main’:
lecture13_5.c:10:3: error: assignment of read-only location ‘*ptr’
*ptr = 7;
   ^
lecture13_5.c:11:3: error: assignment of read-only variable ‘ptr’
   ptr = &y;
   ^
sanjeev[143]

*/

/*
//  In Scientific linux
sakumar[117]gcc lecture13_5.c -o lecture13_5
lecture13_5.c: In function ‘main’:
lecture13_5.c:10: error: assignment of read-only location ‘*ptr’
lecture13_5.c:11: error: assignment of read-only variable ‘ptr’
sakumar[118]
*/
