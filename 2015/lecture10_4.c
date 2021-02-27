/*
  File name: lecture10_4.c
  A scoping example
*/
#include <stdio.h>
void useLocal(void);
void useStaticLocal(void);
void useGlobal(void);
int x=1; // global variable
int main(){
  int x=5;
  printf("local x in outer scope of main is %d\n",x);
  {
    int x = 7;
    printf("local x in inner scope of main is %d\n",x);
  }
  printf("local x in outer scope of main is %d\n",x);
  useLocal();
  useStaticLocal();
  useGlobal();
  useLocal();
  useStaticLocal();
  useGlobal();
  printf("\nlocal x in main is %d\n",x);
  return 0;
}
void useLocal(void){
  int x=25;
  printf("\nlocal x in useLocal is %d after entering useLocal\n", x );
  x++;
  printf( "local x in useLocal is %d before exiting useLocal\n", x );
}
void useStaticLocal(void){
  static int x=50;
  printf( "\nlocal static x is %d on entering useStaticLocal\n", x );
  x++;
  printf( "local static x is %d on exiting useStaticLocal\n", x );
}
void useGlobal(void){
  printf( "\nglobal x is %d on entering useGlobal\n", x );
  x *= 10;
  printf( "global x is %d on exiting useGlobal\n", x );
}

/*
sanjeev[295]gcc lecture10_4.c -o lecture10_4
sanjeev[296]./lecture10_4
local x in outer scope of main is 5
local x in inner scope of main is 7
local x in outer scope of main is 5

local x in useLocal is 25 after entering useLocal
local x in useLocal is 26 before exiting useLocal

local static x is 50 on entering useStaticLocal
local static x is 51 on exiting useStaticLocal

global x is 1 on entering useGlobal
global x is 10 on exiting useGlobal

local x in useLocal is 25 after entering useLocal
local x in useLocal is 26 before exiting useLocal

local static x is 51 on entering useStaticLocal
local static x is 52 on exiting useStaticLocal

global x is 10 on entering useGlobal
global x is 100 on exiting useGlobal

local x in main is 5
sanjeev[297]
*/
