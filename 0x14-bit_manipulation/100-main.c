#include <stdio.h>
#include "main.h"
/**
 * main - Entry point of the program
 *
 * Description: This is the main function that checks the endianness
 * of the system and prints "Little Endian" or "Big Endian" accordingly.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	n = get_endianness();
	if (n != 0)
	{
		printf("Little Endian\n");
	}
	else
	{
		printf("Big Endian\n");
	}
	return (0);
}
