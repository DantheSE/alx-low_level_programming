#include <stdio.h>
/**
 * main - Prints the lowercase alphabet followed by a newline.*
 * Return: Always 0
 */
int main(void)
{
for (char letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
putchar('\n');

return (0);
}