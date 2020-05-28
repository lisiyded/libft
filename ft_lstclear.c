/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spowers <spowers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 04:14:01 by spowers           #+#    #+#             */
/*   Updated: 2020/05/24 04:22:22 by spowers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *c_list;
	t_list *next;

	c_list = *lst;
	while (c_list != NULL)
	{
		next = c_list->next;
		(*del)(c_list->content);
		free(c_list);
		c_list = next;
	}
	*lst = NULL;
}
