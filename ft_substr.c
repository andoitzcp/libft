/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acampo-p <acampo-p@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 12:11:32 by acampo-p          #+#    #+#             */
/*   Updated: 2022/12/05 16:02:38 by acampo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	sublen;

	sublen = ft_strlen(&s[start]);
	if (sublen < len)
		len = sublen;
	str = (char *)malloc(len + 1);
	str = ft_memcpy(str, &s[start], len + 1);
	return (str);
}
