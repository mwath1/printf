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


/**
 * struct fmt - Struct op
 * @fmt: stands for the format in our case
 * @fn: function associated
 * @fm_t : the funcction we will use
 */
struct fmt 
{
	char fmt;
	int (*fn)(va_list, char[], int, int, int, int);

};

/**
 * typedef struct fmt fmt_t - Struct op
 *
 * @fmt: The format.
 * @fm_t: The function associated.
 */

typedef struct fmt fmt_t;

int _printf(const char *format, ...);

int handle_print(const char *fmt, int *i, va_list list, char buffer[], int flags, int width, int precision, int size);

/******* FUNCTIONS *******/

/* Funtions to print, strings, percent, integer and binary */
int print_char(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_string(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_percent(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_int(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_binary(va_list types, char buffer[],
	int flags, int width, int precision, int size);


#endif
