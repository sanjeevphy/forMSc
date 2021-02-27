/*
  File name: lecture13_1.c
  Understanding pointers in c-language
  Pointers are variables whose values are memory addresses.
*/
#include<stdio.h>
int main(){
  int *aPtr, a=5;
  aPtr = &a;
  
  printf("The address of a is %p"
	 "\nThe value of aPtr is %p\n\n", &a, aPtr);
  printf("The value of a is %d"
	 "\nThe value of *aPtr is %d\n\n", a, *aPtr);
  printf("* and & are complements of each other."
	 "\n&*aPtr = %p\n*&aPtr = %p\n", &*aPtr, *&aPtr);

  char charvar = '\0';
  printf("address of charvar = %p\n"
	 "address of charvar + 1 = %p\n"
	 "address of charvar - 1 = %p\n",
	 (void *)&charvar, (void *)(&charvar + 1), (void *)(&charvar - 1));
  /* (void *) ptr => will nullify the datatype of pointer ptr
     Most of the times it will not effect the program.
     If pointer is a normal variable then it should be written as => (void) x
     => (void *) &x; (void) x;
  */
  
  int intvar = 1;
  printf("address of intvar = %p\n"
         "address of intvar + 1 = %p\n"
         "address of intvar - 1 = %p\n",
         (void *)&intvar, (void *)(&intvar + 1), (void *)(&intvar - 1));

  int i=0, n1[5] = {1,2,3,4,5};
  printf("numbers = %p\n", n1);
  do{
    printf("n1[%u] = %p\n", i, (void *)(&n1[i]));
    i++;
  }while(i<5);
  // print the size of the array 
  printf("sizeof(numbers) = %lu\n", sizeof(n1));
  /*In case of scientific linux please change %lu by %d */

  int *ptr = NULL;
  //printf("The value of ptr is: %x\n", ptr);
  if(ptr) printf("ptr is NULL pointer.\n"); //if ptr is not NULL
  else printf("ptr is not NULL pointer.\n"); // if ptr is NULL; same as if(!ptr)
  
  return 0;
}

/*
sanjeev[106]gcc lecture13_1.c -o lecture13_1
sanjeev[107]./lecture13_1
The address of a is 0x7fff04d98124
The value of aPtr is 0x7fff04d98124

The value of a is 5
The value of *aPtr is 5

* and & are complements of each other.
&*aPtr = 0x7fff04d98124
*&aPtr = 0x7fff04d98124
address of charvar = 0x7fff04d98123
address of charvar + 1 = 0x7fff04d98124
address of charvar - 1 = 0x7fff04d98122
address of intvar = 0x7fff04d9811c
address of intvar + 1 = 0x7fff04d98120
address of intvar - 1 = 0x7fff04d98118
numbers = 0x7fff04d98100
n1[0] = 0x7fff04d98100
n1[1] = 0x7fff04d98104
n1[2] = 0x7fff04d98108
n1[3] = 0x7fff04d9810c
n1[4] = 0x7fff04d98110
sizeof(numbers) = 20
ptr is not NULL pointer.
sanjeev[108]./lecture13_1
The address of a is 0x7fff9dfef894
The value of aPtr is 0x7fff9dfef894

The value of a is 5
The value of *aPtr is 5

* and & are complements of each other.
&*aPtr = 0x7fff9dfef894
*&aPtr = 0x7fff9dfef894
address of charvar = 0x7fff9dfef893
address of charvar + 1 = 0x7fff9dfef894
address of charvar - 1 = 0x7fff9dfef892
address of intvar = 0x7fff9dfef88c
address of intvar + 1 = 0x7fff9dfef890
address of intvar - 1 = 0x7fff9dfef888
numbers = 0x7fff9dfef870
n1[0] = 0x7fff9dfef870
n1[1] = 0x7fff9dfef874
n1[2] = 0x7fff9dfef878
n1[3] = 0x7fff9dfef87c
n1[4] = 0x7fff9dfef880
sizeof(numbers) = 20
ptr is not NULL pointer.
sanjeev[109]

*/
