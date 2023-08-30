/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liqian <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 16:29:37 by liqian            #+#    #+#             */
/*   Updated: 2023/02/07 17:52:25 by liqian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
unsigned int	put_size(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len_src;

	i = 0;
	len_src = put_size(src);
	if (size > 0)
	{
		while (src[i] != '\0' && i < size -1)
		{
			dest[i] = src [i];
			i++;
		}
		dest[i] = '\0';
	}
	return (len_src);
}
/*int main(void)
{
	char src[] = "Hello";
	char dest[] = " ";
	printf("%d",ft_strlcpy(dest, src, 10));
}*/
