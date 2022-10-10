#include "dog.h"

/**
 * print_dog - A function that prints a struct dog
 * @d: Dog's struct
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	else
	{
		if (!(d->name))
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		if (d->age > 0)
			printf("Age: %.1f\n", d->age);
		else
			printf("Age: (nil)\n");

		if (d->owner)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
