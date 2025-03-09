/**
 * len- Length of a string
 * @s: The string
 *
 * Return: The length
 */
int len(char *s)
{
	int length = 0;
	char *cp = s;

	while (*cp != 0)
	{
		cp++;
		length++;
	}
	return (length);
}
/**
 * leet- Converts plain text to leet
 * @str: Pointer to the plain text
 *
 * Return: Pointer to the leet
 */
char *leet(char *str)
{
	int i;
	int length = len(str);

	for (i = 0; i < length; i++)
	{
		if (str[i] == 'a' || str[i] == 'A')
		{
			str[i] = '4';
		}
		else if (str[i] == 'e' || str[i] == 'E')
		{
			str[i] = '3';
		}
		else if (str[i] == 'o' || str[i] == 'O')
		{
			str[i] = '0';
		}
		else if (str[i] == 't' || str[i] == 'T')
		{
			str[i] = '7';
		}
		else if (str[i] == 'l' || str[i] == 'L')
		{
			str[i] = '1';
		}
	}
	return (str);
}
