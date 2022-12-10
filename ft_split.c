/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acampo-p <acampo-p@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 12:13:31 by acampo-p          #+#    #+#             */
/*   Updated: 2022/12/10 15:12:56 by acampo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(const char *s, char c)
{
	char	**split;
	char	*ptr;
	size_t	pindex[2];
	size_t	len;

	pindex[0] = 0;
	ptr = (char *)s;
	while (ptr != NULL)
	{
		ptr = ft_strchr(ptr, (int)c);
		if (ptr != NULL)
			ptr++;
		pindex[0]++;
	}
	pindex[1] = pindex[0];
	split = (char **)malloc(pindex[1] + 2);
	if (!split)
		return (NULL);
	while (pindex[1]-- > 0)
	{
		if (!ft_strchr(s, c))
			len = ft_strlen(s);
		else
			len = ft_strchr(s, c) - s + 1;
		*split = (char *)malloc(len + 1);
		*split = ft_substr(s, 0, len);
		s += len;
		split++;
	}
	split = NULL;
	return(split - pindex[0]);
}
