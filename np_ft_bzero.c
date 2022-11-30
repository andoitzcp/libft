/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   np_ft_bzero.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acampo-p <acampo-p@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:39:11 by acampo-p          #+#    #+#             */
/*   Updated: 2022/11/29 14:17:59 by acampo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_bzero(void *s, size_t n)
{
		unsigned char *p;

		p = s;
		while (n > 0)
		{
				*p = '\0';
				p += 1;
				n -= 1;
		}
}

void	printer(char *str, int n)
{
		while (n-- > 0)
		{
				write (1, str, 1);
				str += 1;
		}
		write (1, "\n", 1);
}

int	main(int argc, char *argv[])
{
		char	*str;
		int		n;

		str = argv[2];
		n = atoi(argv[1]);
		if (argc != 3)
				return (1);
		printer(str, 8);
		ft_bzero(str, n);
		printer(str, 8);
		return (1);
}
