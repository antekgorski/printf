/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 20:34:41 by agorski           #+#    #+#             */
/*   Updated: 2024/04/30 16:16:36 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *imput, ...);
int	print_char(int c);
int	print_string(char *s);
int	print_hex(unsigned long int ap, int imput);
int	print_number(int number);
int	print_unsigned(unsigned int number);
int	print_pointer(void *);

#endif
