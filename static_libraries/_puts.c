#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: The string to print
 */
void _puts(char *str)
{
    while (*str)
    {
        _putchar(*str);
        str++;
    }
}
