/*
  File name: lecture21_3.c
  Using variable-length argument lists
*/
#include <stdio.h>
#include <stdarg.h> 
/* Header file stdarg.h defines variable type va_list and 3 macros
 which can be used to get arguments in a function when number of 
 arguments is unknown. We give argument as ellipsis (continuous 3 dots)*/
double average(int i, ...);
int main(){
  double x1=37.5, x2 = 22.5, x3=1.7, x4=10.2;
  printf("%s%.1f\n%s%.1f\n%s%.1f\n%s%.1f\n\n",
	 "x1 = ",x1,"x2 = ",x2, "x3 = ", x3, "x4 = ",x4);
  printf("%s%.3f\n%s%.3f\n%s%.3f\n",
	 "The average of x1 and x2 is ", average( 2, x1, x2),
	 "The average of x1, x2 and x3 is ", average(3, x1, x2, x3),
	 "The average of x1, x2, x3 and x4 is ", average(4, x1,x2,x3,x4));
  return 0;
}
double average(int i, ...){
  double total = 0;
  int j;
  va_list ap; 
  va_start(ap, i);
  for (j=1; j<=i; j++) total+= va_arg(ap, double);
  va_end(ap);
  return total/i;
}

/*
sanjeev[114]gcc lecture21_3.c -o lecture21_3
sanjeev[115]./lecture21_3
x1 = 37.5
x2 = 22.5
x3 = 1.7
x4 = 10.2

The average of x1 and x2 is 30.000
The average of x1, x2 and x3 is 20.567
The average of x1, x2, x3 and x4 is 17.975
sanjeev[116]

*/
