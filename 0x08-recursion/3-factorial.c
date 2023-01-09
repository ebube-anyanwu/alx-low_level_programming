#include "main.h"

/**
 * factorial - a function  that prints returns the factorial of a given number.
 * @n: the number
 * Return: -1 of n < 0, 1 if n == 0 else factorial of n.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
