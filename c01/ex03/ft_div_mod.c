/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liqian <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:25:04 by liqian            #+#    #+#             */
/*   Updated: 2023/02/03 19:03:04 by liqian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	part1;
	int	part2;

	part1 = a / b;
	part2 = a % b;
	*div = part1;
	*mod = part2;
}
/*int main(void)
{
	int a = 3;
	int b = 2;
	int *div1;
	int *mod1;
	int div;
	int mod;
	mod1 = &mod;
	div1 = &div;
	ft_div_mod(a,b,div1,mod1);
	printf("%d\n",div);
	printf("%d\n",mod);
}*/
