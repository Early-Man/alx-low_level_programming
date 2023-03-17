#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: character to print
 * Return: 1 on error -1 is returned, and errno is set appropriately
 */

int _putchar(char c)
{
	return (writes(1, &c 1));
}