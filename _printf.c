#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

/**
 * _printf - prints a formatted input to the stdout
 * @format: the format char params
 * @...: the unsigned args
 * Return: 0 for success
 */

int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);
	_vprintf_alpha(format, args);
	_vprintf_decimal(format, args);
	_vprintf_interger(format, args);
	va_end(args);

	return (0);
}
