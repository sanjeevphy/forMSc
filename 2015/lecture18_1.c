/*
  File name: lecture18_1.c
  structure member and structure pointer operators
*/
#include <stdio.h>
#include <string.h>
struct Books{
  char title[50];
  char author[50];
  char subject[50];
  int  book_id;
};
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
 printf( "book 1 title : %s\n", book1.title);
 printf( "book 1 author : %s\n", book1.author);
 printf( "book 1 subject : %s\n", book1.subject);
 printf( "book 1 book_id : %d\n", book1.book_id);

 /* printing information of book2 */
 printf( "book 2 title : %s\n", book2.title);
 printf( "book 2 author : %s\n", book2.author);
 printf( "book 2 subject : %s\n", book2.subject);
 printf( "book 2 book_id : %d\n", book2.book_id);
 return 0;
}

/*
sanjeev[411]gcc -o lecture18_1 lecture18_1.c
sanjeev[412]gcc -o lecture18_1 lecture18_1.c
sanjeev[413]./lecture18_1 
book 1 title : Concepts of Programming Languages
book 1 author : Robert W. Sebesta
book 1 subject : Programming languages
book 1 book_id : 131395319
book 2 title : C how to program
book 2 author : Deitel - Deitel
book 2 subject : C programming language
book 2 book_id : 136123562
sanjeev[414]
*/
