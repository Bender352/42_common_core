/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbruck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:09:52 by sbruck            #+#    #+#             */
/*   Updated: 2024/10/31 15:09:54 by sbruck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nbr, int fd)
{
	char	*buff;

	buff = ft_itoa(nbr);
	if (buff)
	{
		write(fd, buff, ft_strlen(buff));
		free(buff);
	}
}
