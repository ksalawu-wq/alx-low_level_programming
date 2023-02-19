#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (error)
 */
int main(void)
{
    char message[] =
        "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

    /* Use write() to print the message to the standard error */
    write(2, message, sizeof(message) - 1);

    /* Return 1 to indicate an error occurred */
    return (1);
}
