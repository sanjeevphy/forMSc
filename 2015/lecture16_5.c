/*
  File name: lecture16_5.c
  Comparison Functions of string handling library
  strcmp, strncmp, strchr, strcspn, strpbrk, strrchr, strspn, strstr and strtoc functions
*/
#include <stdio.h>
#include <string.h>
int main(){

  /*strcmp and strncmp */
  const char *s1 = "Happy New Year"; 
  const char *s2 = "Happy New Year"; 
  const char *s3 = "Happy Holidays"; 
  printf("**** strcmp ****\n%s%s\n%s%s\n%s%s\n\n%s%2d\n%s%2d\n%s%2d\n\n",
	 "s1 = ", s1, "s2 = ",s2,"s3 = ", s3,
	 "strcmp(s1, s2) = ", strcmp(s1, s2),
	 "strcmp(s1, s3) = ", strcmp(s1, s3),
	 "strcmp(s3, s1) = ", strcmp(s3, s1)
	 );
  printf("\n**** strncmp ****\n%s%2d\n%s%2d\n%s%2d\n",
	 "strncmp(s1, s3, 6) = ", strncmp( s1, s3, 6 ),
         "strncmp(s1, s3, 7) = ", strncmp( s1, s3, 7 ),
         "strncmp(s3, s1, 7) = ", strncmp( s3, s1, 7 ));

  /* strchr */
  printf("\n**** strchr ****\n");
  const char *string1 = "This is a test", *string2="beware";
  char c1 = 'a', c2='z';
  if(strchr(string1, c1)!=NULL) printf("\'%c\' was found \"%s\".\n", c1, string1);
  else printf( "\'%c\' was not found in \"%s\".\n",c1,string1);
  if(strchr(string1, c2)!=NULL) printf("\'%c\' was found \"%s\".\n", c2, string1);
  else printf( "\'%c\' was not found in \"%s\".\n",c2,string1);

  /* strcspn */
  const char *r1 = "The value is 3.14159", *r2 = "1234567890",
    *r3="A zoo has many animals including zebras", *r4="aehi lsTuv",
    *r5="abcdefabcdef", *r6="def";
  printf("\n**** strcspn ****\nstring1 = %s\nstring2 = %s\n\n",r1,r2);
  printf("The length of the initial segment of string1\n");
  printf("containing no characters from string2 = %u\n", strcspn(r1,r2));
  /*in above use %u in sl6 and %lu in ubunut14.04 */

  /* strpbrk */
  printf("\n**** strpbrk ****\n");
  printf("Of the characters in\"%s\"\n\'%c\' appears earliest in %s\n",
	 string2, *strpbrk(string1, string2), string1);

  /* strrchr */
  printf("\n**** strrchr ****\n");
  printf("THe remainder of r3 beginning with the last occurance of character %c is: \"%s\"\n",
	 c2, strrchr(r3,c2));

  /* strspn */
  printf("\n**** strspn ****\n");
  printf("r1 = %s\nr4=%s\nThe length of the initial segment of r1\n",r1,r4);
  printf("containing only characters from r4 = %u\n", strspn(r1,r4));
  /*in above use %u in sl6 and %lu in ubunut14.04 */

  /* strstr */
  printf("\n**** strstr ****\n");
  printf("r5=%s\nr6=%s\nThe remainder of r5 beginning with the\n",r5,r6);
  printf("first occurrence of r6 is: %s\n",strstr(r5,r6));

  /* strtok */
  printf("\n**** strtoc ****\n");
  char sr1[]="This is a sentence with 7 tokens", *tokenPtr;
  printf("The string to be tokenized is: %s\n",sr1);
  tokenPtr = strtok(sr1, " ");
  while(tokenPtr!= NULL){
    printf("%s\n", tokenPtr);
    tokenPtr = strtok(NULL, " ");
  }
  return 0;
}
/*
sanjeev[130]gcc -o lecture16_5 lecture16_5.c
sanjeev[131]./lecture16_5
**** strcmp ****
s1 = Happy New Year
s2 = Happy New Year
s3 = Happy Holidays

strcmp(s1, s2) =  0
strcmp(s1, s3) =  6
strcmp(s3, s1) = -6


**** strncmp ****
strncmp(s1, s3, 6) =  0
strncmp(s1, s3, 7) =  6
strncmp(s3, s1, 7) = -6

**** strchr ****
'a' was found "This is a test".
'z' was not found in "This is a test".

**** strcspn ****
string1 = The value is 3.14159
string2 = 1234567890

The length of the initial segment of string1
containing no characters from string2 = 13

**** strpbrk ****
Of the characters in"beware"
'a' appears earliest in This is a test

**** strrchr ****
THe remainder of r3 beginning with the last occurance of character z is: "zebras"

**** strspn ****
r1 = The value is 3.14159
r4=aehi lsTuv
The length of the initial segment of r1
containing only characters from r4 = 13

**** strstr ****
r5=abcdefabcdef
r6=def
The remainder of r5 beginning with the
first occurrence of r6 is: defabcdef

**** strtoc ****
The string to be tokenized is: This is a sentence with 7 tokens
This
is
a
sentence
with
7
tokens
sanjeev[132]
*/
