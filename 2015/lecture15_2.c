/*
  File name: lecture15_2.c
  String Conversion Functions
*/
#include <stdio.h>
#include <stdlib.h> /*In ubuntu 14.04 it is this library is not needed */
int main(){
  double d;
  int i; 
  long l;
  d = atof( "99.0" );
  printf( "%s%.3f\n%s%.3f\n",
	  "The string \"99.0\" converted to double is ", d,
	  "The converted value divided by 2 is ", d / 2.0 );
  i = atoi( "2593" );
  printf( "%s%d\n%s%d\n",
	  "The string \"2593\" converted to int is ", i,
	  "The converted value minus 593 is ", i - 593 );
  l = atol( "1000000" );
  printf( "%s%ld\n%s%ld\n",
	  "The string \"1000000\" converted to long int is ", l,
	  "The converted value divided by 2 is ", l / 2 );
  const char *string = "51.2% are admitted"; 
  char *stringPtr; 
  d = strtod( string, &stringPtr );
  printf( "The string \"%s\" is converted to the\n", string );
  printf( "double value %.2f and the string \"%s\"\n", d, stringPtr );
  const char *string2 = "-1234567abc";
  char *remainderPtr; 
  long x; 
  x = strtol( string, &remainderPtr, 0 );
  printf( "%s\"%s\"\n%s%ld\n%s\"%s\"\n%s%ld\n",
	  "The original string is ", string2,
	  "The converted value is ", x,
	  "The remainder of the original string is ", 
	  remainderPtr,
	  "The converted value plus 567 is ", x + 567 );
  const char *string3 = "1234567abc";
  x = strtoul( string, &remainderPtr, 0 );
  printf( "%s\"%s\"\n%s%lu\n%s\"%s\"\n%s%lu\n",
	  "The original string is ", string,
	  "The converted value is ", x,
	  "The remainder of the original string is ", remainderPtr,
	  "The converted value minus 567 is ", x - 567 );
  
  return 0;
}
/*

sanjeev[160]gcc lecture15_2.c -o lecture15_2
sanjeev[161]./lecture15_2 
The string "99.0" converted to double is 99.000
The converted value divided by 2 is 49.500
The string "2593" converted to int is 2593
The converted value minus 593 is 2000
The string "1000000" converted to long int is 1000000
The converted value divided by 2 is 500000
The string "51.2% are admitted" is converted to the
double value 51.20 and the string "% are admitted"
The original string is "-1234567abc"
The converted value is 51
The remainder of the original string is ".2% are admitted"
The converted value plus 567 is 618
The original string is "51.2% are admitted"
The converted value is 51
The remainder of the original string is ".2% are admitted"
The converted value minus 567 is 18446744073709551100
sanjeev[162]

*/
