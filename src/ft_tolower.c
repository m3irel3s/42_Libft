/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:40:51 by jmeirele          #+#    #+#             */
/*   Updated: 2024/10/22 10:42:25 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 97)
		c = c + 32;
	return (c);
}

int	main(void)
{
	printf("%c", ft_tolower('c'));
	printf("%c", ft_tolower('D'));
}