/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spowers <spowers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 04:15:21 by spowers           #+#    #+#             */
/*   Updated: 2020/05/24 04:30:27 by spowers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list *list;

	if (lst == NULL)
		return (NULL);
	list = lst;
	while (list->next != NULL)
	{
		list = list->next;
	}
	return (list);
}
