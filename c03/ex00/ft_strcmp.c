/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liqian <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:57:14 by liqian            #+#    #+#             */
/*   Updated: 2023/02/08 17:49:39 by liqian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && s1[i] == s2 [i])
	{
		i++;
	}
	if (s1[i] - s2[i] == 0)
	{
		return (0);
	}
	else
	{
		return (s1[i] - s2[i]);
	}
}
/*int main(void)
{
	char s1[] = " ";
	char s2[] = "a";
	printf("%d\n",ft_strcmp(s1,s2));
	printf("%d", strcmp(s1,s2));
}*/
