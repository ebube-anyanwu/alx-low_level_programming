/**
 * _strstr - function that locates a substring.
 * @haystack: string
 * @needle: whatever
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */

char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == '\0')
		return (haystack);

	while (*needle != '\0')
	{
		for (index = 0; haystack[index] != '\0'; index++)
		{
			if (*needle == haystack[index])
				return (haystack + index);
		}
		needle++;
	}
	return (0);
}
