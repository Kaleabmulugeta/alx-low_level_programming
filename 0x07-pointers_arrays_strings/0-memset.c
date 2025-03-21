/**
 * _memset- Sets value stored in a buffer to char b n times
 * @s: The buffer
 * @b: The over-writing character
 * @n: The number of times to overwrite the buffer
 *
 * Return: Pointer to the buffer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
