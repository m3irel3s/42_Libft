/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:33:51 by jmeirele          #+#    #+#             */
/*   Updated: 2024/10/28 16:23:40 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
}

void	delete(void *content)
{
	free(content);
}

/* int	main(void)
{
	t_list	*head = NULL;
	t_list	*node_1 = ft_lstnew(strdup("Node 1"));
	t_list	*node_2 = ft_lstnew(strdup("Node 2"));
	t_list	*node_3 = ft_lstnew(strdup("Node 3"));
	t_list	*current = head;

	node_1->next = node_2;
	node_2->next = node_3;

	while (current)
	{
		printf("Node content => %s\n", (char *)current->content);
		current = current->next;
	}
	
	ft_lstclear(&node_2, delete);
	
	while (current)
	{
		printf("Node content => %s\n", (char *)current->content);
		current = current->next;
	}
} */