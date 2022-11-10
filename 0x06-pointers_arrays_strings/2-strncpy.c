#include "main.h"

/**
 * *_strncpy - copies a string
 * @src: source
 * @dest: destination
 * @n: the memory size
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';
	return (dest);
}
