#include "main.h"
/**
 * _abs - prints out absolute values
 * of given integer
 *
 *@i: variable to be checked
 *
 * Return: always 0
 */

int _abs(int i)
{
	if (i < 0)
	{
		i *= -1;
		return (i);

	}
	else
	{
		return (i);
	}

	return (0);

}
