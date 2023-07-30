/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchairi <hchairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:59:06 by hchairi           #+#    #+#             */
/*   Updated: 2022/10/28 16:54:05 by hchairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	c1;
	char	*str;

	i = 0;
	c1 = (char)c;
	str = (char *)s;
	while (str[i])
		i++;
	while (i >= 0)
	{
		if (str[i] == c1)
		{
			str += i;
			return (str);
		}
		i--;
	}		
	return (0);
}
