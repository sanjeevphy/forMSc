/*
  File name: lecture4.c
  Class average / counter-controlled repetition
*/
#include <stdio.h>
int main(){
  int counter, grade, total, average;
  /* here all names are variables of int class */

  total = 0;
  
  for(counter=1; counter<=10; counter++){
    printf("Enter grade: ");
    scanf("%d", &grade);
    total = total + grade;
  }
  average = total/10;
  printf("class average = %d\n", average);
  return 0;
}
/*
sanjeev[76]gcc lecture4.c -o lecture4
sanjeev[77]./lecture4 
Enter grade: 76
Enter grade: 87
Enter grade: 90
Enter grade: 57
Enter grade: 82
Enter grade: 94
Enter grade: 79
Enter grade: 83
Enter grade: 71
Enter grade: 98
class average = 81
sanjeev[78]

*/
