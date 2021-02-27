/*
  File name: lecture13_6.c
  Bubble sorting using call-by-reference
*/
#include <stdio.h>
#define SIZE 10
void bubbleSort( int * const array, const int size);
int main(){
  int a[SIZE] = {2, 4, 9, 10, 14, 38, 13, 18, 7, 11};
  int i;
  printf("Data items in original order:\n");
  for(i=0; i<SIZE; i++)printf("%4d", a[i]);
  bubbleSort(a, SIZE);
  printf("\nData items in assending order\n");
  for(i=0; i<SIZE; i++)printf("%4d", a[i]);
  printf("\n");
  return 0;
}
void bubbleSort(int * const array, const int size){
  void swap(int *element1Ptr, int *element2Ptr); // prototype
  int p, j;
  for(p = 0; p < size - 1; p++){
    for(j=0; j<size-1; j++){
      if(array[j]>array[j+1]) swap(&array[j], &array[j+1]);
    }
  }
}
void swap(int *element1Ptr, int *element2Ptr){
  int temp = *element1Ptr;
  *element1Ptr = *element2Ptr;
  *element2Ptr = temp;
}

/*
sanjeev[119]gcc lecture13_6.c -o lecture13_6
sanjeev[120]./lecture13_6
Data items in original order:
   2   4   9  10  14  38  13  18   7  11
Data items in assending order
   2   4   7   9  10  11  13  14  18  38
sanjeev[121]
*/
