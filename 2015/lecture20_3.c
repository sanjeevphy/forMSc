/*
  File name: lecture20_3.c
  Operating and maintaining a queue
*/
#include <stdio.h>
#include <stdlib.h>
struct queueNode{
  char data;
  struct queueNode *nextPtr;
};
typedef struct queueNode QueueNode;
typedef QueueNode *QueueNodePtr;

void printQueue(QueueNodePtr currentPtr);
int isEmpty(QueueNodePtr headPtr);
char dequeue(QueueNodePtr *headPtr, QueueNodePtr *tailPtr);
void enqueue( QueueNodePtr *headPtr, QueueNodePtr *tailPtr, char value );
void instructions();
int main(){
  QueueNodePtr headPtr = NULL;
  QueueNodePtr tailPtr = NULL;
  int choice;
  char item;
  instructions();
  printf("? ");
  scanf("%d", &choice);
  while (choice != 3){
    switch(choice){
    case 1:
      printf( "Enter a character: " );
      scanf("\n%c", &item);
      enqueue( &headPtr, &tailPtr, item );
      printQueue(headPtr);
      break;
    case 2:
      if (!isEmpty(headPtr)){
	item = dequeue(&headPtr, &tailPtr);
	printf("%c has been dequeued.\n", item);
      }
      printQueue(headPtr);
      break;
    default:
      printf("Invalid choice.\n\n");
      instructions();
      break;
    }
    printf("? ");
    scanf("%d", &choice);
  }
  printf("End of run.\n");
  return 0;
}
void instructions(){
  printf ("Enter your choice:\n"
	  " 1 to add an item to the queue\n"
	  " 2 to remove an item from the queue\n"
	  " 3 to end\n" );
}
void enqueue(QueueNodePtr *headPtr, QueueNodePtr *tailPtr, char  value){
  QueueNodePtr newPtr;
  newPtr = malloc(sizeof(QueueNode));
  if(newPtr != NULL){
    newPtr->data = value;
    newPtr->nextPtr = NULL;
    if (isEmpty(*headPtr)){
      *headPtr = newPtr;
    } else {
      (*tailPtr)->nextPtr = newPtr;
    }
    *tailPtr = newPtr;
  } else {
    printf("%c not inserted. No memory available.\n", value);
  }
}
char dequeue( QueueNodePtr *headPtr, QueueNodePtr *tailPtr){
  char value;
  QueueNodePtr tempPtr;
  value = ( *headPtr )->data;
  tempPtr = *headPtr;
  *headPtr = ( *headPtr )->nextPtr;
  if(*headPtr == NULL) *tailPtr = NULL;
  free(tempPtr);
  return value;
}
int isEmpty(QueueNodePtr headPtr){
  return headPtr == NULL;
}
void printQueue(QueueNodePtr currentPtr){
  if (currentPtr == NULL){
    printf("Queue is empty.\n\n");
  } else {
    printf( "The queue is:\n" );
    while(currentPtr != NULL){
      printf("%c --> ", currentPtr->data);
      currentPtr = currentPtr->nextPtr;
    }
    printf( "NULL\n\n" );
  }
}
/*
sanjeev[412]gcc -o lecture20_3 lecture20_3.c
sanjeev[413]./lecture20_3
Enter your choice:
 1 to add an item to the queue
 2 to remove an item from the queue
 3 to end
? 1
Enter a character: A
The queue is:
A --> NULL

? 1
Enter a character: C
The queue is:
A --> C --> NULL

? 1
Enter a character: B
The queue is:
A --> C --> B --> NULL

? 1
Enter a character: B
The queue is:
A --> C --> B --> B --> NULL

? 2
A has been dequeued.
The queue is:
C --> B --> B --> NULL

? 2
C has been dequeued.
The queue is:
B --> B --> NULL

? 4
Invalid choice.

Enter your choice:
 1 to add an item to the queue
 2 to remove an item from the queue
 3 to end
? 2
B has been dequeued.
The queue is:
B --> NULL

? 2
B has been dequeued.
Queue is empty.

? 2
Queue is empty.

? 3
End of run.
sanjeev[414]
*/
