/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:09:34 by jmeirele          #+#    #+#             */
/*   Updated: 2025/03/01 12:14:55 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	ft_print_str(int fd, char *str)
{
	int	counter;

	if (!str)
		return (ft_print_str(fd, "(null)"));
	counter = 0;
	while (*str)
	{
		ft_print_char(fd, (int) *str);
		str++;
		counter++;
	}
	return (counter);
}
