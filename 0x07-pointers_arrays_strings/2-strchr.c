#define NULL ((void *)0)

/**
 * _strchr- Locates a char in a string
 * @s: The string
 * @c: Character to locate
 *
 * Return: NULL or pointer to the char
 */
char *_strchr(char *s, char c)
{
	int i, len = 0;
	char *cp = s;

	while (*cp != 0)
	{
		cp++;
		len++;
	}
	for (i = 0; i < len; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (NULL);
}
