/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:19:16 by yonieva           #+#    #+#             */
/*   Updated: 2023/10/09 01:17:46 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t	srcsize;
	size_t	i;

	if (dest == NULL || src == NULL)
		return (0);
	srcsize = ft_strlen(src);
	i = 0;
	if (destsize != 0)
	{
		while (src[i] != '\0' && i < (destsize - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (srcsize);
}
/*
int main ()
{
	char	str1[10];
	char	str2[10];

	str1 = "Salut";
	printf("Ma fonction avec src < dest : %ld\n", ft_strlcpy(str2, str1, 5));
	printf("La fonction strlcpy avec src < dest : %ld\n", strlcpy(str2, str1, 5));
}
*/