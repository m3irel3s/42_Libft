/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:43:03 by jmeirele          #+#    #+#             */
/*   Updated: 2024/10/24 14:30:50 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}

/* int	main(void)
{
	char *str = "olfda213";
	char *str2 = "olfda213";
	printf("ft_strchr: %s\n", ft_strchr(str, 'l'));
	printf("ft_strchr: %s\n", strchr(str2, 'l'));
} */
	// if (!s)
	// 	return (NULL);
