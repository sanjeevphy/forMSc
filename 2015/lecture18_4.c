/*
  File name: lecture18_4.c
  rewrite lecture18_1.c using structure pointer
*/
#include <stdio.h>
#include <string.h>
struct Books{
  char title[50];
  char author[50];
  char subject[50];
  int  book_id;
};
void printbook(int, struct Books *);
int main(){
  struct Books book1, book2;
  /* specification of book1 */
  strcpy(book1.title, "Concepts of Programming Languages");
  strcpy(book1.author, "Robert W. Sebesta");
  strcpy(book1.subject, "Programming languages");
  book1.book_id = 131395319;
  
  /* specification of book2 */
  strcpy(book2.title, "C how to program");
  strcpy(book2.author, "Deitel - Deitel");
  strcpy(book2.subject, "C programming language");
  book2.book_id = 136123562;
  
  /* printing information of book1 */
  printbook(1, &book1);
  
  /* printing information of book2 */
  printbook(2, &book2);
  return 0;
}
void printbook(int i, struct Books *book){
  printf( "book %d title : %s\n", i, book->title);
  printf( "book %d author : %s\n", i, book->author);
  printf( "book %d subject : %s\n", i, book->subject);
  printf( "book %d book_id : %d\n", i, book->book_id);
}

/*
sanjeev[421]gcc -o lecture18_4 lecture18_4.c
sanjeev[422]./lecture18_4
book 1 title : Concepts of Programming Languages
book 1 author : Robert W. Sebesta
book 1 subject : Programming languages
book 1 book_id : 131395319
book 2 title : C how to program
book 2 author : Deitel - Deitel
book 2 subject : C programming language
book 2 book_id : 136123562
sanjeev[423]
*/
