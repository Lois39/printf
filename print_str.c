#include "main.h"
/**
 * print_str - prints a string of characters to stdout
 * @s: the string params
 * Return: void
 */
void print_str(char *s)
{
while (*s != '\0')
{
_putchar(*s);
s++;
}
}
