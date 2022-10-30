#include "main.h"

/**
 * *_strcpy - copies sting
 * @src: source
 * @dest: destination
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
