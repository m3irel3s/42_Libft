/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 20:09:38 by jmeirele          #+#    #+#             */
/*   Updated: 2024/11/21 12:05:47 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	i;

	if (!lst)
		return (0);
	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

/* int	main(void)
{
	t_list	*node_1 = ft_lstnew("node 1");
	t_list	*node_2 = ft_lstnew("node 2");
	t_list	*node_3 = ft_lstnew("node 3");

	node_1->next = node_2;
	node_2->next = node_3;

	size_t	i = ft_lstsize(node_1);
	printf("%zu\n", i);

	free(node_1);
	free(node_2);
	free(node_3);
} */