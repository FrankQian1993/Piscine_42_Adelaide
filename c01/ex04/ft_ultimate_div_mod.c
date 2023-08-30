/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liqian <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:51:44 by liqian            #+#    #+#             */
/*   Updated: 2023/02/03 19:05:39 by liqian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_div;
	int	temp_mod;

	temp_div = *a / *b;
	temp_mod = *a % *b;
	*a = temp_div;
	*b = temp_mod;
}
/*int main(void)
{
	int num1 = 4;
	int num2 = 2;
	int *a;
	int *b;
	a = &num1;
	b = &num2;
	ft_ultimate_div_mod(a,b);
	printf("%d\n",num1);
	printf("%d\n",num2);
}*/
