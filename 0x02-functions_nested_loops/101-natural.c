#include <stdio.h>

/**
 * main - prints the sum of all multiples of 3 or 5 up to 1024
 * Return: always success
 */

int main(void)
{

	int j, z = 0;

	while (j < 1024)
	{
	if ((j % 3 == 0) || (j % 5 == 0))
	{
	z += j;
	}
	j++;
	}
	printf("%d\n", z);
	return (0);
}
