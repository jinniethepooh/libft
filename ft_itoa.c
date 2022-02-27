/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchetana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 00:06:06 by cchetana          #+#    #+#             */
/*   Updated: 2022/02/27 13:37:11 by cchetana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_unit(int n)
{
	int	unit;

	unit = 0;
	if (n < 0)
	{
		unit += 1;
		n = (unsigned int)(n * -1);
	}
	while ((unsigned int)n / 10 > 0)
	{
		unit += 1;
		n = (unsigned int)n / 10;
	}
	return (unit + 1);
}

static char	*ft_fillnbr(char *nbr, long n, int i)
{
	if (n == 0)
		nbr[i] = '0';
	while (n > 0)
	{
		nbr[i] = n % 10 + '0';
		n /= 10;
		++i;
	}
	return (nbr);
}

static char	*ft_strrev(char *str, int len)
{
	int		i;
	char	t;

	i = 0;
	while (i < len / 2)
	{
		t = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = t;
		++i;
	}
	str[len] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*nbr;
	long	nbr_l;
	int		len;
	int		sign;

	len = ft_unit(n);
	nbr = (char *)malloc(len + 1);
	if (nbr == NULL)
		return (NULL);
	sign = 1;
	nbr_l = n;
	if (n < 0)
		sign *= -1;
	ft_fillnbr(nbr, nbr_l * sign, 0);
	if (n < 0)
		nbr[len - 1] = '-';
	return (ft_strrev(nbr, len));
}
