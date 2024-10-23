/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 11:02:50 by jmeirele          #+#    #+#             */
/*   Updated: 2024/10/23 21:47:41 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)

{
	size_t			i;
	unsigned char	*p;

	p = s;
	i = 0;
	if (!s)
		return (NULL);
	while (i < n)
		p[i++] = c;
	return (p);
}

/* int	main(void)
{
	char	str[30] = "ola 123 hello";
	printf("Before memset => %s\n", str);
	ft_memset(str + 3, 'x', 4);
	printf("After memset => %s\n", str);
} */