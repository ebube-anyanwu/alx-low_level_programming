#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character
 * @c: The character to be checked
 * Return: 1 if c is lowercase and 0 if otherwise
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
