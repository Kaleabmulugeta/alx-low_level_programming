#define NULL ((void *)0)

/**
 * in- checks if a char is in a string
 * @c: The char to find
 * @pattern: The string to search through
 *
 * Return: Either 1 or 0 accordingly
 */
int in(char c, char *pattern)
{
	int i, len = 0;
	char *cp = pattern;

	while (*cp != 0)
	{
		cp++;
		len++;
	}
	for (i = 0; i <= len; i++)
	{
		if (c == pattern[i])
			return (1);
	}
	return (0);
}

/**
 * _strpbrk- Finds the first occurence of one of the chars in accept
 * @s: String to search through
 * @accept: Allowed chars
 *
 * Return: Address of the first match
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
		if (in(s[i], accept))
			return (&s[i]);
	}
	return (NULL);
}
