/*
  File name: lecture17_3.c
  Reading formatted input with scanf
*/
#include <stdio.h>
int main(){
  //scanf(<format control string>, <other arguments>);
  /* Using a scan set */
  printf("\n**** scan set ****\n");
  char d1[9];
  printf("Enter string: ");
  scanf("%[abcde]",d1);
  printf("The input was \"%s\"\n",d1);
  return 0;
}
/*
sanjeev[262]gcc -o lecture17_3 lecture17_3.c
sanjeev[263]./lecture17_3

**** scan set ****
Enter string: ababasfba
The input was "ababa"
sanjeev[264]./lecture17_3

**** scan set ****
Enter string: eabhjhjhabc
The input was "eab"
sanjeev[265]

*/
