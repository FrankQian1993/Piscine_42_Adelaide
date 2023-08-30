/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liqian <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 20:48:53 by liqian            #+#    #+#             */
/*   Updated: 2023/02/09 13:24:53 by liqian           ###   ########.fr       */
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
	if (nb <= 0)
		return (0);
	while (low <= high)
	{
		mid = (low + high) / 2;
		if ((long) mid * mid <= nb)
		{
			x = mid;
			low = mid + 1;
		}
		else
			high = mid - 1;
	}
	if (x * x == nb)
		return (x);
	else
		return (0);
}		
/*int main()
{
	int nb = 256;
	printf("%d",ft_sqrt(nb));
}*/
