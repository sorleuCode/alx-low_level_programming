#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the result of the multiplication of two numbers
 * @argc: the number of arguments passed
 * @argv: the array of pointers  to the arguments passed
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int num1, num2, prod;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		prod = num1 * num2;
		printf("%d\n", prod);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);

	}
}
