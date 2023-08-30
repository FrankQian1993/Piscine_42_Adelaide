/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liqian <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 23:05:33 by liqian            #+#    #+#             */
/*   Updated: 2023/02/09 15:43:11 by liqian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	x;
	int	low;
	int	high;
	int	mid;

	x = nb;
	low = 0;
	high = nb;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if ((long)mid * mid <= nb)
		{
			x = mid;
			low = mid + 1;
		}
		else
			high = mid -1;
	}
	return (x);
}

int	check_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
	{
		return (0);
	}
	if (nb == 2)
	{
		return (1);
	}
	while (i <= ft_sqrt(nb))
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (check_prime(nb) != 1)
	{
		nb++;
	}
	return (nb);
}
/*int main(void)
{
	int	nb = 100;
	printf("%d", ft_find_next_prime(nb));
}*/
