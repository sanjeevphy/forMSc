/*
  File name: lecture19_2.c
  Reading and printing sequential file
*/
#include <stdio.h>
int main(){
  int rollno;
  char name[30];
  double marks;
  FILE *marksPtr;
  if((marksPtr = fopen("lecture19.dat","r"))==NULL)
    printf("File could not be opened\n");
  else {
    printf("%-10s%-13s%s\n", "Roll No.", "Name", "Marks");
    fscanf(marksPtr, "%d%s%lf", &rollno, name, &marks);
    while(!feof(marksPtr)){
      printf( "%-10d%-13s%7.2f\n", rollno, name, marks);
      fscanf(marksPtr, "%d%s%lf", &rollno, name, &marks);
    }
    fclose(marksPtr);
  }
  return 0;
}
/*

sanjeev[183]gcc -o lecture19_2 lecture19_2.c
sanjeev[184]./lecture19_2
File could not be opened
sanjeev[185]emacs lecture19.dat
// Wrote this file and closed after saving it and run again
sanjeev[186]./lecture19_2
Roll No.  Name         Marks
1         Ambika         32.00
2         Anju           39.00
3         Ankita         44.00
4         Avita          55.00
5         Deepak         37.00
6         Desh           30.00
7         Dhirty         44.00
8         Govind         48.00
9         Harshita       37.00
sanjeev[187]

// Here file lecture19.dat is as:
1 Ambika 32
2 Anju 39
3 Ankita 44
4 Avita 55
5 Deepak 37
6 Desh 30
7 Dhirty 44
8 Govind 48
9 Harshita 37


*/
