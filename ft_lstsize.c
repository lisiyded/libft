/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spowers <spowers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 04:16:15 by spowers           #+#    #+#             */
/*   Updated: 2020/05/24 04:36:58 by spowers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int		result;
	t_list	*list;

	if (lst == NULL)
		return (0);
	result = 0;
	list = lst;
	while (list != NULL)
	{
		result++;
		list = list->next;
	}
	return (result);
}
