#include <stdio.h>
char *leet(char *s)
{
	int i = 0, j;
	char leet[8] = {'O', 'L', '^', 'E', 'A', '^', '^', 'T'};

	while (s[i] != '\0')
	{
		for (j = 0; j < 8; j++)
		{
			if (s[i] == leet[j] || (s[i] -32) == leet[j])
				s[i] = j + '0';
		}
		i++;
	}
	return (s);
}
/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
    char *p;

    p = leet(s);
    printf("%s", p);
    printf("%s", s);
    return (0);
}
