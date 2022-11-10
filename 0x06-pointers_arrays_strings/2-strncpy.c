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

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
	}
	return (dest);
}
