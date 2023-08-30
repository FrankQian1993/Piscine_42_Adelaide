/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liqian <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 20:12:32 by liqian            #+#    #+#             */
/*   Updated: 2023/02/01 20:12:40 by liqian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_putchar(char a)
{
	write(1, & a, 1);
}

void	print_check(int a)
{
	if (a < 10)
	{
		print_putchar(a + '0');
	}
	else
	{
		print_check(a / 10);
		print_check(a % 10);
	}
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
	{
		print_putchar('0');
	}
	else if (nb > 0 && nb <= 2147483647)
	{
		print_check(nb);
	}
	else if (nb < 0 && nb > -2147483648)
	{
		print_putchar('-');
		print_check(-nb);
	}
	else
	{
		print_putchar('-');
		print_putchar('2');
		print_check(147483648);
	}
}

/*int main(void)
{
	int	nb;
	nb = -42;
	ft_putnbr(nb);
}*/
