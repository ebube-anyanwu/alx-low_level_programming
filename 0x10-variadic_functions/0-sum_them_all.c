#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: number of parameters
 * Return: the sum of all its parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i;
	va_list nums;

	if (n == 0)
		return (0);
	
	va_start(nums, n);

	for (i = 0; i < n; i++)
		sum += va_arg(nums, unsigned int);
	va_end(nums);

	return (sum);
}
