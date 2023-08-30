/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liqian <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 12:43:48 by liqian            #+#    #+#             */
/*   Updated: 2023/02/05 14:41:25 by liqian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*int main(void)
{
	char str1[] = "eeee";
	char str2[] = "";
	char str3[] = "fffff233ggg";
	printf("%d\n",ft_str_is_alpha(str1));
	printf("%d\n",ft_str_is_alpha(str2));
	printf("%d\n",ft_str_is_alpha(str3));
}*/
