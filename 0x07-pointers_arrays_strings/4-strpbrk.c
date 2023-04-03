/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: adress to a string
 * @accept: adress to a second string
 *
 * Return: pointer to a string
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		i = 0;
		while (accept[i] != '\0')
		{
			if (accept[i] == *s)
			{
				return (s);
			}
			i++;
		}
		s++;
	}
	return ('\0');
}
