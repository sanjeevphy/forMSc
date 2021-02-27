/*
  File name: lecture20_2.c
  dynamic stack program
*/
#include <stdio.h>
#include <stdlib.h>
struct stackNode{
  int data;
  struct stackNode *nextPtr;
};
typedef struct stackNode StackNode;
typedef StackNode *StackNodePtr;
void push(StackNodePtr *topPtr, int info);
int pop( StackNodePtr *topPtr );
int isEmpty( StackNodePtr topPtr );
void printStack( StackNodePtr currentPtr );
void instructions();
int main(){
  StackNodePtr stackPtr = NULL;
  int choice, value;
  instructions();
  printf("? ");
  scanf("%d", &choice);
  while(choice != 3){
    switch(choice){
    case 1:
      printf("Enter an integer: ");
      scanf("%d", &value);
      push(&stackPtr, value);
      printStack(stackPtr);
      break;
    case 2:
      if( !isEmpty(stackPtr))
	printf("The popped value is %d.\n", pop(&stackPtr));
      printStack(stackPtr);
      break;
    default:
      printf("Invalid choice.\n\n");
      instructions();
      break;
    }
    printf("? ");
    scanf("%d", &choice);
  }
  printf( "End of run.\n" );
  return 0;
}
void instructions(){
  printf( "Enter choice:\n"
	  "1 to push a value on the stack\n"
	  "2 to pop a value off the stack\n"
	  "3 to end program\n");
}
void push(StackNodePtr *topPtr, int info){
  StackNodePtr newPtr;
  newPtr = malloc(sizeof(StackNode));
  if ( newPtr != NULL ) {
    newPtr->data = info;
    newPtr->nextPtr = *topPtr;
    *topPtr = newPtr;
  } else
    printf( "%d not inserted. No memory available.\n", info );
}
int pop( StackNodePtr *topPtr ){
  StackNodePtr tempPtr;
  int popValue;
  tempPtr = *topPtr;
  popValue = ( *topPtr )->data;
  *topPtr = ( *topPtr )->nextPtr;
  free( tempPtr );
  return popValue;
}
void printStack( StackNodePtr currentPtr ){
  if ( currentPtr == NULL ) 
    printf( "The stack is empty.\n\n" );
  else {
    printf( "The stack is:\n" );
    while ( currentPtr != NULL ) { 
      printf( "%d --> ", currentPtr->data );
      currentPtr = currentPtr->nextPtr;
    }
    printf( "NULL\n\n" );
  }
}
int isEmpty( StackNodePtr topPtr ){
  return topPtr == NULL;
}
/*
sanjeev[400]gcc -o lecture20_2 lecture20_2.c
sanjeev[401]./lecture20_2
Enter choice:
1 to push a value on the stack
2 to pop a value off the stack
3 to end program
? 1
Enter an integer: 5
The stack is:
5 --> NULL

? 1
Enter an integer: 7
The stack is:
7 --> 5 --> NULL

? 1
Enter an integer: 6
The stack is:
6 --> 7 --> 5 --> NULL

? 1
Enter an integer: 4
The stack is:
4 --> 6 --> 7 --> 5 --> NULL

? 1
Enter an integer: 5
The stack is:
5 --> 4 --> 6 --> 7 --> 5 --> NULL

? 1
Enter an integer: 3
The stack is:
3 --> 5 --> 4 --> 6 --> 7 --> 5 --> NULL

? 2
The popped value is 3.
The stack is:
5 --> 4 --> 6 --> 7 --> 5 --> NULL

? 2
The popped value is 5.
The stack is:
4 --> 6 --> 7 --> 5 --> NULL

? 2
The popped value is 4.
The stack is:
6 --> 7 --> 5 --> NULL

? 4
Invalid choice.

Enter choice:
1 to push a value on the stack
2 to pop a value off the stack
3 to end program
? 3
End of run.
sanjeev[402]
*/
