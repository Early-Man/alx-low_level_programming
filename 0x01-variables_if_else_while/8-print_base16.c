#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in l * owercas
 * Return: 0
 */
int main(void)
{
	int i;
	char lc;

	for (i = 0; i < 10; i++)
		putchar((i % 10) + '0');

	for (lc = 'a'; lc <= 'f'; lc++)
		putchar(lc);

	putchar('\n');
	return (0);
}
