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
	char *cp = s;

	while (*cp != 0)
	{
		if (*cp == c)
			return (cp);
		cp++;
	}
	return (NULL);
}
