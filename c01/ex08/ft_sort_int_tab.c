/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liqian <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:35:27 by liqian            #+#    #+#             */
/*   Updated: 2023/02/03 19:21:41 by liqian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (size > 0)
	{
		while (i < size)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		size--;
	}
}
/*int main(void)
{
	int tab[5] = {3,2,4,5,88};
	int size = 5;
	ft_sort_int_tab(tab,size);
	printf("%d,%d,%d,%d,%d",tab[0],tab[1],tab[2],tab[3],tab[4]);
}*/
