#include <stdio.h>

/**
 * main - prints each of the passed arguments on a line
 * @argc: the number of arguments
 * @argv: array of pointers to the arguments
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
		printf("%s\n", argv[count]);
	return (0);
}
