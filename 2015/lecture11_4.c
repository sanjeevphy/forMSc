/*
  File name: lecture11_4.c
  Treating character array as strings
*/
#include <stdio.h>
int main(){
  char s1[20];
  char s2[] = "string literal";
  // here s2 reserve 15 characters; 14 are given above
  // and it ends with a character '\0' known as null character
  printf("Enter a string: ");
  scanf("%s",s1);
  printf("First string: %s\nSecond string: %s\n"
	 "Given string with spaces between characters is:\n",
	 s1,s2);
  int i;
  for(i=0;s1[i] != '\0'; i++){
    printf("%c ", s1[i]);
  }
  printf("\n");
  return 0;
}
/*
sanjeev[160]gcc lecture11_4.c -o lecture11_4
sanjeev[161]./lecture11_4
Enter a string: Hello world
First string: Hello
Second string: string literal
Given string with spaces between characters is:
H e l l o 
sanjeev[162]

*/
