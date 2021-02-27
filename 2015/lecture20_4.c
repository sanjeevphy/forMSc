/*
  File name: lecture20_4.c
  Create a binary tree and traverse it preorder, inorder, and postorder
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct treeNode{
  struct treeNode *leftPtr;
  int data;
  struct treeNode *rightPtr;
};
typedef struct treeNode TreeNode;
typedef TreeNode *TreeNodePtr;
void insertNode(TreeNodePtr *treePtr, int value );
void inOrder(TreeNodePtr treePtr);
void preOrder(TreeNodePtr treePtr);
void postOrder(TreeNodePtr treePtr);
int main(){
  int i, item;
  TreeNodePtr rootPtr = NULL;
  srand(time(NULL));
  printf("The numbers being placed in the tree are:\n");
  for(i = 1; i <= 10; i++){
    item = rand() % 15;
    printf("%3d",item);
    insertNode(&rootPtr, item);
  }
  printf("\nThe preOrder traversal is:\n");
  preOrder(rootPtr);
  printf("\nThe inOrder traversal is:\n");
  inOrder(rootPtr);
  printf("\n\nThe postOrder traversal is:\n");
  postOrder(rootPtr);
  printf("\n");
  return 0;
}
void insertNode(TreeNodePtr *treePtr, int value){
  if(*treePtr == NULL){
    *treePtr = malloc(sizeof(TreeNode));
    if(*treePtr != NULL){
      (*treePtr)->data = value;
      (*treePtr)->leftPtr = NULL;
      (*treePtr)->rightPtr = NULL;
    } else
      printf( "%d not inserted. No memory available.\n", value );
  } else {
    if(value < ( *treePtr )->data)
      insertNode( &( ( *treePtr )->leftPtr ), value );
    else if(value > (*treePtr)->data)
      insertNode( &((*treePtr)->rightPtr), value);
    else printf("dup");
  }
}
void inOrder(TreeNodePtr treePtr){
  if (treePtr != NULL){
    inOrder( treePtr->leftPtr );
    printf( "%3d", treePtr->data );
    inOrder( treePtr->rightPtr );
  }
}
void preOrder(TreeNodePtr treePtr){
  if(treePtr != NULL){
    printf("%3d", treePtr->data);
    preOrder(treePtr->leftPtr);
    preOrder(treePtr->rightPtr);
  }
}
void postOrder(TreeNodePtr treePtr){
  if(treePtr != NULL){
    postOrder(treePtr->leftPtr);
    postOrder(treePtr->rightPtr);
    printf("%3d", treePtr->data);
  }
}
/*
sanjeev[425]gcc -o lecture20_4 lecture20_4.c
sanjeev[426]./lecture20_4
The numbers being placed in the tree are:
  3  6  1  7  1dup 11 11dup  3dup  8  0
The preOrder traversal is:
  3  1  0  6  7 11  8
The inOrder traversal is:
  0  1  3  6  7  8 11

The postOrder traversal is:
  0  1  8 11  7  6  3
sanjeev[427]./a.out
The numbers being placed in the tree are:
  2 11  5 11dup  9 10  6 10dup  5dup  7
The preOrder traversal is:
  2 11  5  9  6  7 10
The inOrder traversal is:
  2  5  6  7  9 10 11

The postOrder traversal is:
  7  6 10  9  5 11  2
sanjeev[428]
*/
