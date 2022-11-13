#include "main.h"

/**
 * *_strchr - locates a character in the string
 * @s: array of characters
 * @c: the character to print
 * Return: return s if success or NULL if otherwise
 */
char *_strchr(char *s, char c)
{
	int i, j;
	char *a;

	a = s;

	for (i = 0; s[i] != c; i++)
	;
	if (s[i] == c)
	{
		for (j = i; a[j] != '\0'; j++)
			s[j] = a[j];
		return (s);
	}
	else
		return (NULL);
}
