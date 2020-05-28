/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spowers <spowers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/21 23:33:47 by spowers           #+#    #+#             */
/*   Updated: 2020/05/21 23:33:59 by spowers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	void	*res;

	res = NULL;
	res = malloc(number * size);
	if (res == NULL)
		return (NULL);
	ft_bzero(res, number * size);
	return (res);
}
