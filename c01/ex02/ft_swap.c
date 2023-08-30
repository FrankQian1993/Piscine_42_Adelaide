/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liqian <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:18:20 by liqian            #+#    #+#             */
/*   Updated: 2023/02/03 19:01:50 by liqian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*int main(void)
{
	int num1 = 2;
	int num2 = 3;
	int *a;
	int *b;
	a = &num1;
	b = &num2;
	ft_swap(a,b);
	printf("%d\n",num1);
	printf("%d\n",num2);
}*/
