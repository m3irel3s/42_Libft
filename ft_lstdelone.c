/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:39:57 by jmeirele          #+#    #+#             */
/*   Updated: 2024/10/31 12:49:18 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/* void	del(void *content)
{
	free(content);
} */

/* int	main(void)
{
	t_list	*node_1 = ft_lstnew(strdup("Node 1"));
	t_list	*node_2 = ft_lstnew(strdup("Node 2"));
	t_list	*node_3 = ft_lstnew(strdup("Node 3"));

	node_1->next = node_2;
	node_2->next = node_3;
	printf("Before deleting\n");
	t_list	*current = node_1;

	while (current)
	{
		printf("Node content before => %s\n", (char *)current->content);
		current = current->next;
	}

	printf("\nDeleting node_2\n\n");
	node_1->next = node_3;
	ft_lstdelone(node_2, del);
	current = node_1;
	printf("After deleting\n");
	while (current)
	{
		printf("Node content after => %s\n", (char *)current->content);
		current = current->next;
	}
	ft_lstdelone(node_1, del);
	ft_lstdelone(node_3, del);
} */