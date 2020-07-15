/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsmampa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 15:13:13 by tsmampa           #+#    #+#             */
/*   Updated: 2020/07/13 15:13:19 by tsmampa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_iterative_power(int nb, int power)
{
	int R;

	R = 1;
	if (power < 0)
		return (0);
	while (power--)
		R *= nb;
	return (R);
}
