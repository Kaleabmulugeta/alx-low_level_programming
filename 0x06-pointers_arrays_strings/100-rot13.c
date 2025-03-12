/**
 * rot13- Caesar algotithm of shift 13
 * @s: Pointer to the string
 *
 * Return: The shifted string
 */
char *rot13(char *s)
{
	char *st = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rp = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;
	int j;

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; st[j] != 0; j++)
		{
			if (s[i] == st[j])
			{
				s[i] = rp[j];
				break;
			}
		}
	}
	return (s);
}
