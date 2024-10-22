/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:43:03 by jmeirele          #+#    #+#             */
/*   Updated: 2024/10/22 11:35:59 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	while(*s)
	{
		if(*s == c)
			return (char *)s;
		s++;
	}
	if (c == '\0')
		return (char *)s;
	return (NULL);
}

int	main(void)
{
	char *str = "olfda213";
	char *str2 = "olfda213";
	printf("ft_strchr: %s\n", ft_strchr("\0", 'l'));
	printf("strchr: %s\n", strchr("\0", 'l'));
}
