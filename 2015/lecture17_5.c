/*
  File name: lecture17_5.c
  Reading formatted input with scanf
*/
#include <stdio.h>
int main(){
  //scanf(<format control string>, <other arguments>);
  /* inputting data with a field width */
  printf("\n**** field width data ****\n");
  int ae1,ae2;
  printf("Enter a six digit integer: ");
  scanf("%2d%d",&ae1,&ae2);
  printf("The integers input were %d and %d\n", ae1, ae2);

  /* reading and discarding characters from the input stream */
  printf("\n**** date formatting ****\n");
  int mm1,dd1,yy1, mm2,dd2,yy2;
  printf("Enter a date in the form mm-dd-yyyy: ");
  scanf("%d%*c%d%*c%d",&mm1, &dd1, &yy1);
  printf("month = %d day = %d year = %d\n\n", mm1, dd1, yy1);
  printf("Enter a date in the form mm/dd/yyyy: ");
  scanf("%d%*c%d%*c%d",&mm2, &dd2, &yy2);
  printf("month = %d day = %d year = %d\n\n", mm2, dd2, yy2);
  return 0;
}
/*
sanjeev[273]gcc -o lecture17_5 lecture17_5.c
sanjeev[274]./lecture17_5

**** field width data ****
Enter a six digit integer: 123456 
The integers input were 12 and 3456

**** date formatting ****
Enter a date in the form mm-dd-yyyy: 10-20-2015
month = 10 day = 20 year = 2015

Enter a date in the form mm/dd/yyyy: 10/20/2015
month = 10 day = 20 year = 2015

sanjeev[275]

*/
