
#include <stdio.h>


unsigned int add(unsigned int i, unsigned int j);

int main(int argc, char **argv) {
	
	unsigned int a=29, b=16;
	printf("using add(): %d\n", add(a,b));
	printf("Normal add: %d\n", a+b);

}

unsigned int add(unsigned int i, unsigned int j) {
	/* This method will add two numbers together using only
	   bitwise operators */
	
	unsigned int xor = i^j;	/* value after ^
					plus first xor */
	printf("xor: %u\n", xor);
	unsigned int and = i&j;	/* value after &
					plus first and */
	printf("and: %u\n", and);
	unsigned int andShift;	/* vaule after &<<1 */

	while (and != 0) {
		andShift = and<<1;
		printf("loop - andShift: %d\n", andShift);
		and = xor&andShift;
		printf("loop - and: %d\n", and);
		xor = xor^andShift;
		printf("loop - xor: %d\n", xor);
	} 

	return xor;

}
