#include "main.h"

/**
 * _isupper - uppercase letters
 * @c: characters to be checked
 *
 * Return: 1 if c is uppercase, 0 for otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
