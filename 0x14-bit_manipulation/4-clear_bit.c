#include "main.h"

#define CHAR_BITS 8 /*size of char*/
#define INT_BITS (sizeof(unsigned long int) * CHAR_BITS)

void print_bin(unsigned long int number)
{
	if (number >> 1)
		print_bin(number >> 1);

	putc((number & 1) ? '1' : '0', stdout);
}

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;
	#ifdef DEBUG
	unsigned long int n_before = *n;
	#endif

	/*if index is greater than size of n in binary coded decimal*/
	if (index > INT_BITS)
		return (-1);

	mask = ~(mask << index); /*create mask based on index position*/

	*n = (*n & mask);

	#ifdef DEBUG
	printf("\n%ld in binary is ", n_before);
	print_bin(n_before);
	printf(" while NOT (~) of mask right shifted to index %d is ", index);
	print_bin(mask);
	printf(" our new value n in binary is ");
	print_bin(*n);
	printf("\n\n");
	#endif

	return (1);
}
