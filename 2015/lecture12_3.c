/*
  File name: lecture12_3.c
  Demonstrating the const type qualifier with arrays
  Program will not compile
*/
#include <stdio.h>
#define size 5
void tryToModifyArray(const int []);
int main(){
  int a2[] = {10, 20, 30};
  tryToModifyArray(a2);
  printf("%d %d %d\n", a2[0], a2[1], a2[2]);
  return 0;
}
void tryToModifyArray(const int b[]){
  b[0]/ = 2;
  b[1]/= 2;
  b[2]/= 2;
}
/*
// In scientific linux
sanjeev[255]gcc lecture12_3.c
lecture12_3.c: In function ‘tryToModifyArray’:
lecture12_3.c:16: error: expected expression before ‘=’ token
lecture12_3.c:17: error: assignment of read-only location ‘*(b + 4u)’
lecture12_3.c:18: error: assignment of read-only location ‘*(b + 8u)’
sanjeev[256]
*/

/*
// In ubuntu
sanjeev[257]gcc a1.c
a1.c: In function ‘tryToModifyArray’:
a1.c:11:9: error: expected expression before ‘=’ token
   b[0]* = 2;
         ^
a1.c:12:3: error: assignment of read-only location ‘*(b + 4u)’
   b[1]*= 2;
   ^
a1.c:13:3: error: assignment of read-only location ‘*(b + 8u)’
   b[2]*= 2;
   ^
sanjeev[258]
*/
