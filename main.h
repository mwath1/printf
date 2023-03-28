#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

#define F _MINUS 1
#define F _PLUS 2
#define F _ZERO 4
#define F _HASH 8
#define F _SPACE 16

#define S _SHORT 1
#define S _LONG 2


/*
 * fmt: stands for the format in our case
 * fm_t : the funcction we will use
 */
struct fmt 
{
	char fmt;
	int (*fn)(va_list, char[], int, int, int, int);

};
typedef struct fmt fmt_t;

int _printf(const char *format, ...);

int handle_print(const char *fmt, int *i);

#endif
