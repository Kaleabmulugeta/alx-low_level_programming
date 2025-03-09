/**
 * len- compute the length of a string
 * @str: The string
 *
 * Return: The length of str
 */
int len(char *str)
{
	int leng = 0;
	char *cp = str;

	while (*cp != 0)
	{
		leng++;
		cp++;
	}
	return (leng);
}

/**
 * string_toupper- Capitalize a string
 * @s: Pointer to the string
 *
 * Return: Pointer to capitalized str
 */
char *string_toupper(char *s)
{
	int length = len(s);
	int i;

	for (i = 0; i < length; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
	}

	return (s);
}
