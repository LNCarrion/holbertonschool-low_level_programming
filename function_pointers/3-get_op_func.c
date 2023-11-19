#include "3-calc.h"
#include <unistd.h>
#include <stdlib.h>

/**
 * get_op_func - Selects the correct function to perform the operation
 * @s: Operator passed as argument to the program
 * Return: Pointer to the function that corresponds to the operator
 */
int (*get_op_func(char *s))(int, int)
{
    op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i = 0;

    while (ops[i].op)
    {
        if (*(ops[i].op) == *s && s[1] == '\0')
            return (ops[i].f);
        i++;
    }

    write(STDOUT_FILENO, "Error\n", 6);
    exit(99);
}

