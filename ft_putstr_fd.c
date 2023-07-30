/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchairi <hchairi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 21:51:27 by hchairi           #+#    #+#             */
/*   Updated: 2022/10/28 15:31:08 by hchairi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
/*
#include <fcntl.h>
int	main()
{
	int	fd;
	fd = open("string.txt", O_CREAT | O_RDWR);
	char s[] = "hi how are you ?";
	ft_putstr_fd(s, fd);
	return 0;
}*/
