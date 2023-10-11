/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 14:43:23 by yonieva           #+#    #+#             */
/*   Updated: 2023/09/24 14:43:49 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Affiche un caractere
*/
#include "libft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
