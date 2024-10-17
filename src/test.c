/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:10:31 by jmeirele          #+#    #+#             */
/*   Updated: 2024/10/17 17:46:07 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
#include <string.h>

int main(void)
{
	int source [30] = {1,2,3,4,5,6,7,8,9,10};
	int destination [30] = {11, 12, 3, 4, 5, 16, 17, 18, 19, 20, 30};
	memmove (destination + 2, source, sizeof(int) * 8);
	for (int i = 0; i < 20; i++)
	printf("source [%d]=%d\n", i, destination[i]);
}
