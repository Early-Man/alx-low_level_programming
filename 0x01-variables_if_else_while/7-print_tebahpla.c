#include <stdio.h>

/**
 * main - prints the lowercase alphabet in rever * s
 * Return: 0
 */
int main(void)
{
	char alp[26] = "zyxwvutsrqponmlkjihgfedcba";
	int i;

	for (i = 0; i < 26; i++)
		putchar(alp[i]);

	putchar('\n');
	return (0);
}
