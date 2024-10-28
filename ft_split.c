/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:26:15 by jmeirele          #+#    #+#             */
/*   Updated: 2024/10/28 12:13:51 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Count the number of words
// Allocate memory for the array of strings
// Cpy the word in the correct position

#include "libft.h"

static int	ft_count_words(char const *str, char c)
{
	size_t	counter;
	size_t	i;

	i = 0;
	counter = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i] && str[i] != c)
		{
			counter++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (counter);
}
static char	*ft_strndup(const char *s, size_t n)
{
	size_t	i;

	i = 0;
	char	*dup = malloc(n + 1);
	if(!dup)
		return (NULL);
	while (i < n)
	{
		dup[i] = s[i];
		i++;
	}
	dup[n] = '\0';
	return (dup);
}

static void	ft_fill(char **new, const char *s, char c)
{
	size_t	i;
	size_t	z;
	size_t	word_len;
	
	i = 0;
	z = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		word_len = 0;
		while (s[i + word_len] && s[i + word_len] != c)
			word_len++;
		if (word_len > 0)
		{
			new[z++] = ft_strndup(s + i, word_len);
			i += word_len;
		}
	}
}

char	**ft_split(char const *s, char c)
{
	size_t	words_counter;
	char	**new;

	if (!s)
		return (NULL);
	words_counter = ft_count_words(s, c);
	new = malloc(sizeof(char *) * (words_counter + 1));
	if(!new)
		return (NULL);
	new[words_counter] = NULL;
	ft_fill(new, s, c);
	return (new);
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