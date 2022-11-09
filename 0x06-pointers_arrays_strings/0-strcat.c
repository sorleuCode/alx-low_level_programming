#include "main.h"

/**
 * *_strcat - concatenates strings
 * @dest: destination
 * @src: destination
 * Return: return pointer
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;

	int j;

	while (dest[i])
		i++;
	j = 0;

	for (j = 0; src[j] != '\0'; j++)
	{
		des[i] = src[j];
		i++;
	}
	dest[i] = '\n';
	return (dest);
}
