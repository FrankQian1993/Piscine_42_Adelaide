/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liqian <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:33:20 by liqian            #+#    #+#             */
/*   Updated: 2023/02/07 19:23:58 by liqian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	a;
	char	b;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= ' ' && str[i] <= '~')
		{
			write(1, & str[i], 1);
		}
		else
		{
			c = '\\';
			write(1, & c, 1);
			a = "0123456789abcdef"[str[i] / 16];
			b = "0123456789abcdef"[str[i] % 16];
			write(1, & a, 1);
			write(1, & b, 1);
		}
		i++;
	}
}
/*int main(void)
{
	//char *str = "Coucou\ntu vas bien ?";
	//char *str1 = "\0";
	char *str2 = "\2";
	//printf("%s",str);
	//ft_putstr_non_printable(str);
	//ft_putstr_non_printable(str1);
	ft_putstr_non_printable(str2);
}*/
