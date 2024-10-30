/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 18:16:27 by jmeirele          #+#    #+#             */
/*   Updated: 2024/10/30 20:42:18 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*new;

	if (!f || !del)
		return (NULL);
	first = NULL;
	while (lst)
	{
		if (!(new = ft_lstnew((*f)(lst->content))))
		{
			while (first)
			{
				new = first->next;
				(*del)(first->content);
				free(first);
				first = new;
			}
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&first, new);
		lst = lst->next;
	}
	return (first);
}
/* 
void	delete(void *content)
{
	free(content);
}

void	*ft_increase_ascii(void *content)
{
	size_t	i;
	char	*str = (char *)content;

	i = 0;
	while (str[i])
	{
		str[i] += 1;
		i++;
	}
	return (str);
}

int	main(void)
{
	t_list	*node_1 = ft_lstnew(strdup("node 1"));
	t_list	*node_2 = ft_lstnew(strdup("node 2"));
	t_list	*node_3 = ft_lstnew(strdup("node 3"));

	node_1->next = node_2;
	node_2->next = node_3;
	node_3->next = NULL;
	t_list	*current;
	printf("Before lstmap\n");
	current = node_1;
	while (current)
	{
		printf("Node content => %s\n", (char *)current->content);
		current = current->next;
	}
	t_list *new_list = ft_lstmap(node_1, ft_increase_ascii, delete);

	printf("After lstmap\n");
	current = new_list;
	while (current)
	{
		printf("Node content => %s\n", (char *)current->content);
		current = current->next;
	}
} */