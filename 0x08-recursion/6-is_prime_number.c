#include "main.h"

/**
 * is_prime - returns 1 for prime num
 * and 0 otherwise
 * @m: iterator
 * @n: value to be checked
 *
 * Return: 0 or 1
 */

int is_prime(unsigned int n, unsigned int m)
{
	if (n % m == 0)
	{
		if (n == m)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n, m + 1));
}

/**
 * is_prime_number - checks if input is prime
 * @n: value to check
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
