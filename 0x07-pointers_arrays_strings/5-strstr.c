/**
 * _strstr - function that locates a substring.
 * @haystack: string
 * @needle: whatever
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	if (*needle == 0)
		return (haystack);

	for ( ; haystack[i] != '\0'; i++)
	{
		if (haystack[i] != needle[0])
			continue;
		else
			return (haystack + i);
	}
	return ('\0');
}
