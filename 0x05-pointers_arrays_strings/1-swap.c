#include "main.h"

/**
 * swap_int - swap between two integers
 * @a : is a pointer
 * @b : is a pointer
 *
 */

void swap_int(int *a, int *b)
{
	int x = *a;

	*a = *b;
	*b = x;

}
