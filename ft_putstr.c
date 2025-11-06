/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argharag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 20:34:26 by argharag          #+#    #+#             */
/*   Updated: 2025/01/31 20:37:39 by argharag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	len;

	len = 0;
	if (!str)
	{
		write (1, "(null)", 6);
		return (6);
	}
	while (str[len])
	{
		write (1, &str[len], 1);
		len++;
	}
	return (len);
}
