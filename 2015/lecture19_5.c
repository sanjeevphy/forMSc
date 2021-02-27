/*
  File name: lecture19_5.c
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
  if((marksPtr = fopen("lecture19.dat","rb+"))==NULL)
    printf("File could not be opened\n");
  else{
    printf("Enter roll number (1 to 40, 0 to end input)\n");
    scanf("%d", &student.rollno);
    while(student.rollno != 0){
      printf("Enter lastname, firstname, marks\n? ");
      fscanf(stdin, "%s%s%lf", student.lastName, student.firstName,
	     &student.marks);
      /* seek position in file to user-specified record */
      fseek(marksPtr, (student.rollno -1) * sizeof(struct studentData),
	    SEEK_SET);
      /*SEEK_SET is a constant which describe the position from the
	where offset is added. Different constants are as:
	SEEK_SET: Begining of file
	SEEK_CUR: Current position of the file pointer
	SEEK_END: End of file */
      fwrite(&student, sizeof(struct studentData), 1, marksPtr);
      printf("Enter roll number\n? ");
      scanf("%d", &student.rollno);
    }
    fclose(marksPtr);
  }
  return 0;
}
/*
sakumar[244]gcc -o lecture19_5 lecture19_5.c
sakumar[245]./lecture19_5
Enter roll number (1 to 40, 0 to end input)
1
Enter lastname, firstname, marks
? Nehra Ambika 32
Enter roll number
? 2
Enter lastname, firstname, marks
? Choudhary Anju 39
Enter roll number
? 8
Enter lastname, firstname, marks
? Sharma Govind 48
Enter roll number
? 20
Enter lastname, firstname, marks
? Tailor Naveen 48
Enter roll number
? 25
Enter lastname, firstname, marks
? Khuteta Payal 48
Enter roll number
? 34
Enter lastname, firstname, marks
? Singh Satpal 44
Enter roll number
? 37
Enter lastname, firstname, marks
? Meena Varsha 39
Enter roll number
? 0
sakumar[246]
*/
