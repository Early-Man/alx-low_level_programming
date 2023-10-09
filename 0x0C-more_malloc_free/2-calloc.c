#include <stdlib.h> /* For malloc and free */
#include <string.h> /* For memset */
#include "main.h" /* For header file */
/**
 * _calloc - Allocates memory for an array and initializes it to zero
 * @nmemb: Number of elements in the array
 * @size: Size of each element in bytes
 *
 * Return: A pointer to the allocated memory, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	/* Check for zero nmemb or size */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* Allocate memory using malloc */
	ptr = malloc(nmemb * size);

	/* Check if malloc succeeded */
	if (ptr == NULL)
		return (NULL);

	/* Initialize the allocated memory to zero using memset */
	memset(ptr, 0, nmemb * size);

	return (ptr);
}
