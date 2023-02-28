#include "main.h"
/**
 * print_last_digit - prints the last digit of a * number.
 *
 * Return: last digit
 */
int print_last_digit(int j)
{
	int l;

	l = j % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
