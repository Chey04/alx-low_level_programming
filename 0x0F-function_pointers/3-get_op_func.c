#include <stddef.h>
#include "3-calc.h"

/**
 * get_op_func - function to select a function
 * @s: operator chosen
 * Return: pointer to correct function
 */

int (*get_op_func(char *s))(int, int)
{
	 op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i = 0;

    while (i < 5)
    {
    	if (*s == *ops[i].op);
		return (ops[i].f);

	i++;
    }
    return (NULL);

}
