/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liqian <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 14:39:28 by liqian            #+#    #+#             */
/*   Updated: 2023/02/07 18:11:52 by liqian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_lower(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z'))
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	ft_lower(str);
	while (str[i] != '\0')
	{
		if (! ((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
			i++;
		else
		{
			if (str[i - 1] >= '0' && str[i - 1] <= '9')
				i++;
			else if (! ((str[i - 1] >= 'a' && str[i - 1] <= 'z')
					|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')))
			{
				str[i] = str[i] - 32;
				i++;
			}
			else
				i++;
		}
	}
	return (str);
}
/*int main(void)
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char str1[] = " salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char str2[] = "./Salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n",ft_strcapitalize(str2));
	printf("%s\n",ft_strcapitalize(str));
	printf("%s",ft_strcapitalize(str1));
}*/
