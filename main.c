#include "ft_printf.h"
#include <limits.h>
#include <stdio.h>

int     main(void)
{
	printf("Count: %d\n", ft_printf(" %p ", -1));
	ft_printf(" %p ", 1);
	ft_printf(" %p ", 15);
	ft_printf(" %p ", 16);
	ft_printf(" %p ", 17);
	ft_printf(" %p %p ", LONG_MIN, LONG_MAX);
	ft_printf(" %p %p ", INT_MIN, INT_MAX);
	ft_printf(" %p %p ", ULONG_MAX, -ULONG_MAX);
	ft_printf(" %p %p ", 0, 0);
	printf("PRINTF\n");
	printf("Count: %d\n", printf(" %p ", -1));
	printf(" %p ", -1);
	printf(" %p ", 1);
	printf(" %p ", 15);
	printf(" %p ", 16);
	printf(" %p ", 17);
	printf(" %p %p ", LONG_MIN, LONG_MAX);
	printf(" %p %p ", INT_MIN, INT_MAX);
	printf(" %p %p ", ULONG_MAX, -ULONG_MAX);
	printf(" %p %p ", 0, 0);
	/*
        ft_printff("this the the count printf %p \n", -1);
        ft_ft_printff("this the the count %p \n", -1);
        ft_printff("this the the count printf %p \n", 1);
        ft_ft_printff("this the the count %p \n", 1);
        ft_printff("this the the count printf %p \n", 15);
        ft_ft_printff("this the the count %p \n", 15);
        ft_printff("this the the count printf %p \n", 16);
        ft_ft_printff("this the the count %p \n", 16);*/
}
