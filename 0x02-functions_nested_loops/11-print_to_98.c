#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - a function that prints all natural numbers
 * from n to 98
 * @n: first number
 * Return: void
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
				printf("%d", n);
			else
				printf("%d, ", n);
		}
	}
	else
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	printf("\n");
}
