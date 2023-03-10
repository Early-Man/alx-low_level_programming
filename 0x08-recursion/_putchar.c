#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints characters to stdout 
 * @c: character to print 
 * 
 * Return: On success 1 
 * On erorr -1 is returned, and errno is set
 * appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
