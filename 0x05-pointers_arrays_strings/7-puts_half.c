#include "main.h"

/**
 * puts_half - prints galf of the strings
 * @str: the strings to be printed
 */
void puts_half(char *str)
{
	int i = 0;
	int c;

	while (*str != 0)
	{
		i++;
		*str++;
	}
	str -= (i / 2);

	while (*str != '\0')
	{
		_putchar(*str);
		*str++;
	}
	_putchar('\n');
}
