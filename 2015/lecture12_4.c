/*
  File name: lecture12_4.c
  This program sorts an array's values into ascending order
*/
#include <stdio.h>
#define size 10
int main(){
  int a1[size] = {2, 5, 6, 18, 3, 28, 99, 20, 21, 35};
  int p, i, temp;
  printf("Data items in original order\n");
  for(i=0; i<size; i++)printf( "%4d", a1[i] );
  
  // bubble sort
  for(p=1; p<size; p++){
    for(i=0; i<size-1; i++){
      if(a1[i] > a1[i+1]){
	temp=a1[i];
	a1[i]=a1[i+1];
	a1[i+1]=temp;
      }
    }
  }
  printf("\nData items in ascending order\n");
  for(i=0; i<size; i++)printf("%4d", a1[i]);
  printf("\n");
  return 0;
}

/*

sanjeev[267]gcc lecture12_4.c -o lecture12_4
sanjeev[268]./lecture12_4
Data items in original order
   2   5   6  18   3  28  99  20  21  35
Data items in ascending order
   2   3   5   6  18  20  21  28  35  99
sanjeev[269]

*/
