/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchairi <hchairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 18:50:14 by hchairi           #+#    #+#             */
/*   Updated: 2022/10/28 16:51:23 by hchairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	c1;
	char	*str;

	i = 0;
	c1 = (char )c;
	str = (char *)s;
	while (str[i])
	{
		if (str[i] == c1)
			return ((char *)&str[i]);
		i++;
	}
	if (str[i] == c1)
		return ((char *)&str[i]);
	return (NULL);
}
