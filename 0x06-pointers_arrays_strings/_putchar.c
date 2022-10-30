#include "main.h"
#include <unistd.h>

/** 
 * _putchar - prints to the stdout
 * @c: character to be printed
 * Return: 1 if success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
