/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:24:32 by jmeirele          #+#    #+#             */
/*   Updated: 2024/10/28 13:37:48 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		current = *lst;
		while (current->next != NULL)
			current = current->next;
		current->next = new;
	}
}
/* 
int	main(void)
{
	t_list	*head = NULL;
	t_list	*node_1 = ft_lstnew("Node 1");
	t_list	*node_2 = ft_lstnew("Node 2");
	t_list	*node_3 = ft_lstnew("Node 3");
	
	ft_lstadd_back(&head, node_3);
	ft_lstadd_back(&head, node_2);
	ft_lstadd_back(&head, node_1);

	t_list *current = head;

	//head -> node3 -> node2 -> node1 -> NULL
	while (current)
	{
		printf("Node content => %s\n", (char *)current->content);
		current = current->next;
	}

	free(node_3);
	free(node_2);
	free(node_1);
} */