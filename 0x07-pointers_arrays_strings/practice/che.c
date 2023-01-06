#include <stdio.h>
int main(void)
{
	char s[6] = "Hello";
	int i = 0;
	printf("%s\n", s);

	while(s[i] != '\0')
	{
		printf("%c\n", s[i]);
		i++;
	}
	return 0;
}
