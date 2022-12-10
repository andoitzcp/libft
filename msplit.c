/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   msplit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acampo-p <acampo-p@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 13:25:59 by acampo-p          #+#    #+#             */
/*   Updated: 2022/12/10 14:38:36 by acampo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(int argc, char *argv[])
{
	char **split;

	if (argc != 2)
		return (1);
	split = ft_split(argv[1], 'a');
	printf("in: %s\n",argv[1]);
	printf("out: %p\n", split[0]);
	printf("out: %p\n", split[1]);
	printf("out: %p\n", split[2]);
}
