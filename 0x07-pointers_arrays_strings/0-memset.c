/**
 * _memset -  function that fills memory with a constant byte
 * @s: adress to a string
 * @b: charactere
 * @n: unsigned integer
 *
 * Return: pointer to a string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
