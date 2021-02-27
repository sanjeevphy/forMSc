/*
  Lecture 6 example 2
  Counting letter grades
*/
#include<stdio.h>
int main(){
  int grade, aCount, bCount, cCount, dCount, eCount, fCount;
  aCount = bCount = cCount = dCount = eCount = fCount=0;
  printf("Enter the letter grades.\n");
  printf("Enter EOF character to end the input.\n");
  while((grade = getchar()) != EOF){ // press Ctrl+D for EOF
    switch(grade){
      
    case 'A':
    case 'a':
      ++aCount;
      break;
      
    case 'B':
    case 'b':
      ++bCount;
      break;
      
    case 'C':
    case 'c':
      ++cCount;
      break;
      
    case 'D':
    case 'd':
      ++dCount;
      break;
      
    case 'E':
    case 'e':
      ++eCount;
      break;
      
    case 'F':
    case 'f':
      ++fCount;
      break;
      
    case '\n':
    case '\t':
    case ' ':
      break;
      
    default:
      printf("Incorrect grade entered.");
      printf("Enter new grade.\n");
      break;
    } 
  }
  printf("\nTotals for each letter grade are:\n");
  printf("A: %d\n", aCount);
  printf("B: %d\n", bCount);
  printf("C: %d\n", cCount);
  printf("D: %d\n", dCount);
  printf("E: %d\n", eCount);
  printf("F: %d\n", fCount);

  return 0;
}
/*
sanjeev[13]gcc -o lecture6_2 lecture6_2.c
sanjeev[14]./lecture6_2
Enter the letter grades.
Enter EOF character to end the input.
a
b
c
d
e
f
g
Incorrect grade entered.Enter new grade.
A
D
E
A
A
D
C
B
E
F
A
A
B
B
A
C

 


Totals for each letter grade are:
A: 7
B: 4
C: 3
D: 3
E: 3
F: 2
sanjeev[15]

*/
