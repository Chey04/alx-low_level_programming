/**
 * print_name - function to print a name
 * @name: name to be printed
 * @f: callback function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
