#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>

/**
 * print_name - prints a name
 * @name: name of the person
 * @f: function pointer to apply to the name
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *));

/**
 * array_iterator - executes a function on each element of an array
 * @array: pointer to the array
 * @size: size of the array
 * @action: pointer to the function to be executed on each element
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int));

#endif /* FUNCTION_POINTERS_H */
