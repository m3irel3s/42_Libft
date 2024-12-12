/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min_max.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 11:11:45 by jmeirele          #+#    #+#             */
/*   Updated: 2024/12/12 11:14:23 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

int	ft_min(int num1, int num2)
{
	if (num1 > num2)
		return (num2);
	else
		return (num1);
}

int	ft_max(int num1, int num2)
{
	if (num1 > num2)
		return (num1);
	else
		return (num2);
}
