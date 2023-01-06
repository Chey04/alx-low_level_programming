#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - function to add positive numbers
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 or 1 for error
 */

int main(int argc, char *argv[])
{
	int i, j, add = 0;


	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{

		if (!isdigit(argv[i][j]))
		{
			printf("Error");
			return (1);
		}

		add = add + atoi(argv[i]);
		}
	}

	printf("%d\n", add);

	return (0);
}
