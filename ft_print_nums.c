/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nums.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argharag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 23:23:22 by argharag          #+#    #+#             */
/*   Updated: 2025/02/02 15:41:58 by argharag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_print_nums(size_t i,
		const char *str, size_t len)
{
	int	count;

	if (len < 2)
		return (0);
	count = 0;
	if (i >= len)
		count += ft_print_nums(i / len, str, len);
	count += ft_putchar(str[i % len]);
	return (count);
}
