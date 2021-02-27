/*
  File name: lecture16_1.c
  gets and putchar functions in c language
*/
#include <stdio.h>
void reverse( const char * const sPtr );
int main(){
  char sentence[80];
  printf( "Enter a line of text:\n" );
  fgets( sentence, 80, stdin ); 
  printf( "\nThe line printed backward is:\n" );
  reverse( sentence );
  printf("\n");
  return 0;
}
void reverse( const char * const sPtr ){
  if ( sPtr[ 0 ] == '\0' ) return;
  else {
    reverse( &sPtr[ 1 ] );
    putchar( sPtr[ 0 ] ); 
  }
}
/*
sanjeev[213]gcc -o lecture16_1 lecture16_1.c
sanjeev[214]./lecture16_1
Enter a line of text:
I teach MSc 1st semester

The line printed backward is:

retsemes ts1 cSM hcaet I
sanjeev[215]./lecture16_1
Enter a line of text:
my name is si eman ym

The line printed backward is:

my name is si eman ym
sanjeev[216]

*/
