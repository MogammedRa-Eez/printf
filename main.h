#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

typedef struct call
{
	char t;
	int (*f)(char *, va_list, int);
} call_t;

int _printf(const char *format, ...);

#endif
