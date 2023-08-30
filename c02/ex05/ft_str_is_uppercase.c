/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liqian <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 13:52:38 by liqian            #+#    #+#             */
/*   Updated: 2023/02/05 14:51:52 by liqian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*int main(void)
{
	char str1[] = "abc";
	char str2[] = "ABD";
	char str3[] = "";
	char str4[] = "123";
	char str5[] = "2Aff";
	printf("%d\n", ft_str_is_uppercase(str1));
	printf("%d\n",ft_str_is_uppercase(str2));
	printf("%d\n",ft_str_is_uppercase(str3));
	printf("%d\n",ft_str_is_uppercase(str4));
	printf ("%d\n",ft_str_is_uppercase(str5));
}*/
