/*
  File name: lecture16_6.c
  Memory Functions of the string-handling library  
*/
#include <stdio.h>
#include <string.h>
int main(){
  char s1[17], s2[]="Copy this string", s3[]="Home Sweet Home",
    s4[] = "ABCDEFG", s5[]="ABCDXYZ", s6[]="EEEEEEEEEEEEEEE";
  const char *s7 = "This is a string";
  /* memcpy */
  printf("\n**** memcpy ****\n");
  memcpy(s1,s2,17);
  printf( "%s\"%s\"\n","After s2 is copied into s1 with memcpy, s1 contains ", s1);
  /* memmove */
  printf("\n**** memmove ****\n");
  printf("%s%s\n", "The string in array s3 before memmove is: ", s3 );
  memmove(s3,&s3[5],10);
  printf("%s%s\n", "The string in array s3 after memmove is: ",s3);
  /* Above 2 lines in sl6 it also works if we write bellow but in ubunut it is not */
  //printf("%s%s\n", "The string in array s3 after memmove is: ",memmove(s3,&s3[5],10));
  
  /* memcmp */
  printf("\n**** memcmp ****\n");
  printf("%s%s\n%s%s\n\n%s%2d\n%s%2d\n%s%2d\n",
	 "s4 = ", s4, "s4 = ", s4,
	 "memcmp( s1, s2, 4 ) = ", memcmp( s1, s2, 4 ),
	 "memcmp( s1, s2, 7 ) = ", memcmp( s1, s2, 7 ),
	 "memcmp( s1, s2, 7 ) = ", memcmp( s1, s2, 7 ));
  
  /* memchr */
  printf("\n**** memchr ****\n");
  memchr(s7,'r',16);
  printf( "%s\'%c\'%s\"%s\"\n","The remainder of s7 after character ",
          'r'," is found is ", memchr(s7,'r',16));
  /* In sl6, above 2 statements can work as bellow too but in ubuntu not:
  printf( "%s\'%c\'%s\"%s\"\n","The remainder of s7 after character ",
	  'r'," is found is ", memchr(s7,'r',16));*/
  /* memset */
  printf("\n**** memset ****\n");
  printf("s6 = %s\n", s6);
  memset(s6, 'f', 7);
  printf("s6 after memset = %s\n", s6);
  /* In sl6, above 2 statements can work as bellow too but in ubuntu not:
  printf("s6 after memset = %s\n", memset(s6, 'f', 7));*/
  return 0;
}
/*

sanjeev[145]gcc -o lecture16_6 lecture16_6.c
sanjeev[146]./lecture16_6 

**** memcpy ****
After s2 is copied into s1 with memcpy, s1 contains "Copy this string"

**** memmove ****
The string in array s3 before memmove is: Home Sweet Home
The string in array s3 after memmove is: Sweet Home Home

**** memcmp ****
s4 = ABCDEFG
s4 = ABCDEFG

memcmp( s1, s2, 4 ) =  0
memcmp( s1, s2, 7 ) =  0
memcmp( s1, s2, 7 ) =  0

**** memchr ****
The remainder of s7 after character 'r' is found is "ring"

**** memset ****
s6 = EEEEEEEEEEEEEEE
s6 after memset = fffffffEEEEEEEE
sanjeev[147]
*/
