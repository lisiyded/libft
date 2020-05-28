/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spowers <spowers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/21 23:51:36 by spowers           #+#    #+#             */
/*   Updated: 2020/05/21 23:53:52 by spowers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *b, int c, size_t len)
{
	char *dstb;

	dstb = (char*)b;
	while (len > 0)
	{
		*dstb = (char)c;
		len--;
		dstb++;
	}
	return (b);
}
