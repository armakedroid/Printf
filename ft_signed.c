/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_signed.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argharag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 21:24:12 by argharag          #+#    #+#             */
/*   Updated: 2025/02/01 18:56:35 by argharag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_signed(int a)
{
	int	l;

	l = -1;
	if (a == -2147483648)
		return (ft_putchar('-') + ft_print_nums((unsigned int)a * l,
				"0123456789", 10));
	if (a < 0)
		return (ft_putchar('-') + ft_print_nums((a * l), "0123456789", 10));
	return (ft_print_nums(a, "0123456789", 10));
}
