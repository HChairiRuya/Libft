/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchairi <hchairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 22:15:26 by hchairi           #+#    #+#             */
/*   Updated: 2022/10/28 18:36:27 by hchairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	unsigned int	c;
	char			*dst;

	if (!s)
		return (0);
	c = ft_strlen(s);
	if (len > c)
		dst = (char *)malloc(sizeof(char) * (c + 1));
	else
		dst = (char *)malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	i = 0;
	while (start < c && i < len)
	{
		dst[i] = s[start];
		start++;
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
