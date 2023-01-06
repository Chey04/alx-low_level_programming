#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to return amount of coins
 * for change
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int cents, ncoins = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents = cents - 25;

		else if (cents >= 10)
			cents = cents - 10;

		else if (cents >= 5)
			cents = cents - 5;

		else if (cents >= 2)
			cents = cents - 2;

		else if (cents >= 1)
			cents = cents - 1;

		ncoins += 1;

	}
	printf("%d\n", ncoins);

	return (0);
}
