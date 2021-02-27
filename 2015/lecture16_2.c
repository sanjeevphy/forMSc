/*
  File name: lecture16_2.c
   getchar and puts functions
*/
#include <stdio.h>
int main(){
  char c, sentence[80];
  int i=0;
  puts( "Enter a line of text:" );
  while ( ( c = getchar() ) != '\n')sentence[ i++ ] = c; 
  sentence[ i ] = '\0'; 
  puts( "\nThe line entered was:" );
  puts( sentence );
  return 0;
}
/*
sanjeev[217]gcc -o lecture16_2 lecture16_2.c
sanjeev[218]./lecture16_2
Enter a line of text:
All students are learning very fast.

The line entered was:
All students are learning very fast.
sanjeev[219]

*/
