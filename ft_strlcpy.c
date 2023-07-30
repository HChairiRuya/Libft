/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchairi <hchairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 17:15:54 by hchairi           #+#    #+#             */
/*   Updated: 2022/10/28 16:35:22 by hchairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, char *src, size_t size)
{
	size_t	length;
	size_t	i;

	i = 0;
	length = ft_strlen(src);
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{		
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (length);
}
