#include "main.h"

/**
 * main - entry point
 * Return: 0 on success
 */

int main(void)
{
	char word[9] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(word[i]);
	}
	_putchar('\n');

	return (0);
}
