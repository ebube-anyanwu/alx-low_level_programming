/**
 * _strchr - function that locates a character in a string.
 * @s: string
 * @c: character
 * Return: pointer to s if character is found else NULL
 */

char *_strchr(char *s, char c)
{
	if (*s == '\0')
		return (0);

	while (*s != '\0')
	{
		if (*s == c)
			return ((char *) s);
		s++;
	}
	return (0);
}
