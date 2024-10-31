/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:21:32 by jmeirele          #+#    #+#             */
/*   Updated: 2024/10/31 13:27:26 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_size;
	size_t	src_size;
	size_t	space_left;

	i = 0;
	dst_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	if (size <= dst_size)
		return (size + src_size);
	space_left = size - dst_size - 1;
	while (i < (space_left) && src[i])
	{
		dst[dst_size + i] = src[i];
		i++;
	}
	dst[dst_size + i] = '\0';
	return (dst_size + src_size);
}

/* int	main(void)
{
	char dest[18] = "123hello";
	char src[] = "pimpampum";
	printf("Before strlcat => %s\n", dest);
	// printf("%zu\n", strlcat(dest, src, 5));
	printf("%zu\n", ft_strlcat(dest, src, 17));
	printf("After strlcat => %s\n", dest);
} */
	// if (!dst || !src)
	// 	return (0);
