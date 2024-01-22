#include "ft_printf.h"

int	print_format(char specifier, va_list ap)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += print_char(va_arg(ap, int));
	else if (specifier == 's')
		count += print_str(va_arg(ap, char *));
	else if (specifier == 'p')
		count += print_ptr((unsigned long long)va_arg(ap, void *), 16);
	else if (specifier == 'd' || specifier == 'i')
		count += print_digit((long)va_arg(ap, int), 10);
	else if (specifier == 'u')
		count += print_digit((long)va_arg(ap, unsigned int), 10);
	else if (specifier == 'x')
		count += print_digit((long)va_arg(ap, unsigned int), 16);
	else if (specifier == 'X')
		count += print_udigit((long)va_arg(ap, unsigned int), 16);
	else
		count += write(1, &specifier, 1);
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int	count;

	count = 0;
	va_start(ap, str);

	while (*str)
	{
		if (*str == '%')
			count += print_format(*(++str), ap);
		else
			count += write(1, str, 1);
		++str;
	}
	va_end(ap);
	return (count);
}
