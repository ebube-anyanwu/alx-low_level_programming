#include <stdio.h>
char *cap_string(char *s)
{
	int index = 0;

	while (s[index] != '\0')
	{
		if (index == 0)
		{
			if (s[index] >= 'a' && s[index] <= 'z')
				s[index] -= 32;
		}

		if (s[index] == ' ' ||
		s[index] == '\t' ||
		s[index] == '\n' ||
		s[index] == ',' ||
		s[index] == ';' ||
		s[index] == '.' ||
		s[index] == '!' ||
		s[index] == '?' ||
		s[index] == '"' ||
		s[index] == '(' ||
		s[index] == ')' ||
		s[index] == '{' ||
		s[index] == '}')
		{
			index++;
			if (s[index] >= 97 && s[index] <= 122)
				s[index] -= 32;
			else
				continue;
		}

		index++;
	}
	return (s);
}

int main(void)
{
    char str[] = "expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char *ptr;

    ptr = cap_string(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}
