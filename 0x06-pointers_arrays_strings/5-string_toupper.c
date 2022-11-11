#include "main.h"

/**
 * *string_toupper - changes all lowercase letters to uppercasr letters
 * @str: array of strings
 * Return: returns pointer
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
	return (str);
}
