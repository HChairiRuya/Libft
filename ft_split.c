/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchairi <hchairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:01:07 by hchairi           #+#    #+#             */
/*   Updated: 2023/07/30 14:02:28 by hchairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_w(char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
		{
			while (s[i] != c && s[i])
			i++;
			count++;
		}
	}
	return (count);
}

static int	cc(char *s, char c, int *k)
{
	int	len;

	len = 0;
	while (s[*k] && s[*k] == c)
				(*k)++;
	while (s[*k] != c && s[*k])
	{
		len++;
		(*k)++;
	}
	return (len);
}

static void	cpy(char **tab, char *s, char c, int count_w)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (j < count_w)
	{
		k = 0;
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
			tab[j][k++] = s[i++];
		tab[j][k] = (0);
		j++;
	}
	tab[j] = (0);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**tab;
	int		cw;
	int		k;

	i = 0;
	k = 0;
	if (s)
	{
		cw = count_w((char *)s, c);
		tab = malloc((cw + 1) * sizeof(char *));
		if (!tab)
			return (NULL);
		while (i < cw)
		{
			tab[i] = malloc(cc((char *)s, c, &k) + 1);
			if (!tab[i])
				return (NULL);
			i++;
		}
		cpy(tab, (char *)s, c, cw);
		return (tab);
	}
	return (0);
}
