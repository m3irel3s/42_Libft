/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:43:18 by jmeirele          #+#    #+#             */
/*   Updated: 2024/10/17 18:06:37 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	const char	*s;
	size_t	i;

	d = (char *) dest;
	s = (const char *)src;
	i = 0;

	if (!dest || !src)
		return (NULL);
	
	return dest;

}

int	main(void)	
{
	int	src[10] = {1, 2, 3, 5, 10, 13, 30};
	memmove(src + 2, src, sizeof(int) * 5);
	for(int i = 0; i < 10; i++)
	printf("src[%d] = %d\n", i, src[i]);	
}