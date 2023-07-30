/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchairi <hchairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 14:36:25 by hchairi           #+#    #+#             */
/*   Updated: 2023/07/30 14:19:49 by hchairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	lstclear(t_list	*node)
{
	t_list	*tmp;
	t_list	*tmp_next;

	if (!node)
		return ;
	tmp = node;
	while (tmp)
	{
		tmp_next = tmp->next;
		free (tmp);
		tmp = tmp_next;
	}
	node = NULL;
}

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
