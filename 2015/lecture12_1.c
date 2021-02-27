/*
  File name: lecture12_1.c
  Static local arrays and automatic local arrays
*/
#include <stdio.h>
void staticArrayInit();
void automaticArrayInit();
int main(){
  printf("First call to each function");
  staticArrayInit();
  automaticArrayInit();

  printf("\n\nSecond call to each function");
  staticArrayInit();
  automaticArrayInit();
  printf("\n");
  return 0;
}
void staticArrayInit(){
  static int array1[3];
  int i;
  printf("\nValues of entering staticArrayInit:\n");
  for(i=0; i<=2; i++){
    printf("array1[%d] = %d ",i,array1[i]);
  }
  printf( "\nValues on exiting staticArrayInit:\n" );
  for ( i = 0; i <= 2; i++ ) {
    printf( "array1[ %d ] = %d ", i, array1[ i ] += 5 );
  }
}
void automaticArrayInit(){
  int array2[ 3 ] = { 1, 2, 3 };
  int i;
  printf( "\n\nValues on entering automaticArrayInit:\n" );
  for(i=0; i<3; i++){
    printf("array2[%d] = %d ", i, array2[ i ] );
  }
  printf( "\nValues on exiting automaticArrayInit:\n" );
  for ( i = 0; i < 3; i++ ) {
    printf( "array2[ %d ] = %d ", i, array2[ i ] += 5 );
  }
}
/*

sanjeev[169]gcc lecture12_1.c -o lecture12_1
sanjeev[170]./lecture12_1
First call to each function
Values of entering staticArrayInit:
array1[0] = 0 array1[1] = 0 array1[2] = 0 
Values on exiting staticArrayInit:
array1[ 0 ] = 5 array1[ 1 ] = 5 array1[ 2 ] = 5 

Values on entering automaticArrayInit:
array2[0] = 1 array2[1] = 2 array2[2] = 3 
Values on exiting automaticArrayInit:
array2[ 0 ] = 6 array2[ 1 ] = 7 array2[ 2 ] = 8 

Second call to each function
Values of entering staticArrayInit:
array1[0] = 5 array1[1] = 5 array1[2] = 5 
Values on exiting staticArrayInit:
array1[ 0 ] = 10 array1[ 1 ] = 10 array1[ 2 ] = 10 

Values on entering automaticArrayInit:
array2[0] = 1 array2[1] = 2 array2[2] = 3 
Values on exiting automaticArrayInit:
array2[ 0 ] = 6 array2[ 1 ] = 7 array2[ 2 ] = 8 
sanjeev[171]
*/
