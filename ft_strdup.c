/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchairi <hchairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 23:03:26 by hchairi           #+#    #+#             */
/*   Updated: 2022/10/28 16:27:36 by hchairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*s;

	len = ft_strlen(s1) + 1;
	s = malloc(len);
	if (s)
		ft_strlcpy(s, (char *)s1, len);
	return (s);
}
