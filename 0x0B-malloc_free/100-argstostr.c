#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	if (ac == 0 || av == NULL)
		return (NULL);

	size_t totalLength = 0;

	for (int i = 0; i < ac; i++)
	{
		totalLength += strlen(av[i]) + 1;
	}

	char *concatenated = (char *)malloc(totalLength + 1);

	if (concatenated == NULL)
		return (NULL);

	size_t currentPos = l0;

	for (int i = 0; i < ac; i++)
	{
		strcpy(concatenated + currentPos, av[i]);
		currentPos += strlen(av[i]);
		concatenated[currentPos] = '\n';
		currentPos++;
	}
	concatenated[currentPos] = '\0';

	return (concatenated);
}
