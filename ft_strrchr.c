/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchetana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 13:22:25 by cchetana          #+#    #+#             */
/*   Updated: 2022/02/27 13:59:31 by cchetana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	pos;

	i = -1;
	pos = -1;
	while (s[++i])
		if (s[i] == (unsigned char)c)
			pos = i;
	if (c == '\0' && s[i] == '\0')
		return ((char *)&s[i]);
	if (pos == -1)
		return (NULL);
	return ((char *)&s[pos]);
}
