#include "_putchar.h"
/**
 * main - prints the string "Putchar" from a character array.
 * Return: 0 on success.
 */
int main(void)
{
	char c[] = "Holberton";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
