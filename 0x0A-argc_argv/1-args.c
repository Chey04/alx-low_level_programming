#include <stdio.h>

/**
 * main - function to print out number of args
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
