/**
<<<<<<< HEAD
 * _pow- Exponentiate 
=======
 * _pow- Exponentiate
>>>>>>> 08df40e629d3dc0213857f2772e985e374d19a3c
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
<<<<<<< HEAD
	return ret;
=======
	return (ret);
>>>>>>> 08df40e629d3dc0213857f2772e985e374d19a3c
}
/**
 * _atoi- ASCII to int
 * @s: String pointer
 *
 * Return: The int
 */
int _atoi(char *s)
{
<<<<<<< HEAD
	int ret = 0;
=======
	unsigned int ret = 0;
>>>>>>> 08df40e629d3dc0213857f2772e985e374d19a3c
	int i;
	int lenn = 0;
	char *cp = s;
	int sign = 1;
<<<<<<< HEAD
	int start;
	int stop;
=======
	int start = 0;
	int stop = 0;
>>>>>>> 08df40e629d3dc0213857f2772e985e374d19a3c
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
<<<<<<< HEAD
		
=======

>>>>>>> 08df40e629d3dc0213857f2772e985e374d19a3c
			while ((s[i] >= '0' && s[i] <= '9') && (i < lenn))
			{
				stop++;
				i++;
			}
			break;
		}
	}
	len = stop - start;
<<<<<<< HEAD
=======
	if (len == 0)
		return (0);
>>>>>>> 08df40e629d3dc0213857f2772e985e374d19a3c
	mp = _pow(len - 1);
	for (i = start; i < stop; i++)
	{
		ret += (s[i] - 48) * mp;
		mp /= 10;
	}
	return (sign * ret);
}
<<<<<<< HEAD
=======

>>>>>>> 08df40e629d3dc0213857f2772e985e374d19a3c
