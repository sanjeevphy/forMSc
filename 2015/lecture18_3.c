/*
  File name: lecture18_3.c
  Enumeration type use of class
*/
#include <stdio.h>
enum months{JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };
int main(){
  enum months m;
  const char *mName[] = {"", "January", "February", "March", "April",
			 "May", "June", "July", "August", "September",
			 "October", "November", "December"};
  for(m=JAN; m<=DEC; m++){
    printf("%2d%11s\n", m, mName[m]);
  }
  return 0;
}
/*
sanjeev[418]gcc -o lecture18_3 lecture18_3.c
sanjeev[419]./lecture18_3
 1    January
 2   February
 3      March
 4      April
 5        May
 6       June
 7       July
 8     August
 9  September
10    October
11   November
12   December
sanjeev[420]
*/
