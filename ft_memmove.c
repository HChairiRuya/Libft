/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchairi <hchairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 20:01:25 by hchairi           #+#    #+#             */
/*   Updated: 2023/07/30 14:27:09 by hchairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	if (!s && !d)
		return (NULL);
	if (d > s)
	{
		while (len--)
			*(unsigned char *)(d + len) = *(unsigned char *)(s + len);
	}
	else
		ft_memcpy(d, s, len);
	return (d);
}
