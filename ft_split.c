/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spowers <spowers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 02:35:22 by spowers           #+#    #+#             */
/*   Updated: 2020/05/30 14:03:56 by spowers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_freememory(char **tab, size_t len)
{
	size_t count;

	count = 0;
	while (count <= len)
	{
		free(tab[count]);
		count++;
	}
	free(tab);
	return (NULL);
}

static size_t	ft_words(char const *s, char c)
{
	int count;

	count = 0;
	while (*s)
	{
		if (*s != c && (*(s + 1) == c || *(s + 1) == '\0'))
			count++;
		s++;
	}
	return (count);
}

static char	*ft_strndup(const char *s1, size_t n)
{
	char		*str_copy;
	size_t		i;

	str_copy = (char *)malloc((n + 1) * sizeof(char));
	if (!str_copy)
		return (NULL);
	i = 0;
	while (s1[i] != '\0' && i < n)
	{
		str_copy[i] = s1[i];
		i++;
	}
	str_copy[i] = '\0';
	return (str_copy);
}

static char	**sizetab(char **tab, char const *s, char c)
{
	size_t	i;
	size_t	index;
	size_t	w;

	i = 0;
	w = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		index = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (index < i)
		{
			tab[w] = ft_strndup(s + index, i - index);
			if (tab[w] == NULL)
				ft_freememory(tab, w);
			w++;
		}
	}
	tab[w] = NULL;
	return (tab);
}
char		**ft_split(char const *s, char c)
{
	char	**newstr;

	if (!(s))
		return (NULL);
	if (!(newstr = (char **)malloc((ft_words(s, c) + 1) * sizeof(char *))))
		return (NULL);
	return (sizetab(newstr, s, c));
}
