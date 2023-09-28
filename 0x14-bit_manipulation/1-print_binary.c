#include <stdio.h>

/**
 * print_binary - Prints the binary representation of a number
 * @n: The unsigned long integer to print in binary
 */
void print_binary(unsigned long int n)
{
	int shift = sizeof(unsigned long int) * 8 - 1;

	if (n == 0)
	{
		putchar('0');
		return;
	}

	while (shift >= 0)
	{
		unsigned long int bit = (n >> shift) & 1;

		putchar(bit ? '1' : '0');
		shift--;
	}
}
