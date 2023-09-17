#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees dogs
 * @d: struct dog to free
 * By: Mpagi Jolly/Jojo-Programming
 */
void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}
