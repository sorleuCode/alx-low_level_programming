
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024
 * Return: Always zero
 */
int main(void)
{
	int i;
	int sum;

	for (i = 1; i < 1024; i++)
	{
		sum += i
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			printf("%d", sum);
		}
	}
	printf("\n");
	return (0);
}
