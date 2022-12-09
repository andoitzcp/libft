/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acampo-p <acampo-p@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 12:13:31 by acampo-p          #+#    #+#             */
/*   Updated: 2022/12/08 20:34:40 by acampo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(const char *s, char c)
{
	char			**split;
	char			*ptr;
	size_t			len[1];
	size_t			index;

	index = 0;
	len[0] = ft_strlen(s);
	split = (char **)malloc(len[0]);
	ptr = ft_memchr(s, c, len[0]);
	while (ptr > s - 1 && ptr < s + len[0])
	{
		ptr = ft_memchr(s, c, len[0]);
		if (s + len[0] - 1 < ptr || ptr == NULL)
			ptr = (void *)s +len[0] - 1;
		printf("flag0: %p\n", ptr);
		len[1] = ptr - s + 1;
		split[index] = (char *)ft_calloc(1, len[1] + 1);
		printf("flag1: %p\n", ptr);
		printf("flag2: %ld\n", len[1]);
		ft_memcpy(*split, s, len[1]);
		printf("flag3: %s\n", *split);
		s += len[1];
		printf("flag4: %p\n", ptr);
		len[0] -= len[1];
		printf("flag5: %p\n", ptr);
		index++;
		printf("flag6: %ld\n", len[0]);
	}
	return(split);
}
