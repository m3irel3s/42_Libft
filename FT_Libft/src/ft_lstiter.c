/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 17:32:26 by jmeirele          #+#    #+#             */
/*   Updated: 2024/11/21 12:05:47 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		if (lst->content)
			f(lst->content);
		lst = lst->next;
	}
}

/* void	ft_increase_ascii(void *content)
{
	size_t	i;
	char	*str = (char *)content;

	i = 0;
	while (str[i])
	{
		str[i] += 1;
		i++;
	}
}

int	main(void)
{
	t_list	*node_1 = ft_lstnew(strdup("node 1"));
	t_list	*node_2 = ft_lstnew(strdup("node 2"));
	t_list	*node_3 = ft_lstnew(strdup("node 3"));

	node_1->next = node_2;
	node_2->next = node_3;
	t_list	*current = node_1;

	printf("Before lstiter\n");
	while (current)
	{
		printf("Node content => %s\n", (char *)current->content);
		current = current->next;
	}

	ft_lstiter(node_1, ft_increase_ascii);

	current = node_1;
	printf("After lstiter\n");
	while (current)
	{
		printf("Node content => %s\n", (char *)current->content);
		current = current->next;
	}
} */