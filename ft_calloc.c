/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:56:51 by jmeirele          #+#    #+#             */
/*   Updated: 2024/10/29 20:52:38 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	alloc_space;

	alloc_space = nmemb * size;
	ptr = malloc(alloc_space);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, alloc_space);
	return (ptr);
}

/* int	main(void)
{
	char *p;
	p = ft_calloc(0, 0);
	strcpy(p, "abcd");
	printf("%s", p);
	free (p);
} */