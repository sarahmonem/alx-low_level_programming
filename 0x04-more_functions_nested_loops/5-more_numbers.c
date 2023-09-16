#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14, followed by a new line.
 *
*/
void more_numbers(void)
{
	char i;
	int j;

	for (j = 0; j <10; j++)
	{
		for (i = 48; i <= 57 ; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
