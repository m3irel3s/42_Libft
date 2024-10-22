/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:38:23 by jmeirele          #+#    #+#             */
/*   Updated: 2024/10/22 15:39:43 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;

	i = 0;
	if (!s)
		return (NULL);
	while (i < n)
	{
		if(((char *)s)[i] == (char *)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}

int	main(void)
{
	char	*s = "helloola";
	char	c = 'l';
	char *p;
	char *d;

	p = memchr(s, c, 5);
	d = ft_memchr(s, c, 5);
	printf("p: %s\n", p);
	printf("d: %s\n", d);
}