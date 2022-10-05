#include "main.h"

/**
 * str_concat - Concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to newly allocated space
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j, len = 0;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	str = malloc(sizeof(char) * len);

	if (str == 0)
		return (NULL);

	for (i = 0; s1[i]; i++)
		str[j++] = s1[i];
	for (i = 0; s2[i]; i++)
		str[j++] = s2[i];

	return (str);
}
