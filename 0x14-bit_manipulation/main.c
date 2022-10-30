#include "main.h"

int main(void)
{
	int n;

	n = get_endianness();
	if (n != 0)
		printf("Little ENdian\n");
	else
		printf("Big endian\n");
	return (0);
}
