#include "main.h"
#include <stdlib.h>

/**
 * _strdup - return a pointer to the newly allocated space in memory
 * @str: original string
 * Return: returns a pointer or NULL if otherwise
 */

char *_strdup(char *str)
{
	char *copied;
	int index, len = 0;

	if (str == NULL)
		return (NULL);
	for (index = 0; str[index]; index++)
		len++;
	copied = malloc((len + 1) * sizeof(char));

	if (copied == NULL)
		return (NULL);
	for (index = 0; str[index]; index++)
		copied[index] = str[index];
	copied[len] = '\0';

	return (copied);
}
