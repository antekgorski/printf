/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 18:40:09 by agorski           #+#    #+#             */
/*   Updated: 2024/04/25 21:42:07 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//#include <stdio.h>

int static	ft_print_sign(int imput, va_list ap)
{
	int	i;

	i = 0;
	if (imput == 'c')
		i = print_char(va_arg(ap, int));
	else if (imput == 's')
		i = print_string(va_arg(ap, char *));
	// else if (imput == 'p')
	// i =
	else if (imput == 'd' || imput == 'i')
		i = print_number(va_arg(ap, int));
	// else if (imput == 'u')
	// i =
	else if (imput == 'x' || imput == 'X')
		i = print_hex(va_arg(ap, unsigned int), imput);
	return (i);
}

int	ft_printf(const char *imput, ...)
{
	va_list			ap;
	unsigned int	i;

	i = 0;
	va_start(ap, imput);
	while (*imput)
	{
		if (*imput == '%')
		{
			imput++;
			if (ft_strchr("cspdiuxX", *imput))
				i += ft_print_sign(*imput, ap);
			else if (*imput == '%')
				i += write(1, "%", 1);
		}
		else
			i += write(1, imput, 1);
		imput++;
	}
	va_end(ap);
	return (i);
}

int	main(void)
{
	int	i;

	i = 412;
	// ft_printf("1234567890qwertyuiopas %% dfghjklzxcvbnm");
	// ft_printf("1234567890qwertyuiopas %% %c dfghjklzxcvbnm", 'W');
	// ft_printf("1234567890qwertyuiopas %s dfghjklzxcvbnm", "string12345");
	// ft_printf("TESTtestTEST %x TESTtestTEST", i);
	// ft_printf("TESTtestTEST %X TESTtestTEST", i);
	// printf("TESTtestTEST %x TESTtestTEST", i);
	// printf("TESTtestTEST %X TESTtestTEST", i);
	return (0);
}
