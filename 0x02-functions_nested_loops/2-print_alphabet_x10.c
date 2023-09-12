#include "main.h"

/**
 * print_alphabet - function for print alphabet using _putchar
 *
 */

void print_alphabet_x10(void)
{
	int ch;
	int i = 0;

	for (i = 0; i <= 10; i++){
		    for (ch = 'a'; ch <= 'z'; ch++)
                _putchar(ch);
        _putchar('\n');
	}
}
