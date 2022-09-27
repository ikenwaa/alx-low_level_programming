#include "main.h"

/**
 * main - checks code
 * Return: 0 always
 */

int main(void)
{
	char *s = "Augustine, Ikenwa";
	char *f = "ken";
	char *t;

	t = _strpbrk(s, f);
	printf("%s\n", t);
	return (0);
}
