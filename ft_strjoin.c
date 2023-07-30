/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchairi <hchairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 13:13:44 by hchairi           #+#    #+#             */
/*   Updated: 2022/10/29 15:11:24 by hchairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	str1;
	size_t	str2;
	char	*dst;

	str1 = ft_strlen(s1);
	str2 = ft_strlen(s2) + str1 + 1;
	dst = (char *) malloc(str2);
	if (!dst)
		return (NULL);
	ft_strlcpy(dst, (char *)s1, str1 + 1);
	ft_strlcat(dst, s2, str2);
	return (dst);
}
