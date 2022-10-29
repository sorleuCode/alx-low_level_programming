#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the pointer to a string
 * Return: stringlength
 */

int _strlen(char *s)
{
	int length = 0;

	while (s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
