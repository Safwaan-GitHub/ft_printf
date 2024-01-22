#include "ft_printf.h"

int     print_digit(long n, int base)
{
        int     count;
        char    *symbols;

        symbols = "0123456789abcdef";
        count = 0;
        if (n < 0)
        {
                write(1, "-", 1);
                return (print_digit(-n, base) + 1);
        }
        else if (n < base)
                return (print_char(symbols[n]));
        else
        {
                count = print_digit((n / base), base);
                return (count += print_digit((n % base), base));
        }
}

int	print_udigit(long n, int base)
{
	int	count;
	char	*symbols;

	symbols = "0123456789ABCDEF";
	count = 0;
	if (n < 0)
	{
		write(1, "-", 1);
		return (print_udigit(-n, base) + 1);
	}
	else if (n < base)
		return (print_char(symbols[n]));
	else
	{
		count = print_udigit(n / base, base);
		return (count += print_udigit(n % base, base));
	}
}
