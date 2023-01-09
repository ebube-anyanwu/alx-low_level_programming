#include "main.h"

/**
 *  _pow_recursion- a function  that prints returns the value of x
 *  raised to the power of y.
 * @x: the first argument
 * @y: the second argument
 * Return: -1 if y < 0, 1 if n == 0 else return power.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * (_pow_recursion(x, y - 1)));
}
