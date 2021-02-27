/*
  File name: lecture13_2.c
  call to a function using call-by-reference with a pointer argument.
  lowercase to uppercase changes
*/
#include <stdio.h>
void cubefn(int *nPtr); //changed the prototype function
//int cubefn(int n);
void convertUpperCase(char *);
void printCharacters(const char *);
int main(){
  int number = 5;
  printf("The original value of number is %d\n", number);
  cubefn(&number);
  printf("The new value of number is %d\n", number);

  /* Changing upper case and lower case */
  char string[] = "characters and ₹488.5";
  printf("String before conversion is: %s\n", string);
  convertUpperCase(string);
  printf("String after conversion is: %s\n", string);
  
  /* Printing a string using pointer */
  char string2[] = "print characters of a string";
  printf("String is: \n");
  printCharacters( string2 );
  printf("\n");


  return 0;
}
//int cubefn(int n){  return n*n*n;}
void cubefn(int *nPtr){ // changed the fn with pointer.
  *nPtr = *nPtr * *nPtr * *nPtr;
  /* Called function modifies caller's cariable */
}
void convertUpperCase(char *sPtr){
  while(*sPtr != '\0'){
    if(islower(*sPtr)) *sPtr = toupper( *sPtr );
    ++sPtr;
  }
}
void printCharacters(const char *s1ptr){
  for( ; *s1ptr != '\0'; s1ptr++) printf("%c", *s1ptr);
}

/*

sanjeev[110]gcc lecture13_2.c -o lecture13_2
sanjeev[111]./lecture13_2
The original value of number is 5
The new value of number is 125
String before conversion is: characters and ₹488.5
String after conversion is: CHARACTERS AND ₹488.5
String is: 
print characters of a string
sanjeev[112]
*/
