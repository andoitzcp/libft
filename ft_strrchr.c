/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acampo-p <acampo-p@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 18:09:27 by acampo-p          #+#    #+#             */
/*   Updated: 2022/11/29 18:56:14 by acampo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(const char *str);

char	*strrchr(const char *s, int c)
{
		int		len;
		char	*ptr;

		len = ft_strlen(s);
		ptr = (char *)&s[len];
		while (len > 0)
		{
				if (s[len] == c)
						return ((char *)&s[len]);
				len -= 1;
		}
		return (ptr);
}

int	ft_strlen(const char *str)
{
		int	index;

		index = 0;
		while (str[index] > 0)
				index += 1;
		return (index);
}

int	main(void)
{
		char	*str;

		str = "asdf1234fiu";
		printf("ptr-init: %p\t", str);
		printf("ptr-out: %p\t", strrchr(str, 'f'));
		printf("ptr-out: %s\n", strrchr(str, 'f'));
		printf("ptr-init: %p\t", str);
		printf("ptr-out: %p\t", strrchr(str, '3'));
		printf("ptr-out: %s\n", strrchr(str, '3'));
		printf("ptr-init: %p\t", str);
		printf("ptr-out: %p\t", strrchr(str, '9'));
		printf("ptr-out: %s\n", strrchr(str, '9'));
}
