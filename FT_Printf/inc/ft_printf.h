/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:17:51 by jmeirele          #+#    #+#             */
/*   Updated: 2025/02/11 12:24:50 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>

//                     MANDATORY FUNCTIONS                   //

int	ft_printf(int fd, const char *format, ...);
int	ft_print_char(int fd, int c);
int	ft_print_str(int fd, char *str);
int	ft_print_digit(int fd, long nb, int base, char c);
int	ft_print_address(int fd, unsigned long address);
int	ft_print_unsigned(int fd, unsigned int nb);

#endif