int _strcmp(char *s1, char*s2)
{
	int diff = 0;
	int i = 0;
	char *cp1 = s1;
	char *cp2 = s2;

	while (s1[i] == s2[i])
	{
		i++;
		if (s1[i] == 0)
			return (0);
	}
	diff = s1[i] - s2[i];
	return (diff);
}
