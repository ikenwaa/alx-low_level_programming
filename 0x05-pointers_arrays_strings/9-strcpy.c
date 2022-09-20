#include "main.h"

/**
 * _strcpy - copies string to buffer
 * @dest: destination
 * @src: source
 * Return: copy of string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
		dest[i] = src[i];

	i++;

	return (dest);
}
