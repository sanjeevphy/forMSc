/*
  File name: lecture3_3.c
  If statement
*/
#include <stdio.h>
int main(){ //starting of c-program
  float grade;
  printf("Give your grade: ");
  scanf("%f",&grade);
  if(grade >= 90) printf("Your grade is O (outstanding).\n");
  if(grade<90 && grade>=80) printf("Your grade is A (Very good).\n");
  if(grade<80 && grade>=70) printf("Your grade is B (Good).\n");
  if(grade<70 && grade>=60) printf("Your grade is C (Normal).\n");
  if(grade<60 && grade>=50) printf("Your grade is D (Bad).\n");
  if(grade<50) printf("You are failed.\n");
  return 0;
}
/*
sanjeev[62]gcc lecture3_3.c -o lecture3_3
sanjeev[63]./lecture3_3 
Give your grade: 95
Your grade is O (outstanding).
sanjeev[64]./lecture3_3 
Give your grade: 90
Your grade is O (outstanding).
sanjeev[65]./lecture3_3 
Give your grade: 49
You are failed.
sanjeev[66]./lecture3_3 
Give your grade: 62
Your grade is C (Normal).
sanjeev[67]./lecture3_3 
Give your grade: 88
Your grade is A (Very good).
sanjeev[68]

*/
