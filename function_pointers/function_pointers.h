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

/**
 * int_index - searches for an integer in an array
 * @array: pointer to the array
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: index of the first element for which cmp doesn't return 0, -1 if no match or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int));

#endif /* FUNCTION_POINTERS_H */
