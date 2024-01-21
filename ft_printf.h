#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int     print_char(int c);
int     print_str(char *str);
int     print_digit(long n, int base);
int     print_format(char specifier, va_list ap);

#endif
