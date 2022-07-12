#ifndef _MAIN_H
#define _MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
int print_num(va_list);
void print_recurs_(int);
int _putchar(char);
void rec_bin(unsigned int);
int print_bin(va_list);
int print_char(va_list);
int print_string(va_list);
int print_unsigned(va_list);
int print_octal(va_list);
int print_hex(va_list);
int print_HEX(va_list);
int print_S(va_list);
int print_address(va_list);

char *convert(unsigned long int, int);

int (*get_print(char s))(va_list list);

/**
 * struct spec - specification structure
 *
 * @spec: specification
 * @f: function associated
 */

typedef struct spec
{
	char spec;
	int (*f)(va_list list);
} spec_t;

#endif
