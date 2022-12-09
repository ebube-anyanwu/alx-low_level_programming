#include <stdio.h>
/**
 * main - Entry
 * Return: 0
 */
int main(void)
{
	printf("Size of a char: %i byte(s)\n"
		"Size of a int: %i byte(s)\n"
		"Size of a long int: %i byte(s)\n"
		"Size of a long long int: %i byte(s)\n"
		"Size of a float: %i byte(s)\n",
		sizeof(char), sizeof(int), sizeof(long int),
		sizeof(long long int), sizeof(float));
	return (0);
}
