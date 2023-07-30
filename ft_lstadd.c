/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchairi <hchairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 15:35:09 by hchairi           #+#    #+#             */
/*   Updated: 2023/07/30 14:25:23 by hchairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(int content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	node->content = content;
	node->next = NULL;
	return (node);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;

	if (!lst || !new)
		return ;
	node = (*lst);
	while (node->next != NULL)
		node = node->next;
	node->next = new;
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!(*lst) || !new)
		return ;
	new->next = (*lst);
	(*lst) = new;
}

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (0);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

void	reverse_nodes(t_list **lst, int new)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	new_node->content = new;
	new_node->next = (*lst);
	(*lst) = new_node;
}
