/**
 * _strspn - function thatgets the length of a prefix substring.
 * @s: string
 * @accept: whatever
 * Return: number of bytes n the initial segment of s which consist only
 * of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0, lenS = 0, lenAccept = 0, index = 0, j = 0;

	while (s[index])
	{
		lenS++;
		index++;
	}
	index = 0;
	while (accept[index])
	{
		lenAccept++;
		index++;
	}

	for (index = 0; index < ((lenS - 1) / 2); index++)
	{
		for ( ; j < lenAccept; j++)
		{
			if (accept[j] == s[index])
			{
				break;
			}
		}
		bytes++;
	}

	return (bytes);
}
