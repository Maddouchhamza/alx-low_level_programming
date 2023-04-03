/**
 * _strchr - function that locates a character in a string
 * @s: adress to a string
 * @c: charactere
 *
 * Return: pointer to a string
 */
char *_strchr(char *s, char c)
{
	while (*s != c && *s != '\0')
	{
		s++;
	}
	return (s);
}
