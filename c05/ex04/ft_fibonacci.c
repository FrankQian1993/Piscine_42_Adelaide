/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liqian <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 19:39:42 by liqian            #+#    #+#             */
/*   Updated: 2023/02/09 12:35:03 by liqian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	res;

	res = 0;
	if (index < 0)
	{
		return (-1);
	}
	if (index == 0 || index == 1)
	{
		return (index);
	}
	if (index == 2)
	{
		return (1);
	}
	return (res = ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}
/*int main(void)
{
	int	index = 4;
	printf("%d", ft_fibonacci(index));
}*/	
