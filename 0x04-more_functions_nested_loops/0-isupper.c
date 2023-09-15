#include <stdio.h>
#include "main.h"

/**
 *Description: code for check uppercase
 *
 * _isupper: check if ch is uppercase
 *
 *@ch: input character
 *
 *Return: return1 if ch is upper and 0 if else
 */
int _isupper(int ch)
{
	if (ch >= 65 && ch <= 90)
		return (1);
	else
		return (0);
}
