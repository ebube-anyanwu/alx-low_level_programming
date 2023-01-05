#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

char *string_toupper(char *s)
{
	int index = 0;

	while (s[index] != '\0')
	{
		if (s[index] >= 97 && s[index] <= 122)
			s[index] -= 32;
		index++;
	}

	return (s);
}
int main(void)
{
    char str[] = "Look up!\n";
    char *ptr;

    ptr = string_toupper(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}
