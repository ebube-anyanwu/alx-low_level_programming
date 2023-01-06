/**
 * _strchr - function that locates a character in a string.
 * @s: string
 * @c: character
 * Return: pointer to s if character is found else NULL
 */

char *_strchr(char *s, char c)
{
	do
	{
		if (*s == c)
			return (s);
	} while (s++);
	return (0);
}
