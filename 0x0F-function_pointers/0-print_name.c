#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints the a name
 * @name: the name to print
 * @f: pointer to the printing function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
