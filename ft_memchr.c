/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spowers <spowers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/21 23:43:31 by spowers           #+#    #+#             */
/*   Updated: 2020/05/21 23:43:34 by spowers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char *arrs;

	arrs = s;
	while (n > 0)
	{
		if (*arrs == (char)c)
			return ((void*)arrs);
		arrs++;
		n--;
	}
	return (NULL);
}
