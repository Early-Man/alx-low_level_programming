#include "main.h"

/**
 * _isdigit - checks for digits 0 to 9.
 * @c: variable to be checked
 * Return: 1 if n is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
