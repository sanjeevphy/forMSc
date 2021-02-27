/*
  File name: lecture21_4.c
  Using command line arguments
*/
#include <stdio.h>
int main(int argc, char *argv[]){
  FILE *inputPtr, *outputPtr;
  int c;
  if(argc != 3) printf("Usage: ./lecture21_4 input_file_name output_file_name\n");
  else{
    if((inputPtr = fopen(argv[1], "r"))!= NULL)
      if((outputPtr = fopen(argv[2], "w"))!= NULL)
	while(( c = fgetc(inputPtr)) != EOF)fputc(c, outputPtr);
      else printf("File \"%s\" could not be opened\n", argv[2]);
    else printf("File \"%s\" could not be opened\n", argv[1]);
  }
  return 0;
}
/*
sanjeev[155]gcc lecture21_4.c -o lecture21_4
sanjeev[156]./lecture21_4
Usage: ./lecture21_4 input_file_name output_file_name
sanjeev[157]./lecture21_4 inputfile.txt
Usage: ./lecture21_4 input_file_name output_file_name
sanjeev[158]./lecture21_4 inputfile.txt outputfile.txt
File "inputfile.txt" could not be opened
sanjeev[159]./lecture21_4 inputfile.txt outputfile.txt extrafile
Usage: ./lecture21_4 input_file_name output_file_name
sanjeev[160]echo "" > inputfile.txt
sanjeev[161]./lecture21_4 inputfile.txt outputfile.txt
sanjeev[162]


$ echo "" > inputfile.txt
above command is used to create a empty file with name inputfile.txt
Above prgram created an empty outputfile with name outputfile.txt
*/
