#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	int i, iname, iowner;

	p = malloc(sizeof(p));

	if (p == NULL || name == NULL || owner == NULL)
	{
		free(p);
		return (NULL);
	}

	for (iname = 0; name[iname]; iname++)
		;
	for (iowner = 0; owner[iowner]; iowner++)
		;

	p->name = malloc(iname + 1);
	p->owner = malloc(iowner + 1);

	if ((p->name == NULL) || (p->owner == NULL))
	{
		free(p->name);
		free(p->owner);
		free(p);
		return (NULL);
	}

	for (i = 0; i < iname; i++)
		p->name[i] = name[i];
	p->name = '\0';

	p->age = age;

	for (i = 0; i < owner[i]; i++)
		p->owner[i] = owner[i];
	p->owner = '\0';

	return (p);
}
