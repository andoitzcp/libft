/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   msplit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acampo-p <acampo-p@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 13:25:59 by acampo-p          #+#    #+#             */
/*   Updated: 2022/12/12 11:47:52 by acampo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(int argc, char *argv[])
{
	char **split;
	int	i = 0;

	if (argc != 2)
		return (1);
	split = ft_split(argv[1], ' ');
	while (split)
	{
		printf("flag1:%p\n", split);
		printf("flag2:%p\n", *split);
		printf("str!%d: %s\n", i, *split);
		split++;
		i++;
		printf("flag3:\n");
	}
}
