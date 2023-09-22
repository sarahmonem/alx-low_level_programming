#include "main.h"

/**
 * _puts - function prints a string
 *
 * @str: pointer parameter
 *
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar("\n");
}
