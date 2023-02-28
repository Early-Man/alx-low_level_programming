#include "main.h"
/**
 * print_alphabet - Prints the alphabets in lowe * rcase
 * Return: 0 (always)
 */
void print_alphabet(void);
{
	int i;

	for (i = 97, i <= 122, i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
