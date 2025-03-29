#include "main.h"
/**
 * reverse_array - function to reverse an integer array
 * @a: the array passed
 * @n: number of elements in array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
    int i = 0, temp;

    for (i = 0; i < n / 2; i++)
    {
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }
}
