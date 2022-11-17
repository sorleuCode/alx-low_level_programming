#include "main.h"

/**
 * *_strpbrk - searches a string for any set of bytes
 * @s: the parent string
 * @accept: the substring
 * Return: return a pointer to to s
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
				return (s);
		}
		s++;
	}
	return (NULL);
}
