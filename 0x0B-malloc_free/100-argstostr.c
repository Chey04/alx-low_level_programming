#include <stdlib.h>
#include "main.h"

/**
 * argstostr - a fuction that concatenates all
 * the arguments
 *
 * @ac: number of args
 * @av: arguments
 *
 * Return: pointer or NULL.
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, lenght;
	char *str;

	lenght = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			lenght++;
		lenght++;
	}

	str = (char *) malloc(sizeof(char) * (lenght + 1));
	if (str == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';

	return (str);
}
