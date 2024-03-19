#include "main.h"
#include <stdio.h>

/**
 * puts2 - Prints every other character of a string, starting with the first character, followed by a new line.
 * @str: The string to process
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		printf("%c\n", str[i]);
		i += 2;
	}
}
