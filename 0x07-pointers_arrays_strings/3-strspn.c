/**
 * in- checks if a char is in a string
 * @c: The character
 * @pattern: The string to search
 *
 * Return: Either 1 or 0 based on the values
 */
int in(char c, char *pattern)
{
	int i;

	for (i = 0; pattern[i] != 0; i++)
	{
		if (pattern[i] == c)
			return (1);
	}
	return (0);
}

/**
 * _strspn- Finds the length of the first substring made up of chars in accept
 * @s: The string
 * @accept: Accepted chars
 *
 * Return: Length of the substring
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int ins;
	unsigned int len = 0;

	for (i = 0; s[i] != 0; i++)
	{
		ins = in(s[i], accept);
		if (ins)
		{
			while (ins)
			{
				ins = in(s[i], accept);
				len++;
				i++;
			}
			return (len - 1);
		}
	}
	return (0);
}
