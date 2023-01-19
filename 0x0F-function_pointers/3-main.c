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
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	operator = argv[2];


	if (get_op_func(operator) == NULL || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}


	if ((*operator == 47 || *operator == 37) && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(operator)(a, b));
	return (0);

}
