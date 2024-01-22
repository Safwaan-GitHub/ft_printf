#include "ft_printf.h"

int	print_ptr(unsigned long long address, int base)
{
	int	count;
	char	*symbols;
	char	buffer[20];
	char	*ptr;

	ptr = &buffer[19];
	count = 0;
	symbols = "0123456789abcdef";
	*ptr = '\0';
	if (address == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	while (address != 0)
	{
		ptr--;
		*ptr = symbols[address % base];
		address /= base;
		count++;
	}
	*(--ptr) = 'x';
	*(--ptr) = '0';
	count += 2;

	return (write(1, ptr, count));
}
