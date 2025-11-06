/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argharag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 21:14:58 by argharag          #+#    #+#             */
/*   Updated: 2025/02/02 15:43:14 by argharag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

int	ft_signed(int a);
int	ft_print_nums(size_t i,
		const char *str, size_t len);
int	ft_strlen(const char *str);
int	ft_myprint(va_list str, const char *s);
int	ft_check(char c);
int	ft_printf(const char *s, ...);
int	ft_putchar(char c);
int	ft_putstr(char *str);

#endif
