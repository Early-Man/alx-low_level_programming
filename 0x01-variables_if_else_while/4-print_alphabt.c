#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, foll * owed by a new line.
 *Return: 0
 */
int main(void)
{
	char lu;

for (lu = 'a'; lu <= 'z'; lu++)
	{
		if (lu != 'e' && lu != 'q')
			putchar(lu);
	}
	putchar('\n');
	return (0);
}
