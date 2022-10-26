#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints the vakue of c to the stdout
 * @c: the formal parameter that takes arguement as its value
 * Return: 1 for success
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
