#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that adds positive numbers.
 * @argc: argument count
 * @argv: argument value
 * Return: 0 on success.
 */

int main(int argc, char **argv)
{
	int i, sum = 0;

	if (argc < 2)
		printf("0\n");

	else
	{
		for (i = 1; i < argc; i++)
		{
			int num = atoi(argv[i]);

			if (num > 0)
				sum += num;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
