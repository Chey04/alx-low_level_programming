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

	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
