#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - program entry point
 * @argc: arg counter
 * @argv: arg value
 * Return: anwer to calulation
 */

int main(int argc, char *argv[])
{
	int a, b;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);


	if (argv[2][1])
	{
		printf("Error\n");
		exit(99(;
	}

	operation = get_op_func(argv[2]);

	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", operation(a, b));
	return (0);

}
