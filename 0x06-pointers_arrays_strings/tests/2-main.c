#include "main.h"

/**
 * main - check the code
 * Return: Always 0
 */

int main(void)
{
	char s1[98];
	char *ptr;
	int i;

	for (i = 0; i < 98; i++)
		s1[i] = '*';
	s1[i] = '\0';
	printf("%s\n", s1);
	ptr = _strncpy(s1, "Augustine Ikenwa\n", 11);
	printf("%s\n", s1);
	printf("%s\n", ptr);
	ptr = _strncpy(s1, "Solve the problem\n", 10);
	printf("%s\n", s1);
	printf("%s\n", ptr);

	for (i = 0; i < 98; i++)
	{
		if (i % 10)
			printf(" ");
		if (!(i % 10) && i)
			printf("\n");
		printf("0x%02x", s1[i]);
	}
	printf("\n");
	return (0);
}
