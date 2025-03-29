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
/**
 * palindrome- Checks if a string is a palindrome
 * @s: The string
 * @idx: index
 * @mid: Mid point
 * @count: Recursion count
 * @length: Length of a string
 *
 * Return: 0 or 1 accordingly
 */
int palindrome(char *s, int idx, int mid, int *count, int length)
{
	if (*count == mid)
		return (1);
	*count = (*count) + 1;
	if (s[idx] == s[length - 1 - idx])
		return (1 && palindrome(s, idx + 1, mid, count, length));
	return (0);
}
/**
 * is_palindrome- checks is a string is a palindrome
 * @s: The string
 *
 * Return:1 or 0
 */
int is_palindrome(char *s)
{
	int count = 0;
	int length = _strlen_recursion(s);
	int mid = length / 2;

	return (palindrome(s, 0, mid, &count, length));
}
