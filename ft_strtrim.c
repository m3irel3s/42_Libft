/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:58:24 by jmeirele          #+#    #+#             */
/*   Updated: 2024/10/24 12:33:09 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	size_t	end;
	char	*str;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	end = (ft_strlen(s1));
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (s1[end] && ft_strchr(set, s1[end]))
		--end;
	str = ft_substr(s1, start, ((end - start) + 1));
	return (str);
}

/* int	main(void)
{
	char	*str1 = "     hello    world!     ";
	char	*str2 = "h!";
	char	*p;
	p = ft_strtrim(str1, str2);
	printf("%s", p);
	free(p);
} */