#include "main.h"

/**
 * print_exc_string - print exclusive string.
 * @val: string to print
 * Return: number of chars to be printed
 */

int print_exc_string(va_list val)
{
	unsigned int i;
	char *s = va_arg(val, char *);
	int k, j = 0;
	char c = 'A' - ':';
	char d[2];

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i]; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			j += 2;
			d[0] = s[i] / 16;
			d[1] = s[i] % 16;
			for (k = 0; k < 2; k++)
			{
				if (d[k] >= 10)

					_putchar('0' + c + d[k]);
				else
					_putchar('0');
			}
			j += print_HEX_extra(d[k]);
		}
		else
		{
			_putchar(s[i]);
			j++;
		}
	}
	return (j);
}
