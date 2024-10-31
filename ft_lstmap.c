/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 18:16:27 by jmeirele          #+#    #+#             */
/*   Updated: 2024/10/31 01:10:25 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_create_node(void *content, void *(*f)(void *), void (*del)(void *))
{
	void	*new_content;
	t_list	*new_node;

	new_content = f(content);
	new_node = ft_lstnew(new_content);
	if (!new_node)
	{
		del(new_content);
		return (NULL);
	}
	return (new_node);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	t_list	*current_new_node;

	new_list = NULL;
	current_new_node = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		new_node = ft_create_node(lst->content, f, del);
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		if (!new_list)
			new_list = new_node;
		else
			current_new_node->next = new_node;
		current_new_node = new_node;
		lst = lst->next;
	}
	return (new_list);
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

	ft_lstmap(node_1, ft_increase_ascii, delete);

	current = node_1;
	printf("After lstmap\n");
	while (current)
	{
		printf("Node content => %s\n", (char *)current->content);
		current = current->next;
	}
} */