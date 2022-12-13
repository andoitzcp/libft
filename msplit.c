/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   msplit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acampo-p <acampo-p@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 13:25:59 by acampo-p          #+#    #+#             */
/*   Updated: 2022/12/13 14:59:56 by acampo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(int argc, char *argv[])
{
	char **split;
	int	i = 0;
	char *str;
	char *str2 = malloc(10000000);

//	if (argc != 2)
//		return (1);
//	split = ft_split(argv[1], ' ');
	 ft_split(str, ' ');
    ft_split(str2, ' ');
/*	while (split)
	{
		ft_split(str, ' ');
		ft_split(str2, ' ');
		printf("flag1:%p\n", split);
		printf("flag2:%p\n", *split);
		printf("str!%d: %s\n", i, *split);
		split++;
		i++;
		printf("flag3:\n");
	}*/
}
