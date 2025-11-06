/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_myprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argharag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 23:22:50 by argharag          #+#    #+#             */
/*   Updated: 2025/02/02 15:51:46 by argharag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h" 

int	ft_myprint(va_list str, const char *s)
{
	if (*s == 'c')
		return (ft_putchar(va_arg(str, int)));
	else if (*s == 's')
		return (ft_putstr(va_arg(str, char *)));
	else if (*s == 'd' || *s == 'i')
		return (ft_signed(va_arg(str, int)));
	else if (*s == 'x')
		return (ft_print_nums(va_arg(str, unsigned int),
				"0123456789abcdef", 16));
	else if (*s == '%')
		return (ft_putchar('%'));
	else if (*s == 'X')
		return (ft_print_nums(va_arg(str, unsigned int),
				"0123456789ABCDEF", 16));
	else if (*s == 'u')
		return (ft_print_nums(va_arg(str, unsigned int), "0123456789", 10));
	else if (*s == 'p')
		return (ft_putstr("0x") + ft_print_nums((size_t)va_arg(str, void *),
				"0123456789abcdef", 16));
	return (0);
}
