/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_digit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 22:03:29 by jmeirele          #+#    #+#             */
/*   Updated: 2025/02/11 12:26:46 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	ft_print_digit(int fd, long nb, int base, char c)
{
	int		counter;
	char	*symbols;

	counter = 0;
	symbols = "0123456789abcdef";
	if (c == 'X')
		symbols = "0123456789ABCDEF";
	if (nb < 0)
	{
		ft_print_char(fd, '-');
		return (ft_print_digit(fd, -nb, base, c) + 1);
	}
	else if (nb < base)
		return (ft_print_char(fd, symbols[nb]));
	else
	{
		counter = ft_print_digit(fd, nb / base, base, c);
		return (counter + ft_print_digit(fd, nb % base, base, c));
	}
}

int	ft_print_unsigned(int fd, unsigned int nb)
{
	int		counter;
	char	*symbols;

	counter = 0;
	symbols = "0123456789";
	if (nb < 10)
		counter += ft_print_char(fd, symbols[nb]);
	else
	{
		counter += ft_print_unsigned(fd, nb / 10);
		counter += ft_print_char(fd, symbols[nb % 10]);
	}
	return (counter);
}
