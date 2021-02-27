/*
  File name: lecture16_7.c
  Some other string handling libraries
  strerror and strlen
*/
#include <stdio.h>
#include <string.h>
int main(){
  /* strerror */
  printf("\n**** strerror ****\n");
  printf("%s\n", strerror(2));
  
  /* strlen */
  printf("\n**** strlen ****\n");
  const char *string1 = "abcdefghijklmnopqrstuvwxyz", *string2="four", *string3="Jaipur";
  printf("%s\"%s\"%s%lu\n%s\"%s\"%s%lu\n%s\"%s\"%s%lu\n",
	 "The length of ", string1, " is ", (unsigned long) strlen(string1),
	 "The length of ", string2, " is ", (unsigned long) strlen(string2),
	 "The length of ", string3, " is ", (unsigned long) strlen(string3)
	 );
  return 0;
}
/*
sanjeev[148]gcc -o lecture16_7 lecture16_7.c
sanjeev[149]./lecture16_7

**** strerror ****
No such file or directory

**** strlen ****
The length of "abcdefghijklmnopqrstuvwxyz" is 26
The length of "four" is 4
The length of "Jaipur" is 6
sanjeev[150]
*/
