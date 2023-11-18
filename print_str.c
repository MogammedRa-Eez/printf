#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: Type char pointer.
 * Return: c.
 */

int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);

}

/**
 * _strlenc - strlenc function but applied for constant char pointer s
 * @s: Type char pointer
 * Return: c
 */

int _strlenc(const char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);
}
