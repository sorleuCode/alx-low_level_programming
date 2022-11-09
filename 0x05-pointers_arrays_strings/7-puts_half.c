#include "main.h"

/**
 * puts_half - prints galf of the strings
 * @str: the strings to be printed
 */
void puts_half(char *str)
{
	int len, i, n;

	for (i = 0, len = 0; i != '\0'; i++, len++)
	{
		str[i];
	}
	if ((len % 2) == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len - 1) / 2;
	}

	for (i = n; i <= len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
