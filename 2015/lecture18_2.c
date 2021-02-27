/*
  File name: lecture18_2.c
  An example of Union 
*/
#include <stdio.h>
#include <string.h>
union number{
  int x;
  double y;
};
union mydata{
  int i;
  float f;
  char s[20];
};
int main(){
  union number value;
  value.x = 100;
  printf("%s\n%s\n %d\n%s\n %f\n\n",
	 "Put a value in the integer member and print both members.",
	 "int:", value.x, "double: ", value.y);
  value.y=100;
  printf("%s\n%s\n %d\n%s\n %f\n\n",
         "Put a value in the floating member and print both members.",
         "int:", value.x, "double: ", value.y);

  union mydata data;
  data.i=20;
  data.f= 1.729;
  strcpy(data.s, "C Programming");
  printf("It will print only last value correctly\n%s%d\n%s%f\n%s%s\n",
  	 "data.i = ",data.i, "data.f = ",data.f,"data.s = ",data.s);
  
  data.i=10;
  printf("data.i = %d\n",data.i);

  data.f= 17.29;
  printf("data.f = %f\n",data.f);
  strcpy(data.s, "It is C Programming");
  printf("data.s = %s\n",data.s);
  return 0;
}
/*
sanjeev[415]gcc -o lecture18_2 lecture18_2.c
sanjeev[416]./lecture18_2
Put a value in the integer member and print both members.
int:
 100
double: 
 0.000000

Put a value in the floating member and print both members.
int:
 0
double: 
 100.000000

It will print only last value correctly
data.i = 1917853763
data.f = 4122360580327794860452759994368.000000
data.s = C Programming
data.i = 10
data.f = 17.290001
data.s = It is C Programming
sanjeev[417]
*/
