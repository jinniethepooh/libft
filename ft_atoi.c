/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchetana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 17:30:12 by cchetana          #+#    #+#             */
/*   Updated: 2022/02/26 15:16:45 by cchetana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(char c)
{
	return (c == '\t' || c == '\n' || c == '\r' || \
			c == '\f' || c == '\v' || c == ' ');
}

int	ft_atoi(const char *str)
{
	int					i;
	int					sign;
	unsigned long long	nbr;

	i = 0;
	while (str[i] && ft_isspace(str[i]))
		++i;
	sign = 1;
	nbr = 0;
	if (str[i] && (str[i] == '+' || str[i] == '-'))
		sign = ',' - str[i++];
	while (str[i] && ft_isdigit(str[i]))
	{
		nbr = (nbr * 10) + (str[i] - '0');
		if (nbr >= ULLONG_MAX && sign > 0)
			return (-1);
		if (nbr > ULLONG_MAX && sign < 0)
			return (0);
		++i;
	}
	return (nbr * sign);
}
