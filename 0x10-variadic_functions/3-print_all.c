#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char: function to print a char
 * @args: argument of type va_list
 */

void print_char(va_list args)
{
	char c = va_arg(args, int);

	printf("%c", c);
}

/**
 * print_integer: function to print an integer.
 * @args: argument of type va_list
 */

void print_integer(va_list args)
{
	int i = va_arg(args, int);

	printf("%d", i);
}

/**
 * print_float: function to print a float.
 * @args: argument of type va_list
 */

void print_float(va_list args)
{
	float f = va_arg(args, double);

	printf("%f", f);
}

/**
 * print_string: function to print a string.
 * @args: argument of type va_list
 */

void print_string(va_list args)
{
	char *s = va_arg(args, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}


/**
 * print_all - a function that prints anything.
 * @format: a list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *separator = "";
	int i = 0, j = 0;
	print_t f[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format[i] != '\0')
	{
		j = 0;

		while (j < 4 && (format[i] != *(f[j].symbol)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			f[j].printit(args);
			separator = ", ";
		}

		i++;
	}
	printf("\n");

	va_end(args);
}
