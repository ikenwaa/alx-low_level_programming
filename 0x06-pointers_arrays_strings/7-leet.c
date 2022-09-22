#include "main.h"

/**
 * leet - Encodes a string into 1337 - LEET
 * @str: string to encode
 * Return: encoded string
 */

char *leet(char *str)
{
	char letters[] = "AaEeOoTtLl";
	char nums[] = "4433007711";
	int i = 0, j = 0;

	for(; str[i] != '\0'; i++)
	{
		for (; j < 10; j++)
		{
			if (str[i] == letters[j])
				str[i] = nums[j];
		}
	}
	return (str);
}
