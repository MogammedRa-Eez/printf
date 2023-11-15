#include "main.h"

/**
 * _printf - function that produces output according to a format
 * @format: input string
 * Return: number of chars printed
*/

int _printf(const char *format, ...)
{
	convert_match p[] = {
		{"%s", print_string}, {"%c", print_char},
		{"%%", print_37}, {"%i", print_int}, {"%d", print_dec}, {"%r", print_srev},
		{"%R", print_rot13}, {"%b", print_bin}, {"%u", print_unsigned},
		{"%o", print_oct}, {"%x", print_hex}, {"%X", print_HEX},
		{"%S", print_exclusive_string}, {"%p", print_pointer}
	};

	int i = 0, j, length = 0;
	va_list args;

	va_start(args, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (p[j].ph[0] == format[i] && p[j].ph[1] == format[i + 1])
			{
				length += p[j].function(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		length++;
		i++;
	}
	va_end(args);
	return (length);
}

