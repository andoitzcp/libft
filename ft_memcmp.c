/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acampo-p <acampo-p@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 17:07:53 by acampo-p          #+#    #+#             */
/*   Updated: 2022/11/30 19:34:20 by acampo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *cs1;
	unsigned char *cs2;

	cs1 = (unsigned char *)s1;
	cs2 = (unsigned char *)s2;
	while (n-- > 0)
	{
		if (*cs1 - *cs2 > 0)
			return (1);
		else if (*cs1 - *cs2 < 0)
			return (-1);
		else if (*cs1 == '\0' && *cs2 == '\0')
			return (0);
		cs1++;
		cs2++;
	}
	return (0);
}
