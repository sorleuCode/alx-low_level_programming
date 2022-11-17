#include "main.h"

/**
 * *_strstr - locates a substring
 * @haystack: the parent string
 * @needle: the substring
 * Return: return a pointer to the beginning of the substring in the parent
 * string
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;

	while (*haystack)
	{
		while (needle[i] != 0)
		{
			if ((*haystack == needle[i]) && (needle[i + 1] != 0))
				return (haystack);
			i++;
		}
		haystack++;
	}
	return (NULL);
}
