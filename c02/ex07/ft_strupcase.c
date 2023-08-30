/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liqian <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 14:25:04 by liqian            #+#    #+#             */
/*   Updated: 2023/02/07 17:57:18 by liqian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strupcase(char *str)
{
	int	i;
	int	temp;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			temp = str[i] - 32;
			str[i] = temp;
		}
		i++;
	}
	return (str);
}
/*int main(void)
{
	char str[] = "AAAA dfff";
	printf("%s",ft_strupcase(str));
}*/
