#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H
#include <stdarg.h>

/**
 * struct print - structure to point to a
 * function depending matching symbol
 * just go through the code, you'll understand.
 * @symbol: that's the symbol I was just telling you about.
 * @printit: pointer to function. Stay with me.
 */

typedef struct print{
	char *symbol;
	void(*printit)(va_list);
} print_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTION_H */
