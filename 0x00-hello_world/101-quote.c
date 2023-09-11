#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the specified message to the standard error.
 *
 * Return: Always 1 (error code)
 */
int main(void)
{
char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
ssize_t len = 59;
if (write(2, message, len) != len)
{
perror("Write error");
return (1);
}
return (1);
}

