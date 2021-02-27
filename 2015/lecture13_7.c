/*
  File name: lecture13_7.c
  sizeof to an array
*/
#include <stdio.h>
size_t getSize(float *ptr);
int main(){
  float array[20];
  printf("The number of bytes in array is %d\n"
	 "The number of bytes return by getSize is %d\n",
	 sizeof(array), getSize(array));
  /* Please change %d by %lu in above if you are running in ubuntu 14.04 */
  return 0;
}
size_t getSize(float *ptr){
  return sizeof(ptr);
}
/*
//   In ubuntu 14.04
sanjeev[161]gcc lecture13_7.c -o lecture13_7
sanjeev[162]./lecture13_7
The number of bytes in array is 80
The number of bytes return by getSize is 8
sanjeev[163]

//  In Scientific linux 6.7
sanjeev[123]./lecture13_7
The number of bytes in array is 80
The number of bytes return by getSize is 8
sanjeev[124]
*/
