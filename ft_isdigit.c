/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 18:06:48 by jmeirele          #+#    #+#             */
/*   Updated: 2024/10/23 21:30:17 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= 0 && c <= 9);
}

/* int	main(void)
{
	printf("%d\n", ft_isdigit(3));
	printf("%d\n", ft_isdigit('3'));
} */