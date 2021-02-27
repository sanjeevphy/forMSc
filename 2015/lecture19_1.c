/*
  File name: lecture19_1.c
  Create a sequential file
*/
#include <stdio.h>
int main(){
  int rollno;
  char name[30];
  double marks;
  FILE *marksPtr;
  if((marksPtr = fopen("lecture19_11.dat", "w"))==NULL){
    printf("File could not be opened\n");
  }else {
    printf( "Enter the roll no., name, and marks.\n" );
    printf( "Enter EOF to end input.\n" );
    printf( "? " );
    scanf( "%d%s%lf", &rollno, name, &marks );
    while(!feof(stdin)){ /* press Ctrl+d for feof */
      fprintf( marksPtr, "%d %s %.2f\n", rollno, name, marks );
      printf("? ");
      scanf("%d%s%lf", &rollno, name, &marks);
    }
    fclose(marksPtr);
  }
  return 0;
}
/*
r    Open an existing file for reading.
w    Create a file for writing. If the file already exists, discard the current contents.
a    Append; open or create a file for writing at the end of the file.
r+   Open an existing file for update (reading and writing).
w+   Create a file for update. If the file already exists, discard the current contents.
a+   Append: open or create a file for update; writing is done at the end of the file.
rb   Open an existing file for reading in binary mode.
wb   Create a file for writing in binary mode. If the file already exists, discard the current contents.
ab   Append; open or create a file for writing at the end of the file in binary mode.
rb+  Open an existing file for update (reading and writing) in binary mode.
wb+  Create a file for update in binary mode. If the file already exists, discard the current contents.
ab+  Append: open or create a file for update in binary mode; writing is done at the end of the file.
*/

/*
// Press Ctrl+d for EOF
sanjeev[170]gcc -o lecture19_1 lecture19_1.c
sanjeev[171]./lecture19_1 
Enter the roll no., name, and marks.
Enter EOF to end input.
? 1 Ambika 32
? 5 Deepak 37
? 20 Naveen 48
? 26 Piyush 50
? 32 Richa 51
? 40 Dinesh 23
? sanjeev[172]./lecture19_1
Enter the roll no., name, and marks.
Enter EOF to end input.
? 2 Anju 39
? 4 Avita 55
? 8 Govind 48
? 17 Manisha 45
? 23 Nikita 40
? 35 Swarnkesh 17
? sanjeev[173]

// A file named lecture19_11.dat created and overwritten
// While running first time it was as:
1 Ambika 32.00
4 Deepak 37.00
20 Naveen 48.00
26 Piyush 50.00
32 Richa 51.00
40 Dinesh 23.00

// while running second time it was as:
2 Anju 39.00
4 Avita 55.00
8 Govind 48.00
17 Manisha 45.00
23 Nikita 40.00
35 Swarnkesh 17.00

*/
