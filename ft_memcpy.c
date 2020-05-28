/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spowers <spowers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/21 23:47:31 by spowers           #+#    #+#             */
/*   Updated: 2020/05/21 23:47:53 by spowers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*cdst;
	const char	*csrc;

	cdst = (char*)dst;
	csrc = (char*)src;
	if (cdst == NULL && csrc == NULL)
		return (NULL);
	while (n > 0)
	{
		*cdst = *csrc;
		cdst++;
		csrc++;
		n--;
	}
	return (dst);
}
