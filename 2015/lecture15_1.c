/*
  File name: lecture15_1.c
  Understanding some new functions related to characters 
*/
#include <stdio.h>
#include <ctype.h> /*C Standard Library declares several functions that are useful for testing and mapping characters.*/
int main(){
  printf( "%s\n%s%s\n%s%s\n\n", "According to isdigit: ",
	  isdigit('8') ? "8 is a ": "8 is not a ", "digit",
	  isdigit('#') ? "# is a ": "# is not a ", "digit");
  printf( "%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n", 
	  "According to isalpha:",
	  isalpha( 'A' ) ?  "A is a " : "A is not a ", "letter",
	  isalpha( 'b' ) ?  "b is a " : "b is not a ", "letter",
	  isalpha( '&' ) ?  "& is a " : "& is not a ", "letter",
	  isalpha( '3' ) ?  "3 is a " : "3 is not a ", "letter");
  printf( "%s\n%s%s\n%s%s\n%s%s\n\n", 
	  "According to isalnum:",
	  isalnum( 'A' ) ? "A is a " : "A is not a ", "digit or a letter",
	  isalnum( '&' ) ? "& is a " : "& is not a ", "digit or a letter",
          isalnum( '#' ) ? "# is a " : "# is not a ", "digit or a letter");
  printf( "%s\n%s%s\n%s%s\n%s%s\n%s%s\n%s%s\n", 
	  "According to isxdigit:",
	  isxdigit('F') ? "F is a" : "F is not a", "hexadecimal digit",
	  isxdigit('2') ? "2 is a" : "2 is not a", "hexadecimal digit",
          isxdigit('8') ? "8 is a" : "8 is not a", "hexadecimal digit",
          isxdigit('$') ? "$ is a" : "$ is not a", "hexadecimal digit",
          isxdigit('b') ? "b is a" : "b is not a", "hexadecimal digit");
  printf( "%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n",
	  "According to islower:",
	  islower('p') ? "p is a " : "p is not a ", "lowercase letter",
	  islower('A') ? "A is a " : "A is not a ", "lowercase letter",
          islower('9') ? "9 is a " : "9 is not a ", "lowercase letter",
          islower('!') ? "! is a " : "! is not a ", "lowercase letter");
  printf( "%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n",
	  "According to isupper:",
	  isupper('A') ?  "A is an " : "A is not an ", "uppercase letter",
	  isupper('a') ?  "a is an " : "a is not an ", "uppercase letter",
          isupper('9') ?  "9 is an " : "9 is not an ", "uppercase letter",
          isupper('!') ?  "! is an " : "! is not an ", "uppercase letter");
  printf( "%s%c\n%s%c\n%s%c\n%s%c\n",
	  "u converted to uppercase is ",toupper('u'),
	  "8 converted to uppercase is ",toupper('8'),
          "# converted to uppercase is ",toupper('#'),
          "D converted to uppercase is ",toupper('D'));
  printf( "%s\n%s%s%s\n%s%s%s\n%s%s\n\n",
	  "According to isspace:",
	  "Newline", isspace ('\n') ? " is a " : " is not a ", "whitespace character",
	  "Horizontal tab", isspace( '\t' ) ? " is a " : " is not a ", "whitespace character",
	  isspace( '%' ) ? "% is a " : "% is not a ", "whitespace character");
  printf( "%s\n%s%s%s\n%s%s\n\n", "According to iscntrl:",
	  "Newline", iscntrl('\n') ? " is a " : " is not a ",
	  "control character", iscntrl('$') ? "$ is a " :
	  "$ is not a ", "control character" );
  printf( "%s\n%s%s\n%s%s\n%s%s\n\n", 
	  "According to ispunct:",
	  ispunct(';') ?  "; is a " : "; is not a ", "punctuation character",
	  ispunct('a') ?  "a is a " : "a is not a ", "punctuation character",
          ispunct('#') ?  "# is a " : "# is not a ", "punctuation character");

  printf( "%s\n%s%s\n%s%s%s\n\n", "According to isprint:",
	  isprint('$') ? "$ is a " : "$ is not a ", "printing character",
	  "Alert", isprint('\a') ? " is a " : " is not a ", "printing character" );
  printf( "%s\n%s%s\n%s%s%s\n", "According to isgraph:",
	  isgraph( 'Q' ) ? "Q is a " : "Q is not a ",
	  "printing character other than a space",
	  "Space", isgraph(' ') ? " is a " : " is not a ",
	  "printing character other than a space" );
  
  return 0;
}

/*

sanjeev[141]gcc lecture15_1.c -o lecture15_1
sanjeev[142]./lecture15_1 
According to isdigit: 
8 is a digit
8 is not a digit

According to isalpha:
A is a letter
b is a letter
& is not a letter
3 is not a letter

According to isalnum:
A is a digit or a letter
& is not a digit or a letter
# is not a digit or a letter
<
According to isxdigit:
F is ahexadecimal digit
2 is ahexadecimal digit
8 is ahexadecimal digit
$ is not ahexadecimal digit
b is ahexadecimal digit
According to islower:
p is a lowercase letter
A is not a lowercase letter
9 is not a lowercase letter
! is not a lowercase letter

According to isupper:
A is an uppercase letter
a is not an uppercase letter
9 is not an uppercase letter
! is not an uppercase letter

u converted to uppercase is U
8 converted to uppercase is 8
# converted to uppercase is #
D converted to uppercase is D
According to isspace:
Newline is a whitespace character
Horizontal tab is a whitespace character
% is not a whitespace character

According to iscntrl:
Newline is a control character
$ is not a control character

According to ispunct:
; is a punctuation character
a is not a punctuation character
# is a punctuation character

According to isprint:
$ is a printing character
Alert is not a printing character

According to isgraph:
Q is a printing character other than a space
Space is not a printing character other than a space
sanjeev[143]

*/
