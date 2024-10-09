/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchatagn <pchatagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:05:02 by pchatagn          #+#    #+#             */
/*   Updated: 2024/10/09 15:42:27 by pchatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*l;
	t_list	*temp;

	if (!lst || !del)
		return ;
	l = *lst;
	while (last->next)
	{
		temp = l->next;
		del(l->content);
		free(l);
		l = temp;
	}
	*lst = NULL;
}
