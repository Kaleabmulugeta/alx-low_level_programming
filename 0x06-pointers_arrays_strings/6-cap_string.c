/**
 * is_lower- Checks if a char is uppercase or lowercase
 * @c: the char
 *
 * Return: 1 if lower case; 0 if upper
 */
int is_lower(char c)
{
	return (c <= 'z' && c >= 'a');
}
/**
 * is_char- Checks if a char is a letter
 * @c: the char
 *
 * Return: 1 if a letter; 0 if not
 */
int is_char(char c)
{
	return ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'));
}
/**
 * len- Length of a str
 * @s: pointer to the string
 *
 * Return: length of the str
 */
int len(char *s)
{
	int leng = 0;
	char *cp = s;

	while (*cp != 0)
	{
		cp++;
		leng++;
	}
	return (leng);
}

/**
 * cap_string- capitalize all words in a given string
 * @str: The string
 *
 * Return: Capitalized string
 */
char *cap_string(char *str)
{
	int l = len(str);
	int i;

	if (str[0] <= 'z' && str[0] >= 'a')
		str[0] -= 32;
	for (i = 0; i < l; i++)
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == ',' || str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?' || str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			if (is_char(str[i + 1]))
			{
				if (is_lower(str[i + 1]))
					str[i + 1] -= 32;
			}
		}
	}
	return (str);
}
