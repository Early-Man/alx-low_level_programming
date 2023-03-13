#include "main.h"

/**
 * more_numbers - prints 10 times the nums.from 0 to 14
 * @n: input
 * @m: input
 * Return: 10 times of the nums from 0 to 14
 */
void more_numbers(void)
{

	int n, m;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m <= 14; m++)
		{
			if (m > 9)
			{
				_putchar((m / 10) +'0');
			}
			_putchar((m % 10) + '0');
		}
		_putchar('\n');
	}
}
