/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:26:15 by jmeirele          #+#    #+#             */
/*   Updated: 2024/10/24 22:06:51 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *str, char c)
{
	size_t	i;
	size_t	counter;

	i = 0;
	counter = 0;
	if(str[i] != c)
		counter++;
	while (str[i])
	{
		if(str[i] == c && str[i + 1] != c && str[i + 1] != '\0')
			counter++;
		i++;
	}
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
	size_t	word_counter;
	size_t	word_len;
	size_t	j;
	size_t	i;
	char	**arr;

	word_counter = ft_count_words(s, c);
	arr = malloc(sizeof(char) * (word_counter + 1));
	if (!arr)
		return NULL;
	while (s[i] == c)
			i++;
		if (s[i])
		{
			word_len = ft_word_len(&s[i], c);
			arr[j] = ft_word_dup(s, i, i + word_len);
			if (!arr[j])
			{
				while (j > 0)
					free(arr[--j]);
				free(arr);
				return NULL;
			}
				i += word_len;
				j++;
        }
	return (arr);
}

// int	main(void)
// {
// 	char	*str = "eeHeeello World , Goodbye Fellas !e";
// 	char	c = 'e';
// 	char	**res;
// 	size_t	i;

// 	ft_split(str, c);
// 	i = 0;
// 	res = ft_split(str, c);
// 	for(int i; str[i]; i++)
// 		printf("%s", res[i]);
// 	free(res);
// }