/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchetana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:09:51 by cchetana          #+#    #+#             */
/*   Updated: 2022/02/26 17:13:05 by cchetana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	d;
	size_t	s;

	d = ft_strlen(dst);
	s = ft_strlen((char *)src);
	if (dstsize < 1 || dstsize < d)
		return (s + dstsize);
	else
	{
		i = 0;
		while (d + i < dstsize - 1 && src[i])
		{
			dst[d + i] = src[i];
			++i;
		}
		dst[d + i] = '\0';
		return (d + s);
	}
}
