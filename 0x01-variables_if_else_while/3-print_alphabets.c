#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Where the program starts
*
* Description: do something
*
* Return: 0 (success)
*/

int main(void)
{
	char ch = 'a';
	char chcap = 'A';
	while (ch <= 'z')
	{
	putchar (ch);
	ch++;
	}
	while (ch <= 'Z')
	{
	putchar (chcap);
	chcap++;
	}
	putchar ('\n');
	return (0);
}
