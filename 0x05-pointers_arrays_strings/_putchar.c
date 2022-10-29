#include "main.h"
#include <unistd>

/**
 * _putchar - prints to the stdout
 * @c: the character to be printed
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
