/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 23:44:35 by yonieva           #+#    #+#             */
/*   Updated: 2023/10/02 16:37:22 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"*/

#include <string.h>

void	*ft_memset(void *blocmem, int c, size_t len)
{
	size_t			i;
	unsigned char	*struc;

	struc = (unsigned char *)blocmem;
	i = 0;
	while (i < len)
	{
		struc[i] = (unsigned char)c;
		i++;
	}
	return (blocmem);
}

#include <stdio.h>

int main ()
{

	int	*tableau[9];

	printf("ma fonction : %p\n", ft_memset(tableau, 8, 8));
	printf("la vrai fonction : %p\n", memset(tableau, 8, 8));
}
