/**
 * _strspn - function that gets the length of a prefix substring
 * @s: adress of a string
 * @accept: adress of a second string
 *
 * Return: unsigned integer
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int k = 0, c = 0;

	while (*s != '\0')
	{
		c = 0;
		k = 0;
		while (accept[k] != '\0')
		{
			if (*s == accept[k])
			{
				c++;
			}
			k++;
		}
		if (c != 0)
		{
			i += c;
			s++;
		}
		else
		{
			return (i);
		}
	}
	return (i);
}
