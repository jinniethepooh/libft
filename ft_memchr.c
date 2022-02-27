/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchetana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 13:40:29 by cchetana          #+#    #+#             */
/*   Updated: 2022/02/20 16:56:05 by cchetana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	if (n < 1)
		return (0);
	str = (char *)s;
	while (i < n)
	{
		if (str[i] == (char)c)
			return ((void *)&s[i]);
		++i;
	}
	return (0);
}
