/*
  File name: lecture16_4.c
  strcpy and strncpy functions
  strcat and strncat functions
*/
#include <stdio.h>
#include <string.h>
int main(){
  char x[] = "Happy Birthday to You";
  char y[25], z[15];
  printf( "%s%s\n%s%s\n", 
	  "The string in array x is: ", x,
	  "The string in array y is: ", strcpy( y, x ) );
  strncpy( z, x, 14 );
  z[ 14 ] = '\0';
  printf( "The string in array z is: %s\n\n", z );
  char s1[ 20 ] = "Happy ", s2[] = "New Year ", s3[ 40 ] = "";
  printf( "s1 = %s\ns2 = %s\n", s1, s2 );
  printf( "strcat( s1, s2 ) = %s\n", strcat(s1, s2));
  printf( "strncat( s3, s1, 6 ) = %s\n", strncat( s3, s1, 6 ) );
  printf( "strcat( s3, s1 ) = %s\n", strcat(s3, s1));
  printf("\nAfter above changes:\ns1 = %s\ns2 = %s\ns3=%s\n", s1,s2,s3);

  return 0;
}
/*
sanjeev[127]gcc -o lecture16_4 lecture16_4.c 
sanjeev[128]./lecture16_4 
The string in array x is: Happy Birthday to You
The string in array y is: Happy Birthday to You
The string in array z is: Happy Birthday

s1 = Happy 
s2 = New Year 
strcat( s1, s2 ) = Happy New Year 
strncat( s3, s1, 6 ) = Happy 
strcat( s3, s1 ) = Happy Happy New Year 

After above changes:
s1 = Happy New Year 
s2 = New Year 
s3=Happy Happy New Year 
sanjeev[129]
*/
