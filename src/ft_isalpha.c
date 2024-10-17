/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:01:01 by jmeirele          #+#    #+#             */
/*   Updated: 2024/10/17 15:09:53 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z' ) || (c >= 'a' && c <= 'z'));
}
int	main(void)
{
	printf("%d\n", isalpha(90));
	printf("%d\n", isalpha(1));
	printf("%d\n", ft_isalpha('c'));
}
