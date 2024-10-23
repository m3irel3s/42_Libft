/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:43:18 by jmeirele          #+#    #+#             */
/*   Updated: 2024/10/23 21:54:16 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = dest;
	s = src;
	if (!dest || !src)
		return (NULL);
	if (dest > src)
	{
		ft_memcpy(d, s, n);
	}
	else
	{
		while (n--)
		{
			d[n] = s[n];
		}
	}
	return (dest);
}

/* int	main(void)	
{
	int	src[10] = {1, 2, 3, 5, 10, 13, 30};
	memmove(src + 2, src, sizeof(int) * 5);
	for(int i = 0; i < 10; i++)
	printf("src[%d] = %d\n", i, src[i]);	
} */