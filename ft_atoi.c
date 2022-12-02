/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acampo-p <acampo-p@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 09:44:25 by acampo-p          #+#    #+#             */
/*   Updated: 2022/12/01 13:17:05 by acampo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	nbr_gen(const char *nptr, size_t len);
size_t	ft_strlen(const char *str);

int	ft_atoi(const char *nptr)
{
	int sign;
	int	nbr;
	int	len;

	sign = 1;
	while (*nptr == 32 && (*nptr > 8 || *nptr < 14))
		nptr++;
	if (*nptr == '-')
	{
		sign = -1;
		nptr++;
	}
	
	else if (*nptr == '+')
		nptr++;
	len = ft_strlen(nptr);
	nptr += len - 1;
	nbr = nbr_gen(nptr, len);
	return (nbr * sign);
}		

int	nbr_gen(const char *nptr, size_t len)
{
	int nbr;
	int	dec_base;
	int	aux;

	nbr = 0;
	dec_base = 1;
	while (len-- > 0)
	{
		aux = *nptr - '0';
		nbr += aux * dec_base;
		dec_base *= 10;
		nptr--;
	}
	return (nbr);
}

size_t	ft_strlen(const char *str)
{
	size_t index;

	index = 0;
	while (str[index] > '0' && str[index] < '9')
		index++;
	return (index);
}
