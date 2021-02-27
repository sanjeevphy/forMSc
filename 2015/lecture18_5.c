/*
  File name: lecture18_5.c
  crating synonyms (or aliases)
*/
#include <stdio.h>
#include <string.h>

struct {
  unsigned int age : 3; /* defines memory bits */
} aayu;

int main( ) {

  aayu.age = 4;
  printf( "Sizeof( aayu ) : %lu\n", sizeof(aayu) );
  printf( "aayu.age : %d\n", aayu.age );

  aayu.age = 7;
  printf( "aayu.age : %d\n", aayu.age );

  aayu.age = 8; /* It is not in memory size */
  printf( "aayu.age : %d\n", aayu.age );

  return 0;
}
/*
// IN SL6:
sanjeev[424]gcc -o lecture18_5 lecture18_5.c
lecture18_5.c: In function ‘main’:
lecture18_5.c:21: warning: large integer implicitly truncated to unsigned type
sanjeev[425]./lecture18_5
Sizeof( aayu ) : 4
aayu.age : 4
aayu.age : 7
aayu.age : 0
sanjeev[426]


// In ubuntu 14.04
sanjeev[631]gcc lecture18_5.c 
lecture18_5.c: In function ‘main’:
lecture18_5.c:15:3: warning: format ‘%d’ expects argument of type ‘int’, but argument 2 has type ‘long unsigned int’ [-Wformat=]
   printf( "Sizeof( aayu ) : %d\n", sizeof(aayu) );
   ^
lecture18_5.c:21:3: warning: large integer implicitly truncated to unsigned type [-Woverflow]
aayu.age = 8;
   ^
sanjeev[632]./a.out 
Sizeof( aayu ) : 4
	       aayu.age : 4
	       aayu.age : 7
	       aayu.age : 0
sanjeev[633]
*/
