#include <stdio.h>
/**
 * main - a program that prints all arguments it receives.
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
