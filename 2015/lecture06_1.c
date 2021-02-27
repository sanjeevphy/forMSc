/* 
   Lecture 6
   Learning simple switch-case in c-language
*/
# include <stdio.h>
int main(){
  char x;
  float y1,y2;
  printf("Enter operator either + or - or * or divide : ");
  scanf("%c",&x);
  printf("Enter two operands (real numbers): ");
  scanf("%f%f",&y1,&y2);
  switch(x) {
  case '+':
    printf("%.3f + %.3f = %.3f\n",y1, y2, y1+y2);
    break;
  case '-':
    printf("%.3f - %.1f = %.3f\n",y1, y2, y1-y2);
    break;
  case '*':
    printf("%.3f * %.1f = %.3f\n",y1, y2, y1*y2);
    break;
  case '/':
    printf("%.3f / %.3f = %.3f\n",y1, y2, y1/y2);
    break;
  default:
    /* If operator is other than +, -, * or /, error message is shown */
    printf("Error! operator is not correct\n");
    break;
  }
  return 0;
}

/*
sanjeev[106]gcc lecture6_1.c -o lecture6_1
sanjeev[107]./lecture6_1
Enter operator either + or - or * or divide : -
Enter two operands (real numbers): 3.4 2.6
3.400 - 2.6 = 0.800
sanjeev[108]

*/
