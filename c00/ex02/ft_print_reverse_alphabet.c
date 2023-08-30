/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liqian <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 12:40:35 by liqian            #+#    #+#             */
/*   Updated: 2023/01/24 14:40:47 by liqian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	a;

	a = 'z';
	while (a >= 'a')
	{
		write(1, & a, 1);
		a--;
	}
}

/*int main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}*/
