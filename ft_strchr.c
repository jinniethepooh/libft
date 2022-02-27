/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchetana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 13:03:08 by cchetana          #+#    #+#             */
/*   Updated: 2022/02/27 13:54:17 by cchetana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	len;
	int	i;

	len = ft_strlen((char *)s);
	i = -1;
	while (s[++i])
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
	if (i != len - 1 && c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
