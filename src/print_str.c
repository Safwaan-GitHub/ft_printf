#include "ft_printf.h"

int     print_str(char *str)
{
        int     count;
	int	i;

	i = 0;
        count = 0;
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
        while (str[i])
        {
                print_char((int)str[i]);
                ++count;
                i++;
        }
        return (count);
}

int     print_char(int c)
{
        return (write(1, &c, 1));
}
