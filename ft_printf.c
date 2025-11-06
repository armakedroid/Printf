/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argharag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 21:23:31 by argharag          #+#    #+#             */
/*   Updated: 2025/02/02 15:55:06 by argharag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h" 

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		i;
	int		len;

	len = 0;
	i = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			if (ft_check(s[i]))
				len += ft_myprint(args, &s[i]);
		}
		else if (s[i] != '%' && s[i] != '\0')
		{
			ft_putchar(s[i]);
			len++;
		}
		i++;
	}
	va_end(args);
	return (len);
}
/*
int main ()
{
    int x = 0x1a;
    char *str = NULL;
    char chr = 'A';
    int a = ft_printf("\nc = %c\ns = %s\np = %p\nd = %d\n 
	i = %i\nu = %u\nx = %x\nX = %X\nper = %%\n", chr, str, &x, x, x, x, x, '%');
 	printf("\n\n\nc = %c\ns = %s\np = %p\nd = %d\n 
	i = %i\nu = %u\nx = %x\nX = %X\nper = %%\n", chr, str, &x, x, x, x, x, '%');
}*/
