#include "main.h"
/**
 * main - print_alphabet_x10
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	int i;
	int j;
	for (i = 1, i <= 10, i++);
	{
		for (j = 99, j <= 122, j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
