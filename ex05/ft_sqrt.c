/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsmampa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 13:56:41 by tsmampa           #+#    #+#             */
/*   Updated: 2020/07/15 13:56:54 by tsmampa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_sqrt(int nb)
{
	int		a;

	a = 0;
	if (nb <= 0)
		return (0);
	while (a * a < nb && a <= 46340)
		a++;
	if (a * a == nb)
		return (a);
	else
		return (0);
}
