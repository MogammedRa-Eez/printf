#include "main.h"

/**
 * print_exc_string - print exclusive string.
 * @val: arguments
 * Return: length of the string
 */

int print_exc_string(va_list val)
{
	int i;
	char *s;
	int k, j = 0;
	char c = 'A';
	char d[1];

	s = va_arg(val, char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] > 127)
		{
			_putchar('\\');
			_putchar('x');
			j = j + 2;
			d[0] = s[i] / 16;
			d[1] = s[i] % 16;
			for (k = 0; k < 2; k++)
			{
				if (d[k] >= 9)

					_putchar('0' + c + d[k]);
				else
					_putchar('0' + d[k]);
			}
			j = j + print_HEX_extra(d[k]);
		}
		else
		{
			_putchar(s[i]);
			j++;
		}
	}
	return (j);
}
