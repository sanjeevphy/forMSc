/*
  File name: lecture20_1.c
  Operating and maintaining a list
*/
#include <stdio.h>
#include <stdlib.h>
struct listNode{
  char data;
  struct listNode *nextPtr;
};
typedef struct listNode ListNode;
typedef ListNode *ListNodePtr;
void insert(ListNodePtr *sPtr, char value);
char delete(ListNodePtr *sPtr, char value);
int isEmpty(ListNodePtr sPtr);
void printList(ListNodePtr currentPtr);
void instructions();
int main(){
  ListNodePtr startPtr = NULL;
  int choice;
  char item;
  instructions();
  printf("? ");
  scanf("%d", &choice);
  while(choice != 3){
    switch(choice){
    case 1:
      printf("Enter a character: ");
      scanf("\n%c", &item);
      insert(&startPtr, item);
      printList(startPtr);
      break;
    case 2:
      if(!isEmpty(startPtr)){
	printf("Enter character to be deleted: ");
	scanf("\n%c", &item);
	if(delete(&startPtr, item)){
	  printf("%c delete.\n", item);
	  printList( startPtr );
	} else printf( "%c not found.\n\n", item );
      } else printf( "List is empty.\n\n" );
      break;
    default:
      printf( "Invalid choice.\n\n" );
      instructions();
      break;
    }
    printf("? ");
    scanf("%d", &choice);
  }
  printf("End of run.\n");
  return 0;
}
void instructions( void ){
  printf( "Enter your choice:\n"
	  " 1 to insert an element into the list.\n"
	  " 2 to delete an element from the list.\n"
	  " 3 to end.\n" );
}
void insert( ListNodePtr *sPtr, char value ){
  ListNodePtr newPtr, previousPtr, currentPtr;
  newPtr = malloc( sizeof( ListNode ) );
  if ( newPtr != NULL ) {
    newPtr->data = value;
    newPtr->nextPtr = NULL;
    previousPtr = NULL;
    currentPtr = *sPtr;
    while ( currentPtr != NULL && value > currentPtr->data ) {
      previousPtr = currentPtr;
      currentPtr = currentPtr->nextPtr;
    }
    if ( previousPtr == NULL ) {
      newPtr->nextPtr = *sPtr;
      *sPtr = newPtr;
    } else {
      previousPtr->nextPtr = newPtr;
      newPtr->nextPtr = currentPtr;
    }
  } else {
    printf( "%c not inserted. No memory available.\n", value );
  }
}
char delete( ListNodePtr *sPtr, char value ){
  ListNodePtr previousPtr, currentPtr, tempPtr;
  if (value == (*sPtr)->data) {
    tempPtr = *sPtr;
    *sPtr = (*sPtr)->nextPtr;
    free(tempPtr);
    return value;
  } else {
    previousPtr = *sPtr;
    currentPtr = ( *sPtr )->nextPtr;
    while ( currentPtr != NULL && currentPtr->data != value ) {
      previousPtr = currentPtr;
      currentPtr = currentPtr->nextPtr;
    }
    if ( currentPtr != NULL ) {
      tempPtr = currentPtr;
      previousPtr->nextPtr = currentPtr->nextPtr;
      free(tempPtr);
      return value;
    }
  }
  return '\0';
}
int isEmpty( ListNodePtr sPtr ){
  return sPtr == NULL;
}
void printList( ListNodePtr currentPtr ){
  if ( currentPtr == NULL )
    printf("List is empty.\n\n");
  else {
    printf( "The list is:\n" );
    while ( currentPtr != NULL ) { 
      printf( "%c --> ", currentPtr->data );
      currentPtr = currentPtr->nextPtr;
    }
    printf("NULL\n\n");
  }
}
/*
sanjeev[395]gcc -o lecture20_1 lecture20_1.c
sanjeev[396]./lecture20_1
Enter your choice:
 1 to insert an element into the list.
 2 to delete an element from the list.
 3 to end.
? 1
Enter a character: B
The list is:
B --> NULL

? 1
Enter a character: A
The list is:
A --> B --> NULL

? 1
Enter a character: C
The list is:
A --> B --> C --> NULL

? 1
Enter a character: D
The list is:
A --> B --> C --> D --> NULL

? 1
Enter a character: H
The list is:
A --> B --> C --> D --> H --> NULL

? 1
Enter a character: F
The list is:
A --> B --> C --> D --> F --> H --> NULL

? 1
Enter a character: E
The list is:
A --> B --> C --> D --> E --> F --> H --> NULL

? 1
Enter a character: G
The list is:
A --> B --> C --> D --> E --> F --> G --> H --> NULL

? 2
Enter character to be deleted: I
I not found.

? 2
Enter character to be deleted: J
J not found.

? 2
Enter character to be deleted: B
B delete.
The list is:
A --> C --> D --> E --> F --> G --> H --> NULL

? 2
Enter character to be deleted: C
C delete.
The list is:
A --> D --> E --> F --> G --> H --> NULL

? 4
Invalid choice.

Enter your choice:
 1 to insert an element into the list.
 2 to delete an element from the list.
 3 to end.
? 3
End of run.
sanjeev[397]
*/
