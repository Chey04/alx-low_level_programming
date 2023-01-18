#include "function_pointers"

/**
 * print_name: function to print a name
 * @name: name to be printed
 * @f: callback function
 */

void print_name(char *name, void (*f)(char *));
{
	f(name);
}
