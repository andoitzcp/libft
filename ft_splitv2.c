/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acampo-p <acampo-p@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 12:13:31 by acampo-p          #+#    #+#             */
/*   Updated: 2022/12/12 13:43:37 by acampo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ptr_arr_gen(const char *s, char c)
{
	char	**split;
	size_t	cntr;
	int		cmp[2];

	cntr = 1;
	cmp [0] = 1;
	cmp [1] = -1;
	while (*s)
	{
		if ((char)*s == c && cmp[0] != cmp[1])
		{
			cntr++;
			cmp[1] *= -1;
		}
		else if ((char)*s != c && cmp[0] == cmp[1])
			cmp[1] *= -1;
		s++;
	}
	if (cmp[0] == cmp[1])
		cntr--;
	printf("flag1: %zu\n", cntr);
	split = (char **)malloc(cntr + 1);
	if (!split)
		return (NULL);
	return (split);
}

static size_t	substrlen(const char *s, char c)
{
	size_t	index;

	index = 0;
	while ((char)s[index] != c && s[index])
		index++;
	printf("flag5: %zu\n", index);
	return (index);
}

char	**ft_split(const char *s, char c)
{
	char	**split;
	char	*ptr;
	size_t	len;

	split = ptr_arr_gen(s, c);
	printf("flag2: %p\n", split);
	if (!split)
		return (NULL);
	ptr = (char *)split;
	while (s)
	{
		printf("flag3: %p\n", split);
		while ((char)*s == c)
			s++;
		printf("flag4: %p\n", split);
		len = substrlen(s, c);
		*split = ft_substr(s, 0, len);
		printf("flag6: %p\n", *split);
		printf("flag7: %s\n", *split);
		s = ft_strchr(s, c);
		printf("flag8: %p\n", s);
		split++;
		printf("flag9: %p\n", s);
	}
	split = NULL;
	printf("flag10: %p\n", ptr);
	return ((char **)ptr);
}
