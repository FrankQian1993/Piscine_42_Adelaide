/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liqian <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 16:19:36 by liqian            #+#    #+#             */
/*   Updated: 2023/01/25 14:54:05 by liqian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_putchar(char c)
{
	write(1, & c, 1);
}

void	ft_print(int a)
{
	char	first_digit;
	char	second_digit;

	first_digit = a / 10 + '0';
	second_digit = a % 10 + '0';
	print_putchar(first_digit);
	print_putchar(second_digit);
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	while (num1 <= 98)
	{
		num2 = num1 +1;
		while (num2 <= 99)
		{
			ft_print(num1);
			print_putchar(' ');
			ft_print(num2);
			if (!((num1 == 98) && (num2 == 99)))
			{
				print_putchar(',');
				print_putchar(' ');
			}
			num2++;
		}
		num1++;
	}	
}

/*int main (void)
{
	ft_print_comb2();
	return 0;
}*/
