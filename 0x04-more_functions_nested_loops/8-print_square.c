#include "main.h"
/**
 * print_square - prints a square made out of hashes
 *
 * @size: length and breadth of the square
 * Return: no return value
 */

void print_square(int size)
{
    int rows, hash_number;
    if (size > 0)
    {
        for (rows = 0; rows < size; rows++)
        {
            for (hash_number = 0; hash_number < rows; hash_number++)
            {
                _putchar('#');
            }
        }
    }
    _putchar('\n');
}
