/*
  File name: lecture14_3.c
  Using Function Pointers to Create a Menu-Driven System
  Demonstrating an array of pointers to functions
*/
#include <stdio.h>
void f1(int a);
void f2(int b);
void f3(int c);
int main(){
  void(*f[3])(int) = {f1, f2, f3};
  int choice;
  printf("Enter a number between 0 and 2, 3 to end: ");
  scanf("%d", &choice);
  while(choice >= 0 && choice < 3){
    (*f[ choice ])( choice );
    printf("Enter a number between 0 and 2, 3 to end: ");
    scanf( "%d", &choice);
  }
  printf( "Program execution completed.\n" );
  return 0;
}
void f1(int a){
  printf( "You entered %d so f1 was called\n\n", a );
}
void f2(int a){
  printf( "You entered %d so f2 was called\n\n", a );
}
void f3(int a){
  printf( "You entered %d so f3 was called\n\n", a );
}

/*

sanjeev[118]gcc lecture14_3.c -o lecture14_3
sanjeev[119]./lecture14_3 
Enter a number between 0 and 2, 3 to end: 0
You entered 0 so f1 was called

Enter a number between 0 and 2, 3 to end: 1
You entered 1 so f2 was called

Enter a number between 0 and 2, 3 to end: 2
You entered 2 so f3 was called

Enter a number between 0 and 2, 3 to end: 3
Program execution completed.
sanjeev[120]./lecture14_3 
Enter a number between 0 and 2, 3 to end: 2
You entered 2 so f3 was called

Enter a number between 0 and 2, 3 to end: 3
Program execution completed.
sanjeev[121]

*/
