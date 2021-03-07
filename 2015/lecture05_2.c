/* Lecture05_2
   counter-controled repetition
*/
#include <stdio.h>
int main(){
  int counter, grade, total;
  float average;
  total = 0;
  counter =0;
  
  printf("Enter grade, -1 to end: ");
  scanf("%d", &grade);
  while(grade != -1){
    total = total + grade;
    counter = counter + 1;
    printf("Enter grade, -1 to end: ");
    scanf("%d", &grade);
  }
  
  if(counter != 0){
    average = (float) total/counter;
    printf("Class average = %.3f\n", average);
  } else printf("No grades were entered.\n");

  return 0;
}

/*
sanjeev[121]gcc -o lecture05_2 lecture05_2.c
sanjeev[122]./lecture05_2 
Enter grade, -1 to end: 86
Enter grade, -1 to end: 84
Enter grade, -1 to end: 28 
Enter grade, -1 to end: 85
Enter grade, -1 to end: 75
Enter grade, -1 to end: 77
Enter grade, -1 to end: 89
Enter grade, -1 to end: 93
Enter grade, -1 to end: 92
Enter grade, -1 to end: 67
Enter grade, -1 to end: 83
Enter grade, -1 to end: 86
Enter grade, -1 to end: 84
Enter grade, -1 to end: 83
Enter grade, -1 to end: 90
Enter grade, -1 to end: -1
Class average = 80.133
sanjeev[123]./lecture05_2
Enter grade, -1 to end: -1
No grades were entered.
sanjeev[124]

*/
