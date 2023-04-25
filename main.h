#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

typedef struct spec
{
	char *specs;
	void (*print)(va_list);
} spec_t;

void my_char(va_list forms);
void my_int(va_list forms);
void my_percent(void);
void my_string(va_list forms);
void my_decimal(va_list forms);
int _printf(const char *format, ...);

#endif
