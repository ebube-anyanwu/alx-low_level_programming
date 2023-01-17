#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - function thatconcatenates all the arguments of your program.
 * @ac: argument count
 * @av: argument value
 * Return: pointer to character
 */

char *argstostr(int ac, char **av)
{
	char *str_concat;
	int index, char_byte, av_size = 0, av_break = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (index = 0; index < ac; index++)
	{
		for (char_byte = 0; av[index][char_byte]; char_byte++)
			av_size++;
	}

	str_concat = malloc(sizeof(char) * (av_size + 1));

	if (str_concat == NULL)
		return (NULL);

	for (index = 0; index < ac; index++)
	{
		for (char_byte = 0; av[index][char_byte]; char_byte++)
			str_concat[av_break++] = av[index][char_byte];
		str_concat[av_break++] = '\n';
	}
	str_concat[av_break] = '\0';

	return (str_concat);
}
