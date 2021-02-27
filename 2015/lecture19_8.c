/*
  File name: lecture19_8.c
  Simple file input-output
*/
#include <stdio.h>
void gotoxy(int x, int y)
{
  printf("\033[%d;%df", y, x);
  //fflush(stdout);
}
int main(){
  int n, i1,i2, a[3][3], b[3][3], c[3][3];
  FILE *inptr, *outptr;
  inptr  = fopen("lecture19_8i.dat","r");
  outptr = fopen("lecture19_8o.dat","w");
  if(inptr == NULL){
    printf("Unable to open \"lecture19_8i.dat\"\n");
    //exit(1):
    return;
  }
  if(outptr==NULL){
    printf("Unable to create file!\n");
  } else {
    //gotoxy(40,13);
    printf("File opened succesfully.\n");
    for(i1=0; i1<3; i1++)
      for(i2=0; i2<3; i2++)fscanf(inptr, "%d", &a[i1][i2]);
    for(i1=0; i1<3; i1++)
      for(i2=0; i2<3; i2++)fscanf(inptr, "%d", &b[i1][i2]);
    for(i1=0; i1<3; i1++){
      for(i2=0; i2<3; i2++)
	fprintf(outptr, "%d ", a[i1][i2]+b[i1][i2]);
      fprintf(outptr, "\n");
    }
    fclose(inptr);
    fclose(outptr);
  }
  return 0;
}
/*
sanjeev[216]gcc -o lecture19_8 lecture19_8.c
sanjeev[217]./lecture19_8
Unable to open "lecture19_8i.dat"
sanjeev[218]emacs -nw lecture19_8i.dat
sanjeev[219]./lecture19_8






                                       File opened succesfully.
sanjeev[220]


// lecture19_8i.dat is as:
1 2 3
4 5 6
7 8 9

11 21 31
77 78 79
61 55 50


// Output file after running is as:
12 23 34 
81 83 85 
68 63 59 

*/
