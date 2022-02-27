/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchetana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 22:13:22 by cchetana          #+#    #+#             */
/*   Updated: 2022/02/27 13:32:50 by cchetana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wcount(const char *s, char c)
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

static int	ft_wlen(const char *s, char c)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != c)
		++len;
	return (len);
}

static char	*ft_wword(const char *s, char c)
{
	char	*word;

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
