#include "main.h"

/**
 * _strcpy - copies a string to another buffer
 * @dest: The destination buffer
 * @src: The source string
 *
 * Return: A pointer to the destination buffer.
 */
char *_strcpy(char *dest, char *src)
{
    char *result = dest;

    while ((*dest++ = *src++))
        ;
    return result;
}
