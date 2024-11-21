/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:06:39 by jmeirele          #+#    #+#             */
/*   Updated: 2024/11/21 12:05:47 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/* int	main(void)
{
	t_list	*head = NULL;
	t_list	*node_1 = ft_lstnew("node 1");
	t_list	*node_2 = ft_lstnew("node 2");
	t_list	*node_3 = ft_lstnew("node 3");
	// node_1->next = node_2;
	// node_2->next = node_3;


	//head -> node1 -> node2 -> node3 -> NULL
	ft_lstadd_front(&head, node_3);
	ft_lstadd_front(&head, node_2);  // &head points to node_3 
	//and head becomes node 2
	ft_lstadd_front(&head, node_1);  // &head points to node_2 
	//and head becomes node 1


	t_list	*current = head;
	printf("%p\n", head);

	while (current)
	{
		printf("Node content => %s\n", (char *)current->content);
		printf("%p\n", current);
		current = current->next;
	}

	free(node_3);
	free(node_2);
	free(node_1);
} */