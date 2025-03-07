/**
 * _pow- Exponentiate 
 * @exp: the exponent
 *
 * Return: The final output
 */
int _pow(int exp)
{
	int ret = 1;
	int i;

	for (i = 0; i < exp; i++)
		ret *= 10;
	return ret;
}
/**
 * _atoi- ASCII to int
 * @s: String pointer
 *
 * Return: The int
 */
int _atoi(char *s)
{
	int ret = 0;
	int i;
	int lenn = 0;
	char *cp = s;
	int sign = 1;
	int start;
	int stop;
	int len;
	int mp;

	while (*cp != 0)
	{
		lenn++;
		cp++;
	}
	for (i = 0; i < lenn; i++)
	{
		if ((s[i] != '-'))
		{
			if (s[i] < 48 || s[i] > 57)
				continue;
		}
		if (s[i] == '-')
		{
			sign *= -1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			start = i;
			stop = i;
		
			while ((s[i] >= '0' && s[i] <= '9') && (i < lenn))
			{
				stop++;
				i++;
			}
			break;
		}
	}
	len = stop - start;
	mp = _pow(len - 1);
	for (i = start; i < stop; i++)
	{
		ret += (s[i] - 48) * mp;
		mp /= 10;
	}
	return (sign * ret);
}
