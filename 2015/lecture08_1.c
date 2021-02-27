/* 
   File name: Lecture8_1.c
   Math library functions
*/
#include <stdio.h>
#include <math.h>
int main(){
  float a,b;
  printf("Give a positive real number: ");
  scanf("%f",&a);
  printf("Give a negative real number: ");
  scanf("%f", &b);
  printf("square root of %f = %f\n", a, sqrt(a));
  printf("exponential value of %f = %f\n", a, exp(a));
  printf("exponential value of %f = %f\n", b, exp(b));
  printf("natural logarithm of %f = %f\n", a, log(a));
  printf("logarithm of %f on base 10 is = %f\n",a,log10(a));
  printf("absolute value of %f = %f\n",b,fabs(b));
  printf("absolute value of %f = %f\n",a,fabs(a));
  printf("smallest integer not less than %f = %f\n",a, ceil(a));
  printf("smallest integer not less than %f = %f\n",b, ceil(b));
  printf("largest integer not greater than %f = %f\n",a,floor(a));
  printf("largest integer not greater than %f = %f\n",b,floor(b));
  printf("3 raised to the power 4 is %f\n", pow(3,4));
  printf("remainder of 2.23/1.11 as a floating-point number is %f\n",fmod(2.23, 1.11));
  printf("remainder of 2.23/1.1 as a floating-point number is %f\n",fmod(2.23, 1.1));
  printf("remainder of 2.3/1.11 as a floating-point number is %f\n",fmod(2.3, 1.11));
  printf("trigonometric sine of %f is %f\n",a,sin(a));
  printf("trigonometric cosine of %f is %f\n",a,cos(a));
  printf("trigonometric tangent of %f is %f\n",a,tan(a));
  printf("trigonometric sine inverse of %f is %f\n",a,asin(a));
  printf("trigonometric cosine inverse of %f is %f\n",a,acos(a));
  printf("trigonometric tangent inverse of %f is %f\n",a,atan(a));
  printf("hyperbolic sine of %f is %f\n",a,sinh(a));
  printf("hyperbolic cosine of %f is %f\n",a,cosh(a));
  printf("hyperbolic tangent of %f is %f\n",a,tanh(a));
  printf("hyperbolic sine inverse of %f is %f\n",a,asinh(a));
  printf("hyperbolic cosine inverse of %f is %f\n",a,acosh(a));
  printf("hyperbolic tangent inverse of %f is %f\n",a,atanh(a));

  return 0;
}
/*
sanjeev[47]gcc -o lecture7_3 lecture7_3.c -lm 
sanjeev[48]./lecture7_3
Give a positive real number: 0.5
Give a negative real number: -0.5
square root of 0.500000 = 0.707107
exponential value of 0.500000 = 1.648721
exponential value of -0.500000 = 0.606531
natural logarithm of 0.500000 = -0.693147
logarithm of 0.500000 on base 10 is = -0.301030
absolute value of -0.500000 = 0.500000
absolute value of 0.500000 = 0.500000
smallest integer not less than 0.500000 = 1.000000
smallest integer not less than -0.500000 = -0.000000
largest integer not greater than 0.500000 = 0.000000
largest integer not greater than -0.500000 = -1.000000
3 raised to the power 4 is 81.000000
remainder of 2.23/1.11 as a floating-point number is 0.010000
remainder of 2.23/1.1 as a floating-point number is 0.030000
remainder of 2.3/1.11 as a floating-point number is 0.080000
trigonometric sine of 0.500000 is 0.479426
trigonometric cosine of 0.500000 is 0.877583
trigonometric tangent of 0.500000 is 0.546302
trigonometric sine inverse of 0.500000 is 0.523599
trigonometric cosine inverse of 0.500000 is 1.047198
trigonometric tangent inverse of 0.500000 is 0.463648
hyperbolic sine of 0.500000 is 0.521095
hyperbolic cosine of 0.500000 is 1.127626
hyperbolic tangent of 0.500000 is 0.462117
hyperbolic sine inverse of 0.500000 is 0.481212
hyperbolic cosine inverse of 0.500000 is -nan
hyperbolic tangent inverse of 0.500000 is 0.549306
sanjeev[49]
*/
