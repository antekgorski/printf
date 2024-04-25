/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 15:18:11 by agorski           #+#    #+#             */
/*   Updated: 2024/04/25 15:38:22 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int static	ft_numbet_len(int number)
{
    int len;
    
}

int	print_number(int number)
{
	int i;
	i = 0;
	ft_putnbr_fd(number, 1);
	i = ft_number_len(number);
}