/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liqian <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 19:24:29 by liqian            #+#    #+#             */
/*   Updated: 2023/02/09 15:06:57 by liqian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power == 0)
	{
		return (1);
	}
	if (power == 1)
	{
		return (nb);
	}
	if (power < 0)
	{
		return (0);
	}
	if (power > 1)
	{
		res = nb * ft_recursive_power(nb, power - 1);
	}
	return (res);
}
/*int main(void)
{
	int a = 4;
	int b = 4;
	printf("%d",ft_recursive_power(a, b));
}*/
