#include "main.h"

/** main - Prints all the arguments it receives on a new line.
 * @argc: argument count
 * @argv: arguments
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
