/*
  File name: lecture19_3.c
  Marks inquiry program
*/
#include<stdio.h>
int main(){
  int request, rollno;
  double marks;
  char name[30];
  FILE *marksPtr;
  if((marksPtr=fopen("lecture19.dat","r")) == NULL)
    printf("File could not be opened\n");
  else{
    printf("Enter request\n"
	   " 1 - List students with marks less than 40\n"
	   " 2 - List students with makrs between 40 and 50\n"
	   " 3 - List students with marks greater then 50\n"
	   " 4 - End of run\n? ");
    scanf("%d",&request);
    while(request != 4){
      fscanf(marksPtr, "%d%s%lf", &rollno, name, &marks);
      switch(request){
      case 1:
	printf("Students with marks less then 40:\n");
	while(!feof(marksPtr)){
	  if(marks<40)
	    printf("%-10d%-13s%7.2f\n", rollno, name, marks);
	  fscanf(marksPtr, "%d%s%lf", &rollno, name, &marks);
	}
	break;
      case 2:
	printf("Students with marks between 40 and 50:\n");
	while(!feof(marksPtr)){
	  if(marks>=40 && marks<50)
	    printf("%-10d%-13s%7.2f\n", rollno, name, marks);
	  fscanf(marksPtr, "%d%s%lf", &rollno, name, &marks);
	}
	break;
      case 3:
	printf("Students with marks greater then 50:\n");
	while(!feof(marksPtr)){
	  if(marks>=50)
	    printf("%-10d%-13s%7.2f\n", rollno, name, marks);
	  fscanf(marksPtr, "%d%s%lf", &rollno, name, &marks);
	}
	break;
      }
      rewind(marksPtr); /*return marksPtr to begining of file */
      printf("\n? ");
      scanf("%d", &request);
    }
    printf("End of this run.\n");
    fclose(marksPtr);
  }
  return 0;
}
/*
sanjeev[200]gcc -o lecture19_3 lecture19_3.c
sanjeev[201]./lecture19_3
Enter request
 1 - List students with marks less than 40
 2 - List students with makrs between 40 and 50
 3 - List students with marks greater then 50
 4 - End of run
? 1
Students with marks less then 40:
1         Ambika         32.00
2         Anju           39.00
5         Deepak         37.00
6         Desh           30.00
9         Harshita       37.00

? 2
Students with marks between 40 and 50:
3         Ankita         44.00
7         Dhirty         44.00
8         Govind         48.00

? 3
Students with marks greater then 50:
4         Avita          55.00

? 4
End of this run.
sanjeev[202]


// input file lecture19.dat is as:
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
