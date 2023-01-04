#include "main.h"

/**
 * pow_opp - returns natural square root
 * of a number
 *
 * @n: square num
 * @c: iterate value
 *
 * Return: the square root or -1
 */

int pow_opp(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}

	return (0 + pow_opp(n, c + 1));
}

/**
 * _sqrt_recursion - returns natural sqrt
 *
 * @n: input value
 *
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (0);

	if (n == 1)
	{
		return (1);
	}
	return (pow_opp(n, 2));

}
