#include <stdarg.h>
#include <stdlib.h>
#include "main.h"
/**
 * _vprintf_alpha - prints a char or string to stdout
 * @format: the forrmat str or char params
 * @args: the va_argument list
 * Return: 0 for success
 */
int _vprintf_alpha(const char *format, va_list args)
{
	int state = 0;

	while (*format)
	{
		if (state == 0)
		{
			if (*format == '%')
				state = 1;
			else
				_putchar(*format);
		}
		else if (state == 1)
		{
			switch (*format)
			{
			case 'c':
			{
				print_char(va_arg(args, int));
				break;
			}
			case 's':
			{
				print_str(va_arg(args, char *));
				break;
			}
			case '%':
			{
				print_char(va_arg(args, int));
				break;
			}
			}
			state = 0;
		}
		format++;
	}
	return (0);
}
