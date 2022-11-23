#include <stdio.h>

/**
 * main - prints the number of argunents passed to it follwed by a newline
 * @argc: number of arguments passed
 * @argv: array of pointers to the arguments
 * Return: 0 always
 */

int main(unsigned int argc, __attribute__ ((__unused__)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
