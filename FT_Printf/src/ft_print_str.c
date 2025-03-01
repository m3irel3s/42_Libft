/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:09:34 by jmeirele          #+#    #+#             */
/*   Updated: 2025/03/01 11:07:47 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"
/* int	ft_print_str(int fd, char *str)
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
} */

static size_t	ft_strlen_pf(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_print_str(int fd, char *str)
{
	int	counter;

	if (!str)
		return (ft_print_str(fd, "(null)"));
	counter = 0;
	write(fd, str, ft_strlen_pf(str));
	counter = ft_strlen_pf(str);
	return (counter);
}
