/*
  File name: lecture16_3.c
  sprintf and sscanf functions
*/
#include <stdio.h>
int main(){
  char s[ 80 ]; 
  int x;
  double y;
  printf( "Enter an integer and a double:\n" );
  scanf( "%d%lf", &x, &y );
  sprintf( s, "integer:%6d\ndouble:%8.2f", x, y );
  printf( "%s\n%s\n",
	  "The formatted output stored in array s is:", s );
  
  char s1[] = "31298 87.375";
  sscanf( s1, "%d%lf", &x, &y );
  printf( "%s\n%s%6d\n%s%8.3f\n",
	  "The values stored in character array s are:",
	  "integer:", x, "double:", y );
  
  return 0;
}
/*
sanjeev[220]gcc -o lecture16_3 lecture16_3.c
sanjeev[221]./lecture16_3
Enter an integer and a double:
88 28.3
The formatted output stored in array s is:
integer:    88
double:   28.30
The values stored in character array s are:
integer: 31298
double:  87.375
sanjeev[222]
*/
