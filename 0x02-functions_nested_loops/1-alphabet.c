#include "main.h"

/**
 * print_alphabet - function for print alphabet using _putchar
 *
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
