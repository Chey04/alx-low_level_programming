#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to chars to be changed to uint
 * Return: the unsigned int, 0 if string is not 1 or 0
 * or NULL
 */
int power(unsigned int x, unsigned int y);

unsigned int binary_to_uint(const char *b)
{

	int count = 0, i;
	unsigned int number = 0, non_binary = 0;

	if (b == NULL)
		return (non_binary);

	while (b[count] != '\0')
		count++;
	count -= 1;
	i = 0;
	while (b[i])
	{
		if ((b[i] != '0') && (b[i] != '1'))
			return (non_binary);

		if (b[i] == '1')
			number += (1 * (1 << count));
		i++;

		count--;
	}
	return (number);
}
