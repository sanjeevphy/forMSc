/*
  File name: lecture14_2.c
  sorting program using function pointers
*/
#include <stdio.h>
#define SIZE 10
void bubble( int work[], const int size, int (*compare)(int a, int b));
int ascending( int a, int b );
int descending( int a, int b );
int main(){
  int order, counter;
  int a[ SIZE ] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
  printf( "Enter 1 to sort in ascending order,\n"
	  "Enter 2 to sort in descending order: " );
  scanf( "%d", &order );
  printf( "\nData items in original order\n" );
  for(counter = 0; counter < SIZE; counter++ ) printf( "%5d", a[counter]);
  
  if ( order == 1 ){
    bubble(a, SIZE, ascending);
    printf( "\nData items in ascending order\n" );
  }else{
    bubble(a, SIZE, descending);
    printf( "\nData items in descending order\n" );
  }

  /* output sorted array */
  for ( counter = 0; counter < SIZE; counter++ ) printf( "%5d", a[ counter ] );
  printf( "\n" );
  return 0;
}
void bubble( int work[], const int size, int (*compare)(int a, int b)){
  int pass, count;
  void swap( int *element1Ptr, int *element2ptr );
  for ( pass = 1; pass < size; pass++ ) {
    for ( count = 0; count < size - 1; count++ ) {
      if ( (*compare)(work[count], work[count+1])) {
	swap( &work[ count ], &work[ count + 1 ] );
      }
    }
  }
}
void swap( int *element1Ptr, int *element2Ptr ){
   int hold;
   hold = *element1Ptr;
   *element1Ptr = *element2Ptr;
   *element2Ptr = hold;
}
int ascending( int a, int b )
{
  return b < a;
}
int descending( int a, int b )
{
  return b > a;
} 
/*
sanjeev[29]gcc lecture14_2.c -o lecture14_2
sanjeev[30]./lecture14_2
Enter 1 to sort in ascending order,
Enter 2 to sort in descending order: 1

Data items in original order
    2    6    4    8   10   12   89   68   45   37
Data items in ascending order
    2    4    6    8   10   12   37   45   68   89
sanjeev[31]./lecture14_2
Enter 1 to sort in ascending order,
Enter 2 to sort in descending order: 2

Data items in original order
    2    6    4    8   10   12   89   68   45   37
Data items in descending order
   89   68   45   37   12   10    8    6    4    2
sanjeev[32]


*/
