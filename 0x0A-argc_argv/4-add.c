#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that adds positive numbers.
 * @argc: argument count
 * @argv: argument value
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	int i, sum = 0, j = 0;

	for (i = 1; i < argc; i++)
	{
		for ( ; argv[i][j]; j++)
		{
			if (argv[i][j] < '0'
				|| argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
