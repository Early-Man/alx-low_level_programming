#include "main.h"
/**
 * print_sign - Determines if the input number
 * is greater, equal or less than 0
 *
 * Return: 1 if greater than 0, zero if 0 and -1
 * if less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
