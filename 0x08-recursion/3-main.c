#include <stdio.h>

int factorial(int);

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = factorial(12);
	printf("%d\n", r);
	r = factorial(-98);
	printf("%d\n", r);
	return (0);
}
