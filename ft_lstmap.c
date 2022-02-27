/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchetana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 21:06:50 by cchetana          #+#    #+#             */
/*   Updated: 2022/02/24 22:41:47 by cchetana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_n;
	t_list	*lst_h;
	t_list	*tmp;

	if (!lst)
		return (NULL);
	lst_h = 0;
	while (lst)
	{
		tmp = lst->next;
		lst_n = ft_lstnew((*f)(lst->content));
		if (!lst_n)
		{
			ft_lstclear(&lst_h, del);
			return (NULL);
		}
		ft_lstadd_back(&lst_h, lst_n);
		lst = tmp;
	}
	return (lst_h);
}
