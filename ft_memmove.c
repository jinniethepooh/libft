/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchetana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 11:33:30 by cchetana          #+#    #+#             */
/*   Updated: 2022/02/25 21:41:33 by cchetana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;
	size_t	i;

	d = (char *)dst;
	s = (char *)src;
	i = -1;
	if (!s && !d)
		return (dst);
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	else
	{
		d += len;
		s += len;
		while (len > ++i)
			*--d = *--s;
	}
	return (dst);
}
