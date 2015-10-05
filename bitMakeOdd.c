/*
bitMakeOdd.c
Discovers if there is an odd number of 1 bits in an single int. If there is
an even number of 1 bits, then the most significant 0 bit is changed into
a 1 bit.
by: Kyle O'Neill
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	unsigned int x = 2147483661;
	char intSize = (sizeof(int)*8);
	unsigned int temp = x;
	char i=0;
	char hasOdd;

	while (temp!=0) {
	  if ((temp&1)==1)
	    i++;

	  temp>>=1;  
	}

	if ((i&1)==1) {
		printf("hasOdd\n");
		hasOdd=1;
	}
	else {
    	printf("Doesn't haveOdd\n");
    	hasOdd=0;
    	}

	char j=(intSize-1), k;
	int powerOfTwo=1;
	temp = x;

    if (!hasOdd) {
      do {
        if (((temp>>j)&1)==0)
          break;
        else { 
          j--;
          temp=x;
        }
      } while (j>0);

      printf("J is: %u\n", j);

      for(k=0; k<j; k++)
        powerOfTwo=(powerOfTwo*2);

      printf("Added most sig 1: %u\n", (x+powerOfTwo));
      printf("Here is in hex: %x\n", (x+powerOfTwo));
    }

    else
      printf("No added #'s' (orginal #): %u\n", x);

	return 0;
}
