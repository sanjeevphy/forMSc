/* Lecture05_1
   counter-controled repetition
*/
#include <stdio.h>
int main(){
  int counter, grade, total, average;
  total = 0;
  counter =1;
  
  while(counter <=10){
    printf("Enter grade: ");
    scanf("%d", &grade);
    total = total + grade;
    counter = counter + 1;
  }
  average = total / 10;
  printf("Class average is %d\n", average );
  return 0;
}

/*
sanjeev[109]gcc -o lecture05_1 lecture05_1.c
sanjeev[110]./lecture05_1
Enter grade: 98
Enter grade: 83
Enter grade: 87
Enter grade: 71
Enter grade: 76
Enter grade: 94
Enter grade: 79
Enter grade: 82
Enter grade: 57
Enter grade: 90
Class average is 81
sanjeev[111]

*/
