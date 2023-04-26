#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
 * _printf - prints anything
 * @format: list of types of arguments passed to the function
 * @...: variable number of arguments
 * Return: The number of characters printed.
 */

int _printf(const char *format, ...)

{
	va_list forms;
	int a = 0, b, count = 0;

	spec_t specs[] = {
		{"c", my_char},
		{"d", my_int},
		{"%", my_percent},
		{"s", my_string},
		{"i", my_int},
		{NULL, NULL}
	};
	va_start(forms, format);

	while (format && format[a])
	{
	if (format[a] == '%')
	{
		b = 0;
		while (specs[b].specs)
		{
			if (*(specs[b].specs) == format[a + 1])
			{
				specs[b].print(forms);
				count++;
				break;
			}
			b++;
		}
		a = a + 2;
	}
	else
	{
		write(STDOUT_FILENO, &format[a], 1);
		a++;
		count++;
	}
	}
	va_end(forms);
	return (count);
}
