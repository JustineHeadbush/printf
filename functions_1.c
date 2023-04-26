#include "main.h"
/**
 * my_char - prints a character
 * @forms: variable argument list
 */
void my_char(va_list forms)
{
	char character = va_arg(forms, int);

	write(STDOUT_FILENO, &character, 1);
}

/**
 * my_int - prints an integer
 * @forms: variable argument list
 */
void my_int(va_list forms)
{
	int in = va_arg(forms, int);
	char integers[50];
	int index = 0;

	if (in < 0)
	{
		write(STDOUT_FILENO, "-", 1);
		in = -in;
	}

	while (in > 0)
	{
		integers[index] = in % 10 + '0';
		in = in / 10;
		index++;
	}

	if (index == 0)
	{
		write(STDOUT_FILENO, "0", 1);
		return;
	}

	while (index > 0)
	{
		write(STDOUT_FILENO, &integers[index - 1], 1);
		index--;
	}
}
