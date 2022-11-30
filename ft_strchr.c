/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acampo-p <acampo-p@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:31:53 by acampo-p          #+#    #+#             */
/*   Updated: 2022/11/29 18:04:36 by acampo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*strchr(const char *s, int c)
{
		while (*s != c && *s != '\0')
				s += 1;
		return ((char *)s);
}

int	main(void)
{
		char	*str;

		str = "asdf1234";
		printf("ptr-init: %p\t", str);
		printf("ptr-out: %p\t", strchr(str, 'f'));
		printf("ptr-out: %s\n", strchr(str, 'f'));
		printf("ptr-init: %p\t", str);
		printf("ptr-out: %p\t", strchr(str, '3'));
		printf("ptr-out: %s\n", strchr(str, '3'));
		printf("ptr-init: %p\t", str);
		printf("ptr-out: %p\t", strchr(str, '9'));
		printf("ptr-out: %s\n", strchr(str, '9'));
}
