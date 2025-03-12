/**
 * leet- Converts plain text to leet
 * @str: Pointer to the plain text
 *
 * Return: Pointer to the leet
 */
char *leet(char *str)
{
	int i, j;
	char *match = "aAeElLtToO";
	char *rep = "4433117700";

	for (i = 0; str[i] != 0; i++)
	{
		for (j = 0; rep[j] != 0; j++)
		{
			if (str[i] == match[j])
			{
				str[i] = rep[j];
			}
		}
	}
	return (str);
}
