#include "main.h"

/**
 * print_line - check for a digit
 * @n : number of _ to be printed
 * Return:void
 */

void print_line(int n)
{

	int i = 0;

	while (i < n && n > 0)
	{
		putchar('_');
		i++;
	}
	putchar('\n');

}
