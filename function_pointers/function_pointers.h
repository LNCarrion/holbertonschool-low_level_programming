#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/**
 * print_name - prints a name
 * @name: name of the person
 * @f: function pointer to apply to the name
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *));

#endif /* FUNCTION_POINTERS_H */
