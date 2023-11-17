#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @str: Type char pointer.
 * Return: c.
 */

int _strlen(char *str)
{
	int c;

	for (c = 0; str[c] != 0; c++)
		;
	return (c);

}

/**
 * _strlenc - strlenc function but applied for constant char pointer str
 * @str: type char pointer
 * Return: c
 */

int _strlenc(const char *str)
{
	int c;

	for (c = 0; str[c] != 0; c++)
		;
	return (c);
}
