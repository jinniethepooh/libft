/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchetana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 22:15:27 by cchetana          #+#    #+#             */
/*   Updated: 2022/02/23 00:12:35 by cchetana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_rec(unsigned int n, int fd)
{
	if (n > 9)
		ft_putnbr_rec(n / 10, fd);
	ft_putchar_fd((n % 10) + '0', fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nbr;

	if (n < 0)
	{
		nbr = (unsigned int)n * -1;
		ft_putchar_fd('-', fd);
	}
	else
		nbr = n;
	ft_putnbr_rec(nbr, fd);
}
