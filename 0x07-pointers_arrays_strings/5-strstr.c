/**
 * _strstr - function that locates a substring
 * @haystack: adress to a string
 * @needle: adress to a second string
 *
 * Return: pointer to a string
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack != '\0')
	{
		for (i = 0; needle[i] != '\0'; i++)
		{
			if (haystack[i] == '\0')
			{
				return (0);
			}
			if (haystack[i] != needle[i])
			{
				break;
			}
		}
		if (needle[i] == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (0);
}
