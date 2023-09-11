#include <unistd.h>
/**
 * main - Entry point
 * Description: Prints a message to stderr and returns 1.
 * Return: 1
 */
int main(void)
{
write(2, "and that piece of art is useful - Dora Korpar, 2015-10-19\n", 61);
return (1);
}
