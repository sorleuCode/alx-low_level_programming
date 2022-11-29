#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints to the std out
 * @c: the character to print
 * Return: return 1 on success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
