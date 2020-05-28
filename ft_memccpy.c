/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spowers <spowers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/21 23:42:31 by spowers           #+#    #+#             */
/*   Updated: 2020/05/21 23:42:55 by spowers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		*cdst;
	const char	*csrc;

	cdst = dst;
	csrc = src;
	while (n > 0)
	{
		*cdst = *csrc;
		if (*cdst == (char)c)
			return (cdst + 1);
		cdst++;
		csrc++;
		n--;
	}
	return (NULL);
}
