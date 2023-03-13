#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of diag. lines
 * Return: void
 */
void print_diagonal(int n)
{
	int l, m;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 0; l < n; l++)
		{
			for (m = 0; m < l; m++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
