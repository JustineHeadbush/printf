#include "main.h"
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

/**
 * my_string - prints a string
 * @forms: argument list
 */

void my_string(va_list forms)
{
	char *stringy = va_arg(forms, char *);

	if (stringy == NULL)
	{
		const char *string_null = "nil";

		write(STDOUT_FILENO, string_null, strlen(string_null));
	}
	else
	{
		write(STDOUT_FILENO, stringy, strlen(stringy));
	}
}

/**
 * my_percent - functions that prints % sign
 * Return: 0
 */

void my_percent(void)
{
	char perc = '%';

	write(STDOUT_FILENO, &perc, 1);
}
