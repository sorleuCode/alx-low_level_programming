#include "main.h"

/**
 * _islower - checks for lowercase
 * @c: the character
 * Return: 1 if letter  is lowercase, 0 if noi
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
