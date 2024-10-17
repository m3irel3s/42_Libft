/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 11:54:32 by jmeirele          #+#    #+#             */
/*   Updated: 2024/10/17 15:09:54 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*p;

	i = 0;
	p = s;
	while (i < n)
		p[i++] = '\0';
}

int	main(void)
{
	char	str[50] = "olad ofdsa 14321run";
	printf("Before bzero => %s\n", str);
	// bzero(str + 10, 2);
	// ft_bzero(str + 10, 2);
	printf("After bzero => %s\n",str);
}