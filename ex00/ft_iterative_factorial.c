/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsmampa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 13:48:43 by tsmampa           #+#    #+#             */
/*   Updated: 2020/07/15 13:32:35 by tsmampa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


int		ft_iterative_factorial(int nb)
{
	int		fact;
	int		i;

	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	fact = 1;
	i = 0;
	while (i++ < nb)
		fact *= i;
	return (fact);
}
