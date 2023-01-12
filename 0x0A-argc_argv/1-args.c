#include <stdio.h>
/**
 * main - a program that prints the number of arguments passed into it.
 * @argc: argument count
 * @argv: argument value
 * Return: 0 on success.
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
