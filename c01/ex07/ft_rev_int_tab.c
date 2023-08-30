/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liqian <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:22:23 by liqian            #+#    #+#             */
/*   Updated: 2023/02/03 19:20:21 by liqian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}
/*int main(void)
{
	int tab[5];
	int size = 5;
	tab[0]= 1;
	tab[1] =2;
	tab[2]=3;
	tab[3] =4;
	tab[4] =5;
	ft_rev_int_tab(tab,size);
	printf("%d,%d,%d,%d,%d",tab[0],tab[1],tab[2],tab[3],tab[4]);
}*/
