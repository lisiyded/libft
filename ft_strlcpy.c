/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spowers <spowers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 20:47:56 by spowers           #+#    #+#             */
/*   Updated: 2020/05/26 00:37:06 by spowers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, unsigned int n)
{
	size_t	count;
	size_t	size;

	count = 0;
	size = 0;
	if (!dest)
		return (0);
	while (src[size])
		size++;
	if (!n)
		return (size);
	while (src[count] && count < n - 1)
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (size);
}
