#include "main.h"

/**
 * _isupper: check if ch is uppercase
 *
 *@c: input character
 *
 *Return: return1 if ch is upper and 0 if else
 */

int _isupper(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
