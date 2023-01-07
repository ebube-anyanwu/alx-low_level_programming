/**
 * _strspn - function thatgets the length of a prefix substring.
 * @s: string
 * @accept: whatever
 * Return: number of bytes n the initial segment of s which consist only
 * of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*s != '\0')
	{
		for (index = 0; accept[index] != '\0'; index++)
		{
			if (*s == accept[index])
			{
				break;
			}
		}
		if (!(*s == accept[index]))
			break;
		bytes++;
		s++;
	}

	return (bytes);
}
