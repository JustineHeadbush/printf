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
 * my_decimal - prints a decimal integer
 * @forms: variable argument list
 */
void my_decimal(va_list forms)
{
	int deci = va_arg(forms, int);

	char buff[50];
	int index = 0;

	if (deci == 0)
	{
		write(STDOUT_FILENO, "0", 1);
		return;
	}

	if (deci < 0)
	{
		write(STDOUT_FILENO, "-", 1);
		deci = -deci;
	}

	while (deci != 0)
	{
		buff[index++] = (deci % 10) + '0';
		deci = deci / 10;
	}

	while (--index >= 0)
	{
		write(STDOUT_FILENO, &buff[index], 1);
	}
}

/**
 * my_int - prints an integer
 * @forms: variable argument list
 */
void my_int(va_list forms)
{
	int in = va_arg(forms, int);

	int index = 0;
	char buff[50];

	if (in < 0)
	{
		write(1, "-", 1);
		in = -in;
	}

	if (in == 0)
	{
		write(1, "0", 1);
		return;
	}

	while (in != 0)
	{
		buff[index++] = in % 10 + '0';
		in /= 10;
	}

	while (--index >= 0)
	{
		write(1, &buff[index], 1);
	}
}
