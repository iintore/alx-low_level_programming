#include "main.h"

void print_bin(unsigned long int number)
{
	if (number >> 1)
		print_bin(number >> 1);

	putc((number & 1) ? '1' : '0', stdout);
}

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int diff_bits = 0;
	unsigned long int diff;

	/*xor n and b*/
	diff = n ^ m;

	#ifdef DEBUG
	printf("\n(n) %ld and (m) %ld in binary is ", n, m);
	print_bin(n);
	printf(" ");
	print_bin(m);
	printf(" diff is %ld and in binary is ", diff);
	print_bin(diff);
	printf("\n");
	#endif


	do {
		#ifdef DEBUG
		printf("diff %ld before right shift ", diff);
		print_bin(diff);
		printf("\n");
		#endif

		diff_bits += (diff & 1);
		diff >>= 1;

		#ifdef DEBUG
		printf("diff %ld after right shift ", diff);
		print_bin(diff);
		printf(" and diff_bit %d before leaving loop\n\n", diff_bits);
		#endif
	} while (diff > 0);

	return (diff_bits);
}
