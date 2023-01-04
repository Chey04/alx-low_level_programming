#include "main.h"

/**
 * factorial - function to return factorial
 * of a given number
 *
 * @n: n!
 *
 * Return: the factorial number
 */

int factorial(int n)
{
	int num;

	num = n * factorial(n - 1);
	return (num);
}
