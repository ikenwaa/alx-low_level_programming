#include "main.h"

/**
 * main - Checks the code
 * Return: Always 0.
 */

int main(void)
{
	char s1[] = "Augustine";
	char s2[] = "Engineer";

	printf("%d\n", _strcmp(s1, s2));
	printf("%d\n", _strcmp(s2, s1));
	printf("%d\n", _strcmp(s1, s1));
	return (0);
}
