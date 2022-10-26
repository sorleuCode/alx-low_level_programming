#include "main.h"

/**
 * _isupper - checks for the uppercase letter
 * @c: character to be printed
 * Return: 1 for succeas and 0 for otherwise
 */

int _isupper(int c)
{
	for (c = 'A'; c <= 'Z'; c++)
	{
		if (c >= 'A' && c <= 'Z')
		{
			return (1);
		}
		else
			return (0);
	}
}
