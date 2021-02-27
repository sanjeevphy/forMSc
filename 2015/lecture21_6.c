/*
  File name: lecture21_6.c
  Unconditional branching with goto
*/
#include <stdio.h>
int main(){
  int count = 1;
 start: /*defined a label with name start */
  if(count > 10) goto end;
  printf("%d  ", count);
  count++;
  goto start;
 end: /* another lable */
  putchar('\n');

  char x;
  int i=0;
  printf("give a visual character: ");
 a50:
  scanf("%c", &x); i++;
  if(x == '\n' || x == ' ' || x == '\t') goto a50;
  printf("%dth character is visual.\n",i);
  return 0;
}
/*
sanjeev[188]gcc lecture21_6.c -o lecture21_6
sanjeev[189]./lecture21_6
1  2  3  4  5  6  7  8  9  10  
give a visual character:         
  q
5th character is visual.
sanjeev[190]

*/
