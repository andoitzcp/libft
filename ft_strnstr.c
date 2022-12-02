/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acampo-p <acampo-p@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 19:38:33 by acampo-p          #+#    #+#             */
/*   Updated: 2022/12/01 09:41:51 by acampo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(const char *str);

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	ltl_len;
	size_t	matchs;

	ltl_len = ft_strlen(little);
	if (ltl_len == 0)
		return ((char *)big);
	while (len - ltl_len > 0)
	{
		matchs = 0;
		while (big[matchs] == little[matchs])
		{
			matchs++;
			if (matchs == ltl_len)
				return ((char *)big);
		}
		big++;
		len--;
	}
	return (NULL);
}

int	ft_strlen(const char *str)
{
	size_t index;

	index = 0;
	while (str[index] != '\0')
		index++;
	return (index);
}
