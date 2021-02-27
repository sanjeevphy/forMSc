/*
  File name: lecture19_7.c
  This program reads a random access file sequentially, updates data
  already written to the file, creates new data to be placed in the
  file, and deletes data previously in the file.
*/
#include <stdio.h>
struct studentData{
  int rollNo;
  char lastName[15], firstName[10];
  double marks;
};
int enterChoice();
void textFile(FILE *readPtr);
void updateRecord(FILE *fPtr);
void newRecord(FILE *fPtr);
void deleteRecord(FILE *fPtr);
int main(){
  FILE *marksPtr;
  int choice;
  if((marksPtr = fopen("lecture19.dat","rb+"))==NULL)
    printf("File could not be opened\n");
  else{
    while((choice = enterChoice()) != 5){
      switch(choice){
      case 1:
	textFile(marksPtr);
	break;
      case 2:
	updateRecord(marksPtr);
	break;
      case 3:
	newRecord(marksPtr);
	break;
      case 4:
	deleteRecord(marksPtr);
	break;
      default:
	printf("Incorrect choice\n");
	break;
      }
    }
    fclose(marksPtr);
  }
  return 0;
}
/* create formatted text file for printing */
void textFile(FILE *readPtr){
  FILE *writePtr;
  struct studentData student = {0, "", "", 0.0};
  if((writePtr = fopen("lecture19.txt", "w")) == NULL)
    printf("File could not be opened.\n");
  else {
    rewind(readPtr); /* sets pointer to beginning of file */
    fprintf(writePtr, "%-10s%-16s%-11s%10s\n", "Roll No.", "Last Name",
	    "First Name", "marks");
    while(!feof(readPtr)){
      fread(&student, sizeof(struct studentData), 1, readPtr);
      if(student.rollNo != 0){
	fprintf(writePtr, "%-10d%-16s%-11s%10.2f\n", student.rollNo,
		student.lastName, student.firstName, student.marks);
      }
    }
    fclose(writePtr);
  }
}
void updateRecord(FILE *fPtr){
  int roll_no;
  double bonus;
  struct studentData student = {0, "", "", 0.0};
  printf("Enter roll number to update (1-40): ");
  scanf("%d",&roll_no);
  fseek(fPtr, (roll_no -1)*sizeof(struct studentData), SEEK_SET);
  fread(&student, sizeof(struct studentData), 1, fPtr);
  if( student.rollNo == 0)
    printf("Rool No. #%d has no information.\n", roll_no);
  else {
    printf("%-8d%-16s%-11s%10.2f\n\n", student.rollNo, student.lastName,
	   student.firstName, student.marks);
    printf("Enter bonus (+) or fine (-): ");
    scanf("%lf", &bonus);
    student.marks  = student.marks + bonus;
    //student.marks+ = bonus;
    printf("%-8d%-16s%-11s%10.2f\n\n", student.rollNo, student.lastName,
	   student.firstName, student.marks);
    fseek(fPtr, (roll_no -1)*sizeof(struct studentData), SEEK_SET);
    fwrite(&student, sizeof(struct studentData), 1, fPtr);
  }
}
void deleteRecord(FILE *fPtr){
  struct studentData student;
  struct studentData blankStudent = {0, "", "", 0};
  int rollnumber;
  printf("Enter roll number to delete (1-40): ");
  scanf("%d", &rollnumber);
  fseek(fPtr, (rollnumber -1)*sizeof(struct studentData), SEEK_SET);
  fread(&student, sizeof(struct studentData), 1, fPtr);
  if( student.rollNo == 0)
    printf("Rool No. #%d has no information.\n", rollnumber);
  else {
    fseek(fPtr, (rollnumber -1)*sizeof(struct studentData), SEEK_SET);
    fwrite(&blankStudent, sizeof(struct studentData), 1, fPtr);
  }
}
void newRecord(FILE *fPtr){
  struct studentData student = {0, "", "", 0};
  int rollnumber;
  printf("Enter roll number to delete (1-40): ");
  scanf("%d", &rollnumber);
  fseek(fPtr, (rollnumber -1)*sizeof(struct studentData), SEEK_SET);
  fread(&student, sizeof(struct studentData), 1, fPtr);
  if( student.rollNo != 0)
    printf("Roll number #%d already contains information.\n", student.rollNo);
  else{
    printf("Enter lastname, firstname, marks\n? ");
    scanf("%s%s%lf", student.lastName, student.firstName, &student.marks);
    student.rollNo = rollnumber;
    fseek(fPtr, (rollnumber -1)*sizeof(struct studentData), SEEK_SET);
    fwrite(&student, sizeof(struct studentData), 1, fPtr);
  }
}
int enterChoice(){
  int menuChoice;
  printf("\nEnter your choice\n1 - store a formatted text file "
	 "of marks called\n   \"lecture19.txt\" for printing\n"
	 "2 - update an roll number\n"
	 "3 - add a new roll number\n"
	 "4 - delete a roll number\n"
	 "5 - end program\n? ");
  scanf("%d", &menuChoice);
  return menuChoice;
}

/*
sanjeev[373]gcc -o lecture19_7 lecture19_7.c
sanjeev[374]./lecture19_7

Enter your choice
1 - store a formatted text file of marks called
   "lecture19.txt" for printing
2 - update an roll number
3 - add a new roll number
4 - delete a roll number
5 - end program
? 1

Enter your choice
1 - store a formatted text file of marks called
   "lecture19.txt" for printing
2 - update an roll number
3 - add a new roll number
4 - delete a roll number
5 - end program
? 2
Enter roll number to update (1-40): 1
1       Nehra           Ambika          32.00

Enter bonus (+) or fine (-): 20
1       Nehra           Ambika          52.00


Enter your choice
1 - store a formatted text file of marks called
   "lecture19.txt" for printing
2 - update an roll number
3 - add a new roll number
4 - delete a roll number
5 - end program
? 2
Enter roll number to update (1-40): 1
1       Nehra           Ambika          52.00

Enter bonus (+) or fine (-): -20
1       Nehra           Ambika          32.00


Enter your choice
1 - store a formatted text file of marks called
   "lecture19.txt" for printing
2 - update an roll number
3 - add a new roll number
4 - delete a roll number
5 - end program
? 3
Enter roll number to delete (1-40): 6
Enter lastname, firstname, marks
? Meena Deepak 30

Enter your choice
1 - store a formatted text file of marks called
   "lecture19.txt" for printing
2 - update an roll number
3 - add a new roll number
4 - delete a roll number
5 - end program
? 3
Enter roll number to delete (1-40): 3
Enter lastname, firstname, marks
? Agarwal Ankita 44

Enter your choice
1 - store a formatted text file of marks called
   "lecture19.txt" for printing
2 - update an roll number
3 - add a new roll number
4 - delete a roll number
5 - end program
? 3
Enter roll number to delete (1-40): 3
Roll number #1389969528 already contains information.

Enter your choice
1 - store a formatted text file of marks called
   "lecture19.txt" for printing
2 - update an roll number
3 - add a new roll number
4 - delete a roll number
5 - end program
? 4
Enter roll number to delete (1-40): 2 

Enter your choice
1 - store a formatted text file of marks called
   "lecture19.txt" for printing
2 - update an roll number
3 - add a new roll number
4 - delete a roll number
5 - end program
? 5
sanjeev[375]more lecture19.txt
Roll No.  Last Name       First Name      marks
1         Nehra           Ambika          32.00
2         Choudhary       Anju            39.00
8         Sharma          Govind          48.00
20        Tailor          Naveen          48.00
25        Khuteta         Payal           48.00
34        Singh           Satpal          44.00
37        Meena           Varsha          39.00
sanjeev[376]./lecture19_7

Enter your choice
1 - store a formatted text file of marks called
   "lecture19.txt" for printing
2 - update an roll number
3 - add a new roll number
4 - delete a roll number
5 - end program
? 1

Enter your choice
1 - store a formatted text file of marks called
   "lecture19.txt" for printing
2 - update an roll number
3 - add a new roll number
4 - delete a roll number
5 - end program
? 5
sanjeev[377]more lecture19.txt
Roll No.  Last Name       First Name      marks
1         Nehra           Ambika          32.00
3         Agarwal         Ankita          44.00
6         Meena           Deepak          30.00
8         Sharma          Govind          48.00
20        Tailor          Naveen          48.00
25        Khuteta         Payal           48.00
34        Singh           Satpal          44.00
37        Meena           Varsha          39.00
sanjeev[378]
*/
