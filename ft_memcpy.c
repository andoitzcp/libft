/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acampo-p <acampo-p@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:35:02 by acampo-p          #+#    #+#             */
/*   Updated: 2022/12/03 01:21:31 by acampo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*cdest;
	char	*csrc;
	size_t	index;

	cdest = (char *)dest;
	csrc = (char *)src;
	index = 0;
	while (index < n)
	{
		cdest[index] = csrc[index];
		index++;
	}
	return (dest);
}
