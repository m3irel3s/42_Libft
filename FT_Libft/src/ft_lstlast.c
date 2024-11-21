/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:01:54 by jmeirele          #+#    #+#             */
/*   Updated: 2024/11/21 12:05:47 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/* int	main(void)
{
	t_list	*head;
	t_list	*node_1 = ft_lstnew("node 1");
	t_list	*node_2 = ft_lstnew("node 2");
	t_list	*node_3 = ft_lstnew("node 3");


	node_1->next = node_2;
	node_2->next = node_3;
	head = ft_lstlast(node_1);
	printf("%s", (char *)head->content);
	free(node_1);
} */