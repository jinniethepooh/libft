/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchetana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 18:24:23 by cchetana          #+#    #+#             */
/*   Updated: 2022/02/26 09:39:36 by cchetana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ss;
	size_t	lenr;
	size_t	i;

	if (!s)
		return (NULL);
	if (len < ft_strlen(s))
		lenr = len;
	else
		lenr = ft_strlen(s);
	ss = (char *)malloc(lenr + 1);
	if (ss == NULL)
		return (NULL);
	i = 0;
	while (i < lenr && start + i < ft_strlen(s))
	{
		ss[i] = s[start + i];
		++i;
	}
	ss[i] = '\0';
	return (ss);
}
