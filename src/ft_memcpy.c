/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:34:30 by jmeirele          #+#    #+#             */
/*   Updated: 2024/10/17 12:52:53 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*destP;
	unsigned char	*srcP;

	destP = dest;
	srcP = src;
	i = 0;
	if (!dest || !src)
		return (NULL);
	while (i < n)
		destP[i] = srcP[i];
	return dest;
}

int	main(void)
{
	char	src[10] = "oladfa";
	char	dest[10] = "d";
	printf("Before memcpy => %s", dest);
	ft_memcpy(dest, src, 3);
	printf("After memcpy => %s", dest);
}