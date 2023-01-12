#include <stdio.h>
/**
 * main - a program that prints its name, followed by a new line.
 * @argc: argument count
 * @argv: argument value
 * Return: 0 on success.
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc-1);
	return (0);
}
