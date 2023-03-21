#include <stdio.h>
/**
 * main- Entry point
 * Description: Alphabet in reverse
 * Return: aleays 0
 */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
