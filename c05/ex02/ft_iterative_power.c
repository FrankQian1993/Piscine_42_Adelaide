/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liqian <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 17:39:08 by liqian            #+#    #+#             */
/*   Updated: 2023/02/09 15:00:25 by liqian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;
	int	i;

	i = 1;
	res = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	while (i < power)
	{
		res = res * nb;
		i++;
	}	
	return (res);
}
/*int main (void)
{
	int a = 3;
	int b = 4;
	printf("%d",ft_iterative_power(a, b));
}*/
