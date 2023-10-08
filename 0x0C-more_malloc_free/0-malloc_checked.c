#include "main.h"

/**
 * *malloc_check - allocate memory using and exit if fail
 * @b: in
 * Return: pointer to the array initilized or NULL
 */

void *malloc_checked(unsigned int b)
{
	int *n = malloc(b);

	if (n == 0)
		exit(98);

	return (n);
}
