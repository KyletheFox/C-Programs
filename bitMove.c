/*
C program to print two bits at a time.
By: Kyle Oneill
*/

#include<stdio.h>

int main() {
  printf("sizeof int: %i\n", sizeof(int));

  unsigned int bits=146, tmpInt;

  printf("bits of bits: %x\n", bits);

  char i, j=6;
  for(i=0; i<32; i+=2){
    tmpInt=(bits<<i);
    tmpInt>>=30;
    printf("two bits: %x\n", tmpInt);
  }
}
