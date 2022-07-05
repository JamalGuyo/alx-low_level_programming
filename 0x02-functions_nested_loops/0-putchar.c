#include "main.h"

/**
 * main - entry point
 * Return: 0 is success
 */
int main(void)
{
    char c[8] = "_putchar";
    int SIZE = 8;
    int i = 0;

    for(i = 0; i < SIZE; i++)
    {
        _putchar(c[i]);
    }
    _putchar('\n');
    return (0);
}
