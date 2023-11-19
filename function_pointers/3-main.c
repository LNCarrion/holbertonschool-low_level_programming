#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    int num1, num2, result;
    int (*func)(int, int);
    char buffer[12];
    int len;

    if (argc != 4)
    {
        write(STDOUT_FILENO, "Error\n", 6);
        exit(98);
    }

    func = get_op_func(argv[2]);

    if (func == NULL)
    {
        write(STDOUT_FILENO, "Error\n", 6);
        exit(99);
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[3]);
    
    result = func(num1, num2);

    len = sprintf(buffer, "%d\n", result);
    write(STDOUT_FILENO, buffer, len);

    return (0);
}

