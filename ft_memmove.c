/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acampo-p <acampo-p@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 09:19:12 by acampo-p          #+#    #+#             */
/*   Updated: 2022/12/03 14:58:23 by acampo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*cdest;
	char	*csrc;

	cdest = dest;
	csrc = (char *)src;
	if (src < dest)
	{
		cdest += n - 1;
		csrc += n - 1;
		while (n-- > 0)
			*cdest-- = *csrc--;
	}
	else
		while (n-- > 0)
			*cdest++ = *csrc++;
	return (dest);
}
