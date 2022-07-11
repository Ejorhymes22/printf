#ifndef _MAIN_H
#define _MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
int _strlen(char *);
void _print_number(int);
int _putchar(char);
void rec_bin(int);
int print_char(va_list);
int print_string(va_list);

int (*get_print(char s))(va_list list);

typedef struct spec{
	char spec;
	int (*f)(va_list list);
} spec_t;

#endif
