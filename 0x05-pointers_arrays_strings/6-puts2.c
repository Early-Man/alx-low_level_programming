#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * puts2 - Prints every other character of a string
 * @str: The input string
 */
void puts2(char *str)
{
	int i;

	if (str == NULL)
		return;

	i = 0;
	while (str[i] != '\0')
	{
		printf("%c ", str[i]);
		i += 2;
	}
	printf("\n");
}
