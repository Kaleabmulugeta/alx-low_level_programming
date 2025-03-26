/**
 * _strlen_recursion- Compute length of a string recursively
 * @s: The string
 *
 * Return: The length
 */
int _strlen_recursion(char *s)
{
	if (*s != 0)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}

