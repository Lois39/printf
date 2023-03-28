#include <unistd.h>

/**
 * _putchar - writes a single char to stdout
 * @c: the char params passed to the function
 * Return: 0 for success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
