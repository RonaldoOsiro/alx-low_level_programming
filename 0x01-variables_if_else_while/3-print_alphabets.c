#include <stdio.h>
/**
 * main - entry point
 * Description: 'alphabet in lower and uppercase'
 * Return: always
 */
int main(void)
{
	int n = 97;
	int m = 65;

	while (n <= 122)
	{
		putchar(n);
	}
	while (n <= 90)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
