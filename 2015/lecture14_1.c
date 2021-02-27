#include <stdio.h>
main(){
  unsigned int a=60, b=30, c=0;
  /* binary number corrospond to above values
     a -> 60 is 0011 1100
     b -> 30 is 0000 1101
  */
  c = a & b; /* 0000 1100 is 12; binary AND */
  printf("bitwise 60 AND 30 will give %d\n", c);
  
  c = a | b; /* 0011 1101 is 61; binary OR */
  printf("bitwise 60 OR 30 will give %d\n", c);
  
  c = a ^ b; /* 0011 0001 is 49l binary XOR */
  printf("bitwise 60 XOR 30 will give %d\n", c);
  
  c = ~a; /* -61 is 1100 0011 and -31 is 1111 0010 */
  printf("bitwise complement of %d is %d\n", a, c);
  printf("and complement (bitwise NOT) of %d is %d\n", b, ~b);
  
  c = a << 3;     /* 240 is 1111 0000 */
  printf("Binary left operator of %d is %d\n", a, c);
  
  c = a >> 2;     /* 15 is 0000 1111 */
  printf("Binary right operator of %d of c is %d\n", a, c);
  
  printf("test %d and %d\n", 2<<2, 1<<2);

  /*
    !  -> Logical NOT
    &  -> Address of
    () -> Cast Operator
    *  -> Pointer dereference
    +  -> Plus
    ++ -> Increment
    -  -> Negative
    -- -> Decrement
    ~  -> complement
    ,  -> comma
    != -> Inequality
    &  -> Bitwise AND
    ->    Member selection
    
  */
  
  return 0;
}

/*
sanjeev[10]gcc lecture14_1.c -o lecture14_1
sanjeev[11]./lecture14_1 
bitwise 60 AND 30 will give 28
bitwise 60 OR 30 will give 62
bitwise 60 XOR 30 will give 34
bitwise complement of 60 is -61
and complement (bitwise NOT) of 30 is -31
Binary left operator of 60 is 480
Binary right operator of 60 of c is 15
test 8 and 4
sanjeev[12]


*/
