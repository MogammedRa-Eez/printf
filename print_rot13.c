#include "main.h"

/**
 * print_rot13 - writes the str in ROT13
 * @args: type struct va_arg where is allocated printf arguments
 * Return: number of chars printed
 */
int print_rot13(va_list args)
{
	int i, j, k;
	int counter = 0;
	char *str;
	char alpha[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char beta[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	str = va_arg(args, char*);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
	{
		k = 0;
		for (j = 0; alpha[j] && !k; j++)
		{
			if (str[i] == alpha[j])
			{
				_putchar(beta[j]);
				counter++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(str[i]);
			counter++;
		}
	}
	return (counter);
}
