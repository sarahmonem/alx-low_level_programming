#include <stdio.h>
#include "main.h"

/**
 *Description: code for check uppercase
 *
 * _isupper: check if ch is uppercase
 *
 *@c: input character
 *
 *Return: return1 if ch is upper and 0 if else
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
