#include <stdio.h>
/**
 * main - Enrty point
 * Description: Number arrangement
 * Return: always 0
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}