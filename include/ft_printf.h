#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <inttypes.h>

int     ft_printf(const char *str, ...);
int     print_char(int c);
int     print_str(char *str);
int     print_digit(long n, int base);
int     print_format(char specifier, va_list ap);
int     print_udigit(long n, int base);
int     print_ptr(unsigned long long address, int base);

#endif
