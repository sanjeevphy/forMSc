/*
  File name: lecture19_6.c
  Writing to a random access file
*/
#include<stdio.h>
struct studentData{
  int rollno;
  char lastName[15];
  char firstName[10];
  double marks;
};
int main(){
  FILE *marksPtr;
  struct studentData student = {0, "", "", 0.0};
  if((marksPtr = fopen("lecture19.dat","rb"))==NULL)
    printf("File could not be opened\n");
  else{
    printf("%-8s%-16s%-11s%10s\n", "Roll no", "Last name",
	   "First name", "Marks");
    
    while(!feof( marksPtr )){
      fread( &student, sizeof(struct studentData), 1, marksPtr);
      if(student.rollno != 0)
	printf("%-8d%-16s%-11s%10.2f\n", student.rollno,
	       student.lastName, student.firstName, student.marks);
    }
    fclose(marksPtr);
  }
  return 0;
}
/*
// It uses the file created with program lecture19_5.c
sanjeev[246]gcc -o lecture19_6 lecture19_6.c
sanjeev[247]./lecture19_6
Roll no Last name       First name      Marks
1       Nehra           Ambika          32.00
2       Choudhary       Anju            39.00
8       Sharma          Govind          48.00
20      Tailor          Naveen          48.00
25      Khuteta         Payal           48.00
34      Singh           Satpal          44.00
37      Meena           Varsha          39.00
sanjeev[248]

*/
