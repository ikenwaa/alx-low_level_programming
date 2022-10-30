#include "main.h"

int main(void)
{
	unsigned int n;

	n = binary_to_uint("1001");
	printf("%u\n", n);
	n = binary_to_uint("1e001");
	printf("%u\n", n);
	return (0);
}
