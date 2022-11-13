#include "main.h"

/**
 * *_strchr - locates a character in the string
 * @s: array of characters
 * @c: the character to print
 * Return: return s if success or NULL if otherwise
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');

}
