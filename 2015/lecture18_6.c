/*
  File name: lecture18_1.c
  crating synonyms using structure pointer operators
*/
#include <stdio.h>
#include <string.h>
typedef struct Books{
  char title[50];
  char author[50];
  char subject[50];
  int  book_id;
}Book;
int main(){
  Book book;
  
  strcpy(book.title, "C how to program");
  strcpy(book.author, "Deitel - Deitel");
  strcpy(book.subject, "C programming language");
  book.book_id = 136123562;
  
  printf( "book title : %s\n", book.title);
  printf( "book author : %s\n", book.author);
  printf( "book subject : %s\n", book.subject);
  printf( "book book_id : %d\n", book.book_id);
  return 0;
}

/*
sanjeev[427]gcc -o lecture18_1 lecture18_6.c
sanjeev[428]./lecture18_1
book title : C how to program
book author : Deitel - Deitel
book subject : C programming language
book book_id : 136123562
sanjeev[429]
*/
