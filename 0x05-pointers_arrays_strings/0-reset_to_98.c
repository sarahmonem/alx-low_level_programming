#include "main.h"

/**
 * _reset_to_98 - function take pointer and change the value that it take
 *
 */

void reset_to_98(int *n)
{
	int x;
	n = &x;

	*n = 98;
	_putchar( *n );
}
