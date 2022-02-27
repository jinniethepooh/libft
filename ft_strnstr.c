/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchetana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 17:05:01 by cchetana          #+#    #+#             */
/*   Updated: 2022/02/27 13:56:51 by cchetana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	pos;

	if (*needle == 0)
		return ((char *)haystack);
	if (*haystack == 0)
		return (NULL);
	i = 0;
	while (i < len && haystack[i])
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			pos = i;
			while (haystack[i + j] == needle[j] && needle[j] && i + j < len)
				++j;
			if (!needle[j])
				return ((char *)&haystack[pos]);
		}
		++i;
	}
	return (NULL);
}
