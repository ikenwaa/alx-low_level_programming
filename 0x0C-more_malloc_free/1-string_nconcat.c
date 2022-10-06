#include "main.h"

/**
 * string_nconcat - Concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: length of s2 to be concatenated
 * Return: pointer to space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, str, k;
	char *c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0', i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	if (n > j)
		n = j;

	str = i + n;

	c = malloc(str + 1);

	if (c == NULL)
		return (NULL);

	for (k = 0; k < str; k++)
	{
		if (k < i)
			c[k] = s1[k];
		else
			c[k] = s2[k - i];
	}
	c[k] = '\0';

	return (c);
}
