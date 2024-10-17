/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 18:06:48 by jmeirele          #+#    #+#             */
/*   Updated: 2024/10/17 15:09:51 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

int	ft_isdigit(int c)
{
	return (c >= 0 && c <= 9);
}

int	main(void)
{
	printf("%d\n", ft_isdigit(3));
	printf("%d\n", ft_isdigit('3'));
}