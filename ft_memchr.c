/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acampo-p <acampo-p@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:08:05 by acampo-p          #+#    #+#             */
/*   Updated: 2022/12/03 00:32:48 by acampo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*cs;

	cs = (unsigned char *) s;
	while (n-- > 0)
	{
		if (*cs == c)
			return ((void *)cs);
		cs++;
	}
	return (NULL);
}
