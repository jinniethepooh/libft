/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchetana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 22:13:22 by cchetana          #+#    #+#             */
/*   Updated: 2022/02/21 00:03:44 by cchetana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wcount(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			++s;
		if (*s != c && *s)
			++count;
		while (*s != c && *s)
			++s;
	}
	return (count);
}

int	ft_wlen(const char *s, char c)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != c)
		++len;
	return (len);
}

char	*ft_wword(const char *s, char c)
{
	size_t	i;
	char	*word;

	i = 0;
	word = (char *)malloc(ft_wlen(s, c) + 1);
	if (word == NULL)
		return (NULL);
	ft_strlcpy(word, s, ft_wlen(s, c) + 1);
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**s_word;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	s_word = (char **)malloc((ft_wcount(s, c) + 1) * sizeof(char *));
	if (s_word == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (j < ft_wcount(s, c))
	{
		while (s[i] == c && s[i])
			++i;
		s_word[j] = ft_wword(&s[i], c);
		while (s[i] != c && s[i])
			++i;
		++j;
	}
	s_word[j] = 0;
	return (s_word);
}
