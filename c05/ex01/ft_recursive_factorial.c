/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liqian <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 17:03:44 by liqian            #+#    #+#             */
/*   Updated: 2023/02/09 13:32:05 by liqian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 1 || nb == 0)
	{
		return (1);
	}
	res = nb * ft_recursive_factorial(nb - 1);
	return (res);
}
/*int	main(void)
{
	int nb = 2;
	printf("%d",ft_recursive_factorial(nb));
}*/
