/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsmampa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 15:17:31 by tsmampa           #+#    #+#             */
/*   Updated: 2020/07/13 15:17:37 by tsmampa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
  int count;
  if (power < 0)
    return (0);
  
  if (power > 0)
  {
    count = nb * ft_recursive_power(nb, power - 1);
    return (count);
  }
  else
  {
    return(1);
  }
  
}
