/* File name: lecture08_3.c
   finding maximum and minimum in 3 numbers
*/
#include <stdio.h>
int maximum(int, int, int);
int minimum(int, int, int);
int main(){
  int n1,n2,n3;
  printf("Enter 3 integers: ");
  scanf("%d%d%d", &n1, &n2, &n3);
  printf("Maximum is: %d\nand Minimum is: %d\n",
	 maximum(n1,n2,n3), minimum(n1,n2,n3));
  return 0;
}
/* Function maximum */
int maximum(int x, int y, int z){
  int max=x;
  if(y>max)max=y;
  if(z>max)max=z;
  return max;
}
/* Function minimum */
int minimum(int a, int b, int c){
  int min=a;
  if(b<min)min=b;
  if(c<min)min=c;
  return min;
}

/*
sanjeev[106]./lecture08_3 
Enter 3 integers: 20 30 40
Maximum is: 40
and Minimum is: 20
sanjeev[107]./lecture08_3
Enter 3 integers: 30 20 40
Maximum is: 40
and Minimum is: 20
sanjeev[108]./lecture08_3
Enter 3 integers: 40 20 30
Maximum is: 40
and Minimum is: 20
sanjeev[109]

*/
