#include <stdio.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned integer
 * @b: A pointer to the binary string
 *
 * Return: The converted unsigned integer, or 0 if an error occurs.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		result = result * 2 + (*b - '0');
		b++;
	}

	return (result);
}
