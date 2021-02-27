/*
  File name: lecture17_2.c
  Reading formatted input with scanf
*/
#include <stdio.h>
int main(){
  //scanf(<format control string>, <other arguments>);
  /* reading integers */
  printf("\n**** reading integers ****\n");
  int a1,a2,a3,a4,a5,a6,a7;
  printf("Enter seven integers: ");
  scanf("%d%i%i%i%o%u%x", &a1, &a2, &a3, &a4, &a5, &a6, &a7);
  printf("The input displayed as decimal integers is:\n");
  printf("%d %d %d %d %d %d %d\n", a1,a2,a3,a4,a5,a6,a7);

  /* reading floating-point numbers */
  printf("\n**** floating-point numbers ****\n");
  double b1,b2,b3;
  printf("Enter three floating-point numbers: \n");
  scanf("%le%lf%lg",&b1,&b2,&b3);
  printf("Here are the numbers entered in plain floating-point notation:\n");
  printf( "%f\n%f\n%f\n", b1, b2, b3 );

  /* reading characters and strings */
  printf("\n**** characters and strings ****\n");
  printf("Enter a string: ");
  char c1, c2[9];
  scanf("%c",&c1);/* to ignore previous \n */
  scanf("%c%s",&c1,c2);
  printf("The input was:\nthe character \"%c\" and the string \"%s\"\n",c1,c2);
  return 0;
}
/*
sanjeev[249]gcc -o lecture17_2 lecture17_2.c
sanjeev[250]./lecture17_2

**** reading integers ****
Enter seven integers: -172 -172 0172 0x172 172 172 172
The input displayed as decimal integers is:
-172 -172 122 370 122 172 370

**** floating-point numbers ****
Enter three floating-point numbers: 
1.729 1.729e+03 1.729e-06
Here are the numbers entered in plain floating-point notation:
1.729000
1729.000000
0.000002

**** characters and strings ****
Enter a string: Monday
The input was:
the character "M" and the string "onday"
sanjeev[251]

*/
