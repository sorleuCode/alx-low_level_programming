#include "main.h"
#include <unistd.h>

/**
 * _putchar - ptints to the std out
 * @c: character to be printed
 * Return: return 1 on success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
