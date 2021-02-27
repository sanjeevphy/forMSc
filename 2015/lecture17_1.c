/*
  File name: lecture17_1.c
  Formatting Output with printf
*/
#include <stdio.h>
int main(){
  //printf(<format control string>, <other arguments>);

  /*printing integers*/
  printf("\n****** printing integers ******\n");
  printf("%d\n", 1729);
  printf("%i\n", 1729);
  printf("%d\n", +1729);
  printf("%d\n", -1729);
  printf("%hd\n", 17290);
  printf("%ld\n", 1729000000L);
  printf("%o\n", 1729);
  printf("%u\n", 1729);
  printf("%u\n", -1729);
  printf("%x\n", 1729);
  printf("%X\n", 1729);

  /*printing floating-point numbers*/
  printf("\n****** printing floating-point numbers ******\n");
  printf("\n%e\n", 1234567.89);
  printf("%e\n", +1234567.89);
  printf("%e\n", -1234567.89);
  printf("%E\n", 1234567.89);
  printf("%f\n", 1234567.89);
  printf("%g\n", 1234567.89);
  printf("%G\n", 1234567.89);

  /* characters and strings */
  printf("\n****** characters and strings ******\n");
  char character = 'A';
  char string[] = "This is a string";
  const char *stringPtr = "This is also a string";
  printf("\n%c\n", character);
  printf("%s\n", "This is inline string");
  printf("%s\n", string);
  printf("%s\n", stringPtr);
  
  /* different type of integers */
  printf("\n****** different type of integers ******\n");
  int *ptr, x=12345, y;
  ptr = &x;
  printf("Value of ptr is %p\n", ptr);
  printf("Address of x is %p\n\n", &x);
  printf("Total characters printed on this line:%n", &y);
  printf("%d\n\n", y);
  y = printf( "This line has 28 characters\n" );
  printf( "%d characters were printed\n\n", y );
  printf( "Printing a %% in a format control string\n" );

  /* integers right-justified */
  printf("\n****** integers right-justified ******\n");
  printf( "\n%4d\n", 1 );
  printf( "%4d\n", 12 );
  printf( "%4d\n", 123 );
  printf( "%4d\n", 1234 );
  printf( "%4d\n\n", 12345 );
  printf( "%4d\n", -1 );
  printf( "%4d\n", -12 );
  printf( "%4d\n", -123 );
  printf( "%4d\n", -1234 );
  printf( "%4d\n", -12345 );

  /* integers and float numbers using precision */
  printf("\n****** integers and float numbers using precision ******\n");
  int i = 1729; float f=1729.756; char s[]="Enjoying days";
  printf( "Using precision for integers\n" );
  printf( "\t%.5d\n\t%.9d\n\n", i, i );
  printf( "Using precision for floating-point numbers\n" );
  printf( "\t%.3f\n\t%.3e\n\t%.3g\n\n", f, f, f );
  printf( "Using precision for strings\n" );
  printf( "\t%.11s\n", s );
  
  /* Right and left justifying values */
  printf("\n****** Right and left justifying values ******\n");
  printf( "%10s%10d%10c%10f\n\n", "hello", 7, 'a', 1.23 );
  printf( "%-10s%-10d%-10c%-10f\n\n", "hello", 7, 'a', 1.23 );

  /*Printing a space before signed values not preceded by + or -*/
  printf("\n****** space before signed values not preceded by + or - ******\n");
  printf("% d\n% d\n",1729, -1729);
  
  /*Using the # flag with conversion specifiers o, x, X and any floating-point specifier*/
  printf("\n****** # flag for o, x, X ******\n");
  printf("%#o\n",1729);
  printf("%#x\n",1729);
  printf("%#X\n",1729);
  printf("%g\n",1729.0);
  printf("%#g\n",1729.0);

  /*  Printing with the 0 (zero) flag fills in leading zeros  */
  printf("\n****** 0 (ZERO) flag ******\n");
  printf("%+09d\n",1729);
  printf("%09d\n",1729);

  /* \f (new page or form feed) => Move the cursor to the start of the next logical page.*/
  printf("\n******\f******\n");
  printf("\\f changes\flogical page.\n");
  return 0;
}
/*
sanjeev[230]gcc -o lecture17_1 lecture17_1.c
sanjeev[231]./lecture17_1

****** printing integers ******
1729
1729
1729
-1729
17290
1729000000
3301
1729
4294965567
6c1
6C1

****** printing floating-point numbers ******

1.234568e+06
1.234568e+06
-1.234568e+06
1.234568E+06
1234567.890000
1.23457e+06
1.23457E+06

****** characters and strings ******

A
This is inline string
This is a string
This is also a string

****** different type of integers ******
Value of ptr is 0x7ffff37399cc
Address of x is 0x7ffff37399cc

Total characters printed on this line:38

This line has 28 characters
28 characters were printed

Printing a % in a format control string

****** integers right-justified ******

   1
  12
 123
1234
12345

  -1
 -12
-123
-1234
-12345

****** integers and float numbers using precision ******
Using precision for integers
01729
000001729

Using precision for floating-point numbers
1729.756
1.730e+03
1.73e+03

Using precision for strings
Enjoying da

****** Right and left justifying values ******
     hello         7         a  1.230000

hello     7         a         1.230000  


****** space before signed values not preceded by + or - ******
 1729
-1729

****** # flag for o, x, X ******
03301
0x6c1
0X6C1
1729
1729.00

****** 0 (ZERO) flag ******
+00001729
000001729

******
******
\f changes
          logical page.
sanjeev[232]
*/
