/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liqian <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 15:04:49 by liqian            #+#    #+#             */
/*   Updated: 2023/01/24 16:15:50 by liqian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_num(char a, char b, char c)
{
	write(1, & a, 1);
	write(1, & b, 1);
	write(1, & c, 1);
}

void	ft_print_comb(void)
{
	char	digit_1;
	char	digit_2;
	char	digit_3;

	digit_1 = '0';
	while (digit_1 <= '7')
	{
		digit_2 = digit_1 + 1;
		while (digit_2 <= '8')
		{
			digit_3 = digit_2 + 1;
			while (digit_3 <= '9')
			{
				print_num(digit_1, digit_2, digit_3);
				if (digit_1 != '7')
				{
					write(1, ", ", 1);
				}
				digit_3++;
			}
			digit_2++;
		}
		digit_1++;
	}
}

/*int main(void)
{
	ft_print_comb();
	return (0);
}*/
