/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 18:40:09 by agorski           #+#    #+#             */
/*   Updated: 2024/04/23 11:24:46 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int static	ft_check_type(const char *imput, va_list ap)
{
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
			{
				i += ft_check_type(*imput, ap)
			}
			else if (*imput == '%')
				i += write(1, "%", 1);
		}
		else
			i += write(1, *imput, 1);
		imput++;
	}
	va_end(ap);
	return (i);
}
