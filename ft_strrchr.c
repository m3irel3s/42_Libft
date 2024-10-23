/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:37:08 by jmeirele          #+#    #+#             */
/*   Updated: 2024/10/23 22:01:08 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(s) - 1;
	while (len > i)
	{
		if (s[len] == c)
			return ((char *)s + len);
		len--;
	}
	if (!s)
		return (NULL);
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}
/* int	main(void)
{
	char	*str = "olfikri4l31";
	printf("%s", ft_strrchr(str, 'i'));
} */