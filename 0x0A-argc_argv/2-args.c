#include <stdio.h>
/**
 * main - a program that prints its name, followed by a new line.
 * @argc: argument count
 * @argv: argument value
 * Return: 0 on success.
 */

int main(__attribute__((unused)) int argc, char **argv)
{
	while (*argv)
	{
		printf("%s\n", *argv);
		argv++;
	}
	return (0);
}
