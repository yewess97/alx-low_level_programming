#include <stdlib.h>
#include "main.h"
/**
 * argstostr - a C program that concatenates all the arguments of your program.
 * @ac: The size of the array
 * @av: The pointer to ac
 * Return: A pointer to a new string, or NULL if it fails
 **/
char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, k = 0, size = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		while (av[i][j])
		{
			size++;
			j++;
		}

		j = 0;
	}

	s = malloc((sizeof(char) * size) + ac + 1);

	for (i = 0; av[i] != '\0'; i++)
	{
		while (av[i][j])
		{
			s[k] = av[i][j];
			k++;
			j++;
		}

		s[k] = '\n';
		j = 0;
		k++;
	}

	k++;
	s[k] = '\0';

	return (s);
}
