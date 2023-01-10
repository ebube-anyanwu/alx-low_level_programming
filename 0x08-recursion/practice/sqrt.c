#include <stdio.h>
/**
 *  _sqrt_recursion- a function  that prints returns the natural square
 *  root of a number.
 * @n: the number
 * Return: -1 if y < 0, 1 if n == 0 else return power.
 */

int _sqrt_recursion(int n)
{
	int guess = 1;
	
	if (n < 0)
		return (-1);
	for (guess = 1; guess < n; guess++)
	{
		if (n == (guess * guess))
			break;

		if (guess == n/2)
			return (-1);
	}

	return (guess);
}

int main(void)
{
    int r;

    r = _sqrt_recursion(1);
    printf("%d\n", r);
    r = _sqrt_recursion(1024);
    printf("%d\n", r);
    r = _sqrt_recursion(16);
    printf("%d\n", r);
    r = _sqrt_recursion(17);
    printf("%d\n", r);
    r = _sqrt_recursion(25);
    printf("%d\n", r);
    r = _sqrt_recursion(-1);
    printf("%d\n", r);
    return (0);
}
