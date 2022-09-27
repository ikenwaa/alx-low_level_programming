#include "main.h"

/**
 * main - check the code
 * Return: 0 always
 */

int main(void)
{
	char *s = "augustine";
	char *f;

	f = _strchr(s, 'g');

	if (f != NULL)
		printf("%s\n", f);
	return (0);
}
