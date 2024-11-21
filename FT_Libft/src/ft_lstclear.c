/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:33:51 by jmeirele          #+#    #+#             */
/*   Updated: 2024/11/21 12:05:47 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
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

/* void	delete(void *content)
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

	t_list	*current = node_1;
	printf("Before deleting\n");
	while (current)
	{
		printf("Node content => %s\n", (char *)current->content);
		current = current->next;
	}
	printf("\nDeleting node_2 and up\n\n");
	ft_lstclear(&node_2, delete);
	current = node_1;
	node_1->next = NULL;
	printf("After deleting\n");
	while (current)
	{
		printf("Node content => %s\n", (char *)current->content);
		current = current->next;
	}

} */