/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liqian <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:37:42 by liqian            #+#    #+#             */
/*   Updated: 2023/01/26 13:59:11 by liqian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>,*nbr = 42 changed what is in the address
void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/*int main(void)
{
	//declare a pointer and number which pointer point to
	int *nbr;
	int number = 123;
	//assign the address of number to pointer nbr. 
	nbr = &number;
	ft_ft(nbr);
	//print to check whether the number in number changed or not.
	printf("%d",number);
}*/
