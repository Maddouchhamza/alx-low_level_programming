/**
 * rot13 - function that encodes a string using rot13
 * @s : string to encode
 *
 * Return: pointer to encoded string
 */
char *rot13(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if ((s[i] >= 65 && s[i] <= 77) || (s[i] >= 97 && s[i] <= 109))
		{
			s[i] += 13;
			i++;
			continue;
		}
		if ((s[i] >= 78 && s[i] <= 90) || (s[i] >= 110 && s[i] <= 122))
		{
			s[i] -= 13;
			i++;
			continue;
		}
		i++;
	}
	return (s);
}
