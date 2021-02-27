/*
  File name: lecture19-4.c
  Creating a random-access file sequentially
*/
#include <stdio.h>
struct studentData{
  int rollno;
  char lastName[15];
  char firstName[10];
  double marks;
};
int main(){
  int i;
  struct studentData blankStudent = {0, "", "", 0.0};
  FILE *marksPtr;
  if((marksPtr = fopen("lecture19.dat","wb"))==NULL)
    printf("File could not be opened\n");
  else{
    for(i=1; i<=40; i++){
      /* output 40 blank records */
      fwrite(&blankStudent, sizeof(struct studentData), 1, marksPtr);
    }
    fclose(marksPtr);
  }
  return 0;
}
/*
sakumar[233]gcc -o lecture19_4 lecture19_4.c
sakumar[234]./lecture19_4
sakumar[235]

// here a file named lecture19.dat get created. This is a binary file so we can not open it with simple ASCII editors. Please don't delete this file to run further files.
*/
