/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:26:15 by jmeirele          #+#    #+#             */
/*   Updated: 2024/10/31 01:10:21 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Count the number of words
// Allocate memory for the array of strings
// Cpy the word in the correct position

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	counter;
	int		inside;

	counter = 0;
	inside = 0;
	while (*s)
	{
		if (*s != c && !inside)
		{
			inside = 1;
			counter++;
		}
		else if (*s == c)
			inside = 0;
		s++;
	}
	return (counter);
}

static char	*get_next_word(char const **s, char c)
{
	char const	*word_start;
	size_t		word_len;

	word_start = *s;
	word_len = 0;
	while (**s && **s != c)
	{
		(*s)++;
		word_len++;
	}
	return (ft_substr(word_start, 0, word_len));
}
static void	*free_split(char **split, size_t count)
{
	while (count--)
		free(split[count]);
	free(split);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	word_count;
	size_t	i;

	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	res = ft_calloc(word_count + 1, sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			res[i] = get_next_word(&s, c);
			if (!res[i])
				return (free_split(res, i));
			i++;
		}
	}
	return (res);
}

int	main(void)
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
}