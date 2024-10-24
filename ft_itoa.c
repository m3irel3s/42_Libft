/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:41:06 by jmeirele          #+#    #+#             */
/*   Updated: 2024/10/24 17:06:01 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long int	ft_num_len(int n);
static char	*ft_putstr(char *str, unsigned int nb, long int num_len);

static char	*ft_putstr(char *str, unsigned int nb, long int num_len)
{
	while (nb > 0)
	{
		str[num_len] = (nb % 10) + 48;
		num_len--;
		nb = nb / 10;
	}
	return (str);
}

static long int	ft_num_len(int n)
{
	long int	num_len;

	num_len = 0;
	if(n <= 0)
		num_len = 1;
	while (n)
	{
		n = n / 10;
		num_len++;
	}
	return (num_len);
}

char	*ft_itoa(int n)
{
	unsigned int	nb;
	long int	num_len;
	char	*str;

	num_len = ft_num_len(n);
	str = malloc(sizeof(char) * (num_len + 1));
	if (!str)
		return (NULL);
	str[num_len--] = '\0';
	if (n == 0)
		str[0] = 48;
	if (n < 0)
	{
		nb = -n;
		str[0] = '-';
	}
	else
		nb = n;
	str = ft_putstr(str, nb, num_len);
	return (str);
}

// int	main(void)
// {
// 	char	*p;
// 	int	num = INT_MIN;
// 	printf("%s", p = ft_itoa(num));
// 	free(p);
// }
