/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:13:21 by jmeirele          #+#    #+#             */
/*   Updated: 2025/02/11 12:28:24 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;
	size_t	j;
	char	*full_str;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	full_str = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!full_str)
		return (NULL);
	i = 0;
	while (i < s1_len)
	{
		full_str[i] = s1[i];
		i++;
	}
	j = 0;
	while (i < (s2_len + s1_len))
		full_str[i++] = s2[j++];
	full_str[i] = '\0';
	return (full_str);
}

/* int	main(void)
{
	char *str1 = "hello world!";
	char *str2 = "goodbye fellas!";
	char *p;
	p = ft_strjoin(str1, str2);
	printf("%s", p);
	free(p);
} */