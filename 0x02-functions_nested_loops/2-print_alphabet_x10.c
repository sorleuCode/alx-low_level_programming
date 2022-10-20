#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 */
void print_alphabet_x10(void)
{
	char lc;
	int ten;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		for (ten = 0; ten <= 9; ten++)
		{
			_putchar(lc);
		}
	}
	_putchar('\n');
}
