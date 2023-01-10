#include "main.h"

/**
 *  _sqrt_recursion- a function  that prints returns the natural square
 *  root of a number.
 * @n: the number
 * Return: -1 if y < 0, 1 if n == 0 else return power.
 */

int find_root(int n, int guess)
{
	if (n == (guess * guess))
		return (guess);
	if (guess == n/2)
		return (-1);

	return (find_root(n, guess + 1));
}

int _sqrt_recursion(int n)
{
	int guess = 0;

	if (n < 0)
		return (-1);

	return (find_root(n, guess));
}
