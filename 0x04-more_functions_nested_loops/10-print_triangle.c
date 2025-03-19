#include "main.h"
/**
 * print_triangle - prints out a triangle of determined size
 * @size: size of triangle
 * Return: no return value
 */

void print_triangle(int size)
{
    int rows, space, hash_print;
    for (rows = 1; rows <= size; rows++)
    {
        for (space = 0; space < (size - rows); space++)
        {
            _putchar(' ');
        }
        for (hash_print = 0; hash_print < rows; hash_print++)
        {
            _putchar('#');
        }
        _putchar('\n');
    }
    _putchar('\n');
}