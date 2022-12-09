/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mitoa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acampo-p <acampo-p@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 21:22:13 by acampo-p          #+#    #+#             */
/*   Updated: 2022/12/08 21:25:32 by acampo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(int argc, char *argv[])
{
	if (argc != 2)
		return (1);
	printf("out: %s\n", ft_itoa(atoi(argv[1])));
}
