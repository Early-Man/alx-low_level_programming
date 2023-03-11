#include "main.h"

/**
 * print_numbers - prints number 0 - 9 followed by new line
 * @p: number to print
 * Return: 0 (success)
 */
void print_numbers(void)
{
	int p;

	for (p = 0; p <= 9; p++)
	{
		_putchar(p + '\0');
	}
	_putchar('\n');
}
