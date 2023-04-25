#include "main.h"

/**
 * my_string - prints a string
 * @forms: argument list
 */

void my_string(va_list forms)
{
	char *stringy = va_arg(forms, char*);
	int index = 0;

	while (stringy[index] != '\0')
	{
		index++;
	}
	write(STDOUT_FILENO, stringy, index);
}

/**
 * my_percent - prints the % sign
 * @forms: argument list
 */
void my_percent(va_list forms)
{
	UNUSED(forms);
	write(1, "%%", 1);
}
