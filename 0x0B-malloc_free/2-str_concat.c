#include "main.h"
#include <stdlib.h>

/**
 * str_concat - returns a pointer to the newly allocated space in memory
 * that contains the contens of s1 and s2
 * @s1: the first string
 * @s2: the second string
 * Return: a pointer to the newly allocated memory or NULl if code fail
 */

char  *str_concat(char *s1, char *s2)
{
	char *concat_strn;

	int index;
	int concat_index = 0;
	int len = 0;

	if (s1 == NULL)
		s1 = " ";
	for (index = 0; s1[index] || s2[index]; index++)
		len++;
	concat_strn = malloc(len * sizeof(char));

	if (concat_strn == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		concat_strn[concat_index++] = s1[index];
	for (index = 0; s2[index]; index++)
		concat_strn[concat_index] = s2[index];
	return (concat_strn);
}
