/*
  File name: lecture13_9.c
  Coping a string using array notation and pointer notation
  And arrays of pointers
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void copy1(char *const string1, const char * const string2);
void copy2(char *string3, const char *string4);
int main(){
  char s1[10], *s2 = "Hello", s3[10], s4[] = "Good Bye";
  /* coping strings */
  copy1(s1, s2);
  printf("string1 = %s\n", s1);
  copy2(s3, s4);
  printf("string3 = %s\n", s3);
}
/* copy string2 to string1 using array notation */
void copy1(char *const string1, const char * const string2){
  int i;
  for(i=0; (string1[i] = string2[i]) != '\0'; i++);
}
/* copy string4 to string3 using pointer notation */
void copy2(char *string3, const char *string4){
  for(; (*string3 = *string4)!= '\0'; string3++, string4++);
}
/*
sanjeev[134]gcc lecture13_9.c -o lecture13_9
sanjeev[135]./lecture13_9
string1 = Hello
string3 = Good Bye
sanjeev[136]

*/
