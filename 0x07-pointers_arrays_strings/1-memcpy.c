/**
 * _memcpy - function copies n bytes from the memory area
 * src to memory are dest.
 * @src: source
 * @dest: destinaion
 * @n: number of bytes
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
