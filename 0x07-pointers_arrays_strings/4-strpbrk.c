/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: string
 * @accept: whatever
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s != '\0')
	{
		for (index = 0; accept[index] != '\0'; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return (0);
}
