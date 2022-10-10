#include "dog.h"

int main(void)
{
	dog_t *my_dog;

	my_dog = new_dog("Pup", 3.5, "Me");
	printf("My name is %s, and I am %.1f years old :) - Woof!\n", my_dog->name, my_dog->age);
	free_dog(my_dog);
	return (0);
}
