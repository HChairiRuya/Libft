/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchairi <hchairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 22:06:15 by hchairi           #+#    #+#             */
/*   Updated: 2022/12/03 18:32:38 by hchairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)malloc(ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
			i++;
	}
	str[i] = '\0';
	return (str);
}
// #include <stdio.h>

// char add(unsigned int a, char b)
// {
// 	return a + b;
// }
// int	main()
// {
// 	char s[] = "abc";
// 	printf("%s", ft_strmapi(s, add));
// }
