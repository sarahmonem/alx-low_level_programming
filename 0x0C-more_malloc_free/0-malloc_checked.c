#include "main.h"

/**
 * *malloc_checked - allocate memory usingmalloc  and exit if fail
 * @b: integer
 * Return: pointer to the array initilized or NULL
 */

void *malloc_checked(unsigned int b)
{
	int *n = malloc(b);

	if (n == 0)
		exit(98);

	return (n);
}
