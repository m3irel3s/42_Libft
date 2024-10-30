/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 18:16:27 by jmeirele          #+#    #+#             */
/*   Updated: 2024/10/30 20:56:42 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_mklst(t_list *list, void *(*f)(void *), void (*del)(void *))
{
	t_list	*n_list;
	void	*content;

	if (!list || !f || !del)
		return (NULL);
	content = f(list->content);
	n_list = ft_lstnew(content);
	if (!n_list)
	{
		del(content);
		return (NULL);
	}
	return (n_list);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*n_list;
	t_list	*list_start;
	void	*content;

	list_start = ft_mklst(lst, f, del);
	if (!list_start)
		return (NULL);
	n_list = list_start;
	lst = lst->next;
	while (lst)
	{
		content = f(lst->content);
		n_list->next = ft_lstnew(content);
		if (!n_list->next)
		{
			del(content);
			ft_lstclear(&list_start, del);
			return (NULL);
		}
		n_list = n_list->next;
		lst = lst->next;
	}
	return (list_start);
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