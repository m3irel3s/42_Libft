/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:26:15 by jmeirele          #+#    #+#             */
/*   Updated: 2024/10/25 17:43:28 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Count the number of words
// Allocate memory for the array of strings
// Cpy the word in the correct position

#include "libft.h"

static int	ft_count_words(char const *str, char c)
{
	size_t	i;
	size_t	counter;

	counter = 0;
	i = 0;

	while (str[i])
	return (counter);
}
static int	ft_word_len(char const *str, char c)
{
	size_t	len;

	len = 0;
	while (str[len] && str[len] != c)
		len++;
	return (len);
}
static char	*ft_word_dup(const char *str, size_t start, size_t end)
{
	char	*word;
	size_t	i;

	i = 0;
	word = malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);
	while (start < end)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}


char	**ft_split(char const *s, char c)
{
	size_t	words_counter;

	words_counter = ft_count_words(s, c);
	printf("%zu", words_counter);
	
}

int	main(void)
{
	char	*str = "eeHeeello World , Goodbye Fellas !e";
	char	c = 'e';
	char	**res;
	size_t	i;

	ft_split(str, c);
	i = 0;
	res = ft_split(str, c);
	// for(int i; str[i]; i++)
	// 	printf("%s", res[i]);
	// free(res);
}