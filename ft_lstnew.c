/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmeirele <jmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:39:18 by jmeirele          #+#    #+#             */
/*   Updated: 2024/10/31 12:53:03 by jmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

/* int	main(void)
{
	char	*content = "ola";
	t_list	*node = ft_lstnew(content);
	printf("Content => %s\n", (char *)node->content);
	printf("Next => %p\n", node->next);
	free(node);
} */
