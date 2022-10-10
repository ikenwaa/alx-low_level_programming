#include "dog.h"

int main(void)
{
	struct dog my_dog;

	my_dog.name = "Bingo";
	my_dog.age = 2.9;
	my_dog.owner = "Austin";
	print_dog(&my_dog);
	return (0);
}
