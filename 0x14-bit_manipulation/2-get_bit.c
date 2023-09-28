#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: The unsigned long integer
 * @index: The index of the bit to retrieve (starting from 0)
 *
 * Return: Value of the bit at the specified index, or -1 if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
