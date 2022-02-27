/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchetana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 18:24:23 by cchetana          #+#    #+#             */
/*   Updated: 2022/02/27 16:41:23 by cchetana         ###   ########.fr       */
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
	lenr = len;
	if (ft_strlen(s) <= start || (int)len < 0)
		lenr = 0;
	else if (len >= ft_strlen(s))
		lenr = ft_strlen(s) - start;
	ss = (char *)malloc(lenr + 1);
	if (ss == NULL)
		return (NULL);
	i = 0;
	while (i < lenr && s[start + i])
	{
		ss[i] = s[start + i];
		++i;
	}
	ss[i] = '\0';
	return (ss);
}
