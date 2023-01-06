#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to multiply two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 for success 1 otherwise
 */

int main(int argc, char *argv[])
{
	int mul = 0, a, b;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	mul = a * b;
	printf("%d\n", mul);

	return (0);
}
