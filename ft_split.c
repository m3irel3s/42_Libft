/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:26:15 by jmeirele          #+#    #+#             */
/*   Updated: 2024/10/30 20:56:40 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Count the number of words
// Allocate memory for the array of strings
// Cpy the word in the correct position

#include "libft.h"

static	char	**ft_free_split(char **strs, size_t seg)
{
	size_t	i;

	i = 0;
	while (i < seg)
	{
		free(strs[i]);
		++i;
	}
	free(strs);
	return (0);
}

static size_t	ft_seglen(char const *s, char sep)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != sep)
		++i;
	return (i);
}

static char	**ft_alloc(char **strs, char const *s, char sep, size_t segs)
{
	size_t	i;
	size_t	j;
	size_t	seg;

	i = 0;
	seg = 0;
	while (seg < segs)
	{
		j = 0;
		while (s[i] && s[i] == sep)
			++i;
		strs[seg] = malloc(ft_seglen(&s[i], sep) + 1);
		if (!strs[seg])
			return (ft_free_split(strs, seg));
		while (s[i] && s[i] != sep)
		{
			strs[seg][j] = s[i];
			++i;
			++j;
		}
		strs[seg][j] = '\0';
		++seg;
	}
	return (strs);
}

static int	ft_segcount(char const *s, char sep)
{
	size_t	segs;
	size_t	i;
	int		counting;

	i = 0;
	segs = 0;
	counting = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] != sep && !counting)
		{
			counting = 1;
			++segs;
		}
		if (s[i] == sep && counting)
			counting = 0;
		++i;
	}
	return (segs);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	size_t	segs;

	if (!s)
		return (NULL);
	segs = ft_segcount(s, c);
	strs = malloc((segs + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	strs[segs] = 0;
	if (segs > 0)
		strs = ft_alloc(strs, s, c, segs);
	return (strs);
}

/* int	main(void)
{
	char	*str = "Heeello World , Goodbye Fellas !e eoklaeeee";
	char	*str1 = "      split       this for   me  !       ";
	char	c = ' ';
	char	**res;
	size_t	i;

	i = 0;
	res = ft_split(str1, c);
	while (res[i])
	{
		printf("%s\n", res[i]);
		free(res[i]);
		i++;
	}
	free(res);
	return (0);
} */