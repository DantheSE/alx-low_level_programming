#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Prints the specified message to stderr and returns 1.
 *
 * Return: Always 1
 */
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 60);
return (1);
}
