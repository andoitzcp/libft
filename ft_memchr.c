/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acampo-p <acampo-p@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:08:05 by acampo-p          #+#    #+#             */
/*   Updated: 2022/11/30 17:02:32 by acampo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *cs;
	unsigned char cc;

	cs = (unsigned char *) s;
	cc = (unsigned char) c;

	while (n-- > 0)
	{
		if (*cs == cc)
			return ((void *)cs);
		cs++;
	}
	return (NULL);
}
