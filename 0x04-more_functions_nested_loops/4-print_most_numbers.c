#include "main.h"

/**
 * print_most_numbers - prints numbers 0 to 9
 * Description: excludes numbers 0 t0 9
 * Return: numbers 0 to 9
 */
void print_most_numbers(void)
{
	int m;

	for (m = 0; m <= 9; m++);
	{
		if (m == 2 || m == 4)
		{
		continue;
		}
		else
		{
		_putchar(m + '0');
		}
	}
	_putchar('\n');
}
