#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>


/**
 * struct format - struct fir printer functions
 * @id: identifier
 * @f: type pointer to function for the conversion specifier
 *
 */

typedef struct format
{
	char *id;
	int (*f)(va_list);
} match;


int print_revs(va_list args);
int printf_char(va_list val);
int _printf(const char *format, ...);
int _putchar(char c);
int printf_string(va_list val);
int _strlen(char *s);
int _strlenc(const char *s);
int printf_37(void);
int print_int(va_list args);
int print_dec(va_list args);
int print_bin(va_list val);
int print_unsigned(va_list args);
int print_oct(va_list val);
int print_hex(va_list val);
int print_HEX(va_list val);
int print_HEX_extra(unsigned int num);
int print_exc_string(va_list val);
int print_pointer(va_list val);
int print_hex_extra(unsigned long int num);
int print_rot13(va_list args);

#endif
