#include "main.h"

/**
 * _puts - Prints a string followed by a new line
 * @str: The string to be printed
 *
 * Description: This function prints each character of the string `str` until
 * it reaches the null terminator '\0', then prints a new line.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
