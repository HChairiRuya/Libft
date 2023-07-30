/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchairi <hchairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 10:59:20 by hchairi           #+#    #+#             */
/*   Updated: 2023/07/30 13:55:52 by hchairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*cs1;

	len = ft_strlen(s1);
	while (*s1 && is_set(set, s1[len - 1]))
		len--;
	if (len == 0)
		return (ft_strdup(""));
	while (*s1 && is_set(set, *s1))
	{
		s1++;
		len--;
	}
	cs1 = (char *)malloc(len + 1);
	if (!cs1)
		return (NULL);
	ft_strlcpy (cs1, (char *)s1, len + 1);
	return (cs1);
}
