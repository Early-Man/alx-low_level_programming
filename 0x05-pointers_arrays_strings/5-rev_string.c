#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
    int length = 0;
    int start, end;
    char temp;

    /* Find the length of the string */
    while (s[length] != '\0')
        length++;

    /* Set start and end indexes for swapping */
    start = 0;
    end = length - 1;

    /* Swap characters from start and end indexes moving towards the middle */
    while (start < end)
    {
        /* Swap characters */
        temp = s[start];
        s[start] = s[end];
        s[end] = temp;

        /* Move towards the middle */
        start++;
        end--;
    }
}
