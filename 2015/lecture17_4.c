/*
  File name: lecture17_4.c
  Reading formatted input with scanf
*/
#include <stdio.h>
int main(){
  //scanf(<format control string>, <other arguments>);
  /* using an inverted scan set */
  printf("\n**** inverted scan set ****\n");
  char d2[9];
  printf( "Enter a string: " );
  scanf( "%[^abcdef]", d2); 
  printf( "The input was \"%s\"\n", d2);
  return 0;
}
/*
sanjeev[268]gcc -o lecture17_4 lecture17_4.c
sanjeev[269]./lecture17_4

**** inverted scan set ****
Enter a string: mnmjikkabac
The input was "mnmjikk"
sanjeev[270]./lecture17_4

**** inverted scan set ****
Enter a string: nmabmnmn
The input was "nm"
sanjeev[271]./lecture17_4

**** inverted scan set ****
Enter a string: nmkazzzzzyyy
The input was "nmk"
sanjeev[272]
*/
