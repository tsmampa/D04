/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsmampa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 14:22:52 by tsmampa           #+#    #+#             */
/*   Updated: 2020/07/15 13:33:08 by tsmampa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
    if (nb > 1)
    {
        return nb * ft_recursive_factorial(nb - 1);
    }
    return nb;
}
