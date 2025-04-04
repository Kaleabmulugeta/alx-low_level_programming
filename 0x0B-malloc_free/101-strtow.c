#include <stdlib.h>

/**
 * len- Length of substring
 * @str: Strong
 * @idx: Index
 *
 * Return: Length
 */
int len(char *str, int idx)
{
	int i, length = 0;

	for (i = idx; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			break;
		length++;
	}
	return (length);
}
/**
 * find_next- Finds the index of the next non space char
 * @str: Pointer to parent string
 * @idx: Search start position
 *
 * Return: Length
 */
int find_next(char *str, int idx)
{
	int i;

	for (i = idx; str[i] != 0; i++)
	{
		if (str[i] != ' ')
			return (i);
	}
	return (-1);
}
/**
 * count_words- Counts words in a string
 * @cp: The string
 *
 * Return: Number of words
 */
int count_words(char *cp)
{
	int words = 0, in_word = 0;

	while (*cp != 0)
	{
		if (*cp != ' ')
			in_word = 1;
		if (in_word && *cp == ' ')
		{
			in_word = 0;
			words++;
		}
		cp++;
	}
	if (in_word && *cp == 0)
		words++;
	return (words);
}
/**
 * strtow- Splits a string to words
 * @str: The string
 *
 * Return: Array of pointers to words in the heap
 */
char **strtow(char *str)
{
	int words, i, j, lk, idx = 0, sub_len;
	char **arr;
	char *word;

	if (str == NULL || str[0] == 0)
		return (NULL);
	words = count_words(str);
	arr = (char **)malloc((words + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < words; i++)
	{
		idx = find_next(str, idx);
		if (idx == -1)
			break;
		if (str[idx] == 0)
			break;
		sub_len = len(str, idx);
		if (sub_len == 0)
		{
			i--;
			idx++;
			continue;
		}
		word = (char *)malloc((sub_len + 1) * sizeof(char));
		if (word == NULL)
		{
			for (lk = 0; lk < i; lk++)
				free(arr[lk]);
			free(arr);
			return (NULL);
		}
		for (j = 0; j < sub_len; j++)
		{
			word[j] = str[idx];
			idx++;
		}
		word[sub_len] = 0;
		arr[i] = word;
	}
	arr[words] = NULL;
	return (arr);
}
