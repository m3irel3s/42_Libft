/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:06:39 by jmeirele          #+#    #+#             */
/*   Updated: 2024/10/27 20:09:10 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

int	main(void)
{
	t_list	*head = NULL;
	t_list	*node_1 = ft_lstnew("node 1");
	t_list	*node_2 = ft_lstnew("node 2");
	t_list	*node_3 = ft_lstnew("node 3");

	//head -> node1 -> node2 -> node3 -> NULL
	ft_lstadd_front(&head, node_3);
	ft_lstadd_front(&head, node_2);
	ft_lstadd_front(&head, node_1);

	size_t	i = 0;

	t_list	*current = head;
	while (current)
	{
		printf("Node content => %s\n", (char *)current->content);
		current = current->next;
	}

	free(node_3);
	free(node_2);
	free(node_1);
}