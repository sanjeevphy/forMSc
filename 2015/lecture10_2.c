/*
  File name: lecture10_2.c
  program for rolling a six-sided die 10000 times
  random number generator, scaled
*/
#include <stdio.h>
#include <stdlib.h> //header file for function rand(), srand();
int main(){
  int i1,i2,i3,i4,i5,i6,ij;
  i1=i2=i3=i4=i5=i6=0;
  int face;
  for(ij=1; ij<=10000; ij++){
    face= 1+(rand()%6);
    switch(face){
    case 1: ++i1; break;
    case 2: ++i2; break;
    case 3: ++i3; break;
    case 4: ++i4; break;
    case 5: ++i5; break;
    case 6: ++i6; break;
    }
  }
  printf("%s%13s\n","Face", "Frequency");
  printf("   1%13d\n",i1);
  printf("   2%13d\n",i2);
  printf("   3%13d\n",i3);
  printf("   4%13d\n",i4);
  printf("   5%13d\n",i5);
  printf("   6%13d\n",i6);
  return 0;
}
/*

sakumar[262]gcc lecture10_2.c -o lecture10_2
sakumar[263]./lecture10_2
Face    Frequency
   1         1651
   2         1622
   3         1743
   4         1673
   5         1693
   6         1618
sakumar[264]

*/
