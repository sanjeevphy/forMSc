/*
  File name: lecture12_5.c
  This program introduces the topic of survey data analysis.
  It computes the mean, median and mode of the data
  Linear search of an array
  Binary search of a sorted array
*/
#include <stdio.h>
#define size 100
#define size1 15
void mean(const int []);
void median(int []);
void mode(int [], const int []);
void bubbleSort(int []);
void printArray(const int []);
int linearSearch(const int [], int, int);
int binarySearch(const int [], int, int, int);
void printHeader();
void printRow(const int [], int, int, int);
int main(){
  int f[10]={0};
  int r[size] =
    {6, 7, 8, 9, 8, 7, 8, 9, 8, 9,
     7, 8, 9, 5, 9, 8, 7, 8, 7, 8,
     6, 7, 8, 9, 3, 9, 8, 7, 8, 7,
     7, 8, 9, 8, 9, 8, 9, 7, 8, 9,
     6, 7, 8, 7, 8, 7, 9, 8, 9, 2,
     7, 8, 9, 8, 9, 8, 9, 7, 5, 3,
     5, 6, 7, 2, 5, 3, 9, 4, 6, 4,
     7, 8, 9, 6, 8, 7, 8, 9, 7, 8,
     7, 4, 4, 2, 5, 3, 8, 7, 5, 6,
     4, 5, 6, 1, 6, 5, 7, 8, 7, 5};
  mean(r);
  median(r);
  mode(f, r);

  /* creating new data */
  int a1[size], x, searchKey, element;
  for(x=0; x<size; x++)a1[x]=2*x;
  printf("Enter integer search key:\n");
  scanf("%d", &searchKey);
  element = linearSearch(a1, searchKey, size);
  if(element != -1) printf("Found value in element %d\n", element);
  else printf("Value not found!\n");

  /* re-creating new data */
  int a2[size1], key, result;
  for(x=0; x<size; x++)a2[x]=2*x;
  printf( "Enter a number between 0 and 28: " );
  scanf( "%d", &key );
  printHeader();
  result = binarySearch(a2, key, 0, size1 - 1 );
  if(result != -1) printf("\n%d found in array element %d\n", key, result );
  else printf("\n%d not found\n", key);
  return 0;
}
/* calculate average of all response values */
void mean(const int answer[]){
  int j, total=0;
  printf("\n********\n Mean \n********\n");
  for(j=0; j<size; j++) total+=answer[j];
  printf("Mean is the average value of the data item.\n"
	 "Mean value of (%d) data items is: %d/%d= %.3f\n\n",
	 size, total, size, (float) total/size);
}
void median(int answer[]){
  printf("\n********\n Median \n********\n"
	 "Unsorted array: \n");
  printArray(answer);
  bubbleSort(answer);
  printf("\n\nThe sorted array is");
  printArray(answer);
  printf("\n\nThe median is %dth element of sorted %d element array.\n"
	 "Median is %d\n\n", size/2, size, answer[size/2]); 
}
void mode(int freq[], const int answer[]){
  int rate, j, histo, largest=0, modeValue=0;
  printf("\n********\n  Mode\n********\n");
  for(rate=1; rate<=9; rate++)freq[rate]=0;
  for(j=0; j<size; j++) ++freq[answer[j]];
  printf("Response  Frequency          Histogram:\n\n");
  for(rate=0; rate<=9; rate++){
    printf( "%8d%11d ", rate, freq[rate]);
    if(freq[rate]>largest){
      largest=freq[rate];
      modeValue =rate;
    }
    for(histo=1; histo<=freq[rate]; histo++)printf("*");
    printf("\n");
  }
  printf("Mode is most frequent value.\n"
	 "Here mode %d occurred %d times.\n",
	 modeValue, largest);
}
void bubbleSort(int a[]){
  int p, j, temp;
  for(p=1; p<size; p++)
    for(j=0; j<size-1; j++)
      if(a[j]>a[j+1]){
	temp=a[j];
	a[j]=a[j+1];
	a[j+1]=temp;
      }
}
void printArray(const int a[]){
  int j;
  for(j=0; j<size; j++){
    if(j%20 == 0) printf("\n");
    printf("%2d", a[j]);
  }
}
int linearSearch( const int array[], int key, int x){
  int n;
  for(n=0; n<x; ++n)
    if(array[n]==key)return n;
  return -1;
}
int binarySearch( const int b[], int searchKey, int low, int high ){
  int middle;
  while(low<=high){
    middle = (low + high)/2;
    printRow( b, low, middle, high );
    if(searchKey == b[middle]) return middle;
    else if(searchKey < b[middle])high = middle-1;
    else low = middle+1;
  }
  return -1;
}
void printHeader(){
  int i;
  printf("\nSubscripts:\n");
  for(i=0; i<size1; i++)printf("%3d ",i);
  printf("\n");
  for(i=0; i<4*size1; i++)printf("-");
  printf("\n");
}
void printRow(const int b[], int low, int mid, int high ){
  int i;
  for(i=0; i<size1; i++)
    if(i<low || i>high)printf("    ");
    else if(i==mid)printf("%3d*", b[i]);
    else printf("%3d ",b[i]);
  printf("\n");
}
/*

sanjeev[290]gcc lecture12_5.c -o lecture12_5
sanjeev[291]./lecture12_5

********
 Mean 
 ********
Mean is the average value of the data item.
Mean value of (100) data items is: 686/100= 6.860


********
 Median 
 ********
Unsorted array: 

 6 7 8 9 8 7 8 9 8 9 7 8 9 5 9 8 7 8 7 8
 6 7 8 9 3 9 8 7 8 7 7 8 9 8 9 8 9 7 8 9
 6 7 8 7 8 7 9 8 9 2 7 8 9 8 9 8 9 7 5 3
 5 6 7 2 5 3 9 4 6 4 7 8 9 6 8 7 8 9 7 8
 7 4 4 2 5 3 8 7 5 6 4 5 6 1 6 5 7 8 7 5

The sorted array is
 1 2 2 2 3 3 3 3 4 4 4 4 4 5 5 5 5 5 5 5
 5 5 6 6 6 6 6 6 6 6 6 7 7 7 7 7 7 7 7 7
 7 7 7 7 7 7 7 7 7 7 7 7 7 7 8 8 8 8 8 8
 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8
 8 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9

The median is 50th element of sorted 100 element array.
Median is 7


********
  Mode
  ********
Response  Frequency          Histogram:

       0          0 
       1          1 *
       2          3 ***
       3          4 ****
       4          5 *****
       5          9 *********
       6          9 *********
       7         23 ***********************
       8         27 ***************************
       9         19 *******************
Mode is most frequent value.
Here mode 8 occurred 27 times.
Enter integer search key:
38
Found value in element 19
Enter a number between 0 and 28: 26

Subscripts:
  0   1   2   3   4   5   6   7   8   9  10  11  12  13  14 
------------------------------------------------------------
  0   2   4   6   8  10  12  14* 16  18  20  22  24  26  28 
                                 16  18  20  22* 24  26  28 
                                                 24  26* 28 

26 found in array element 13
sanjeev[292]./lecture12_5

********
 Mean 
 ********
Mean is the average value of the data item.
Mean value of (100) data items is: 686/100= 6.860


********
 Median 
 ********
Unsorted array: 

 6 7 8 9 8 7 8 9 8 9 7 8 9 5 9 8 7 8 7 8
 6 7 8 9 3 9 8 7 8 7 7 8 9 8 9 8 9 7 8 9
 6 7 8 7 8 7 9 8 9 2 7 8 9 8 9 8 9 7 5 3
 5 6 7 2 5 3 9 4 6 4 7 8 9 6 8 7 8 9 7 8
 7 4 4 2 5 3 8 7 5 6 4 5 6 1 6 5 7 8 7 5

The sorted array is
 1 2 2 2 3 3 3 3 4 4 4 4 4 5 5 5 5 5 5 5
 5 5 6 6 6 6 6 6 6 6 6 7 7 7 7 7 7 7 7 7
 7 7 7 7 7 7 7 7 7 7 7 7 7 7 8 8 8 8 8 8
 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8
 8 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9

The median is 50th element of sorted 100 element array.
Median is 7


********
  Mode
  ********
Response  Frequency          Histogram:

       0          0 
       1          1 *
       2          3 ***
       3          4 ****
       4          5 *****
       5          9 *********
       6          9 *********
       7         23 ***********************
       8         27 ***************************
       9         19 *******************
Mode is most frequent value.
Here mode 8 occurred 27 times.
Enter integer search key:
27
Value not found!
Enter a number between 0 and 28: 27

Subscripts:
  0   1   2   3   4   5   6   7   8   9  10  11  12  13  14 
------------------------------------------------------------
  0   2   4   6   8  10  12  14* 16  18  20  22  24  26  28 
                                 16  18  20  22* 24  26  28 
                                                 24  26* 28 
                                                         28*

27 not found
sanjeev[293]

*/
