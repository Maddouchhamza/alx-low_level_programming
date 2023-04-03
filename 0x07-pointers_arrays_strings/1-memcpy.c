/**
 * _memcpy - function that copies memory area
 * @dest: adress of adestination string
 * @src: adress of source string
 * @n: unsigned integer
 *
 * Return: pointer to string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
