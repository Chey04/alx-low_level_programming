#include "main.h"

/**
 * _pow-recursion - returns the value of x 
 * raised to the power of y
 *
 * @x: integer
 * @y: factor muliplier
 * Return: end value
 */

int _pow_recursion(int x, int y)
{
	int ans;

	if (y < 0)
	{
		return (-1);
	}

	else if (y == 0)
	{
		return (1);
	}

	else
		ans = x * _pow_recursion(x, y - 1);
	return (ans);
}
