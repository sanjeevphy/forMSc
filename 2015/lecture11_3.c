/*
  File name: lecture11_3.c
  Summarizing the results of rolling die in an array
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 7
int main(){
  int face, roll, frequency[size]={0};
  srand(time(NULL));
  for(roll=1; roll<=6000; roll++){
    face = 1+rand()%6;
    ++frequency[face];
  }
  printf("Face        Frequency\n");
  for(face=1; face<size; face++){
    printf("%4d%17d\n",face, frequency[face]);
  }
  return 0;
}

/*
sanjeev[156]gcc lecture11_3.c -o lecture11_3
sanjeev[157]./lecture11_3
Face        Frequency
   1             1019
   2              958
   3             1022
   4             1015
   5              987
   6              999
sanjeev[158]./lecture11_3
Face        Frequency
   1             1022
   2              985
   3              958
   4             1016
   5             1007
   6             1012
sanjeev[159]

*/
