/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acampo-p <acampo-p@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 13:52:52 by acampo-p          #+#    #+#             */
/*   Updated: 2022/12/08 12:10:47 by acampo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len_s1;
	size_t	len_set;
	size_t	len_substr;
	char	*ptr[2];

	len_s1 = ft_strlen(s1);
	len_set = ft_strlen(set);
	ptr[0] = (char *)s1;
	ptr[1] = (char *)s1 + len_s1;
	while (ft_memchr(set, *s1, len_set) != NULL && *ptr[0])
		s1++;
	ptr[0] = (char *)s1;
	s1 = ptr[1] - 1;
	while (ft_memchr(set, *s1, len_set) != NULL && s1 > ptr[0])
		s1--;
	len_substr = s1 - ptr[0] + 1;
	printf("s: %p\te: %p\n", ptr[0], s1);
	printf("len: %d\n", len_substr);
	ptr[2] = (char *)malloc(len_substr + 1);
	ft_memcpy(ptr[2], ptr[0], len_substr);
	ptr[2][len_substr] = '\0';
	return (ptr[2]);
}

