/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liqian <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 19:00:32 by liqian            #+#    #+#             */
/*   Updated: 2023/02/08 19:10:20 by liqian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dest;
	unsigned int	len_src;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	len_dest = len(dest);
	len_src = len(src);
	if (size <= len_dest || size == 0)
	{
		return (size + len_dest);
	}
	size = size - len_dest;
	while (src[i] != '\0' && i < size -1)
	{
		dest[len_dest + j] = src[i];
		i++;
		j++;
	}
	dest[len_dest + j] = '\0';
	return (len_src + len_dest);
}
/*int main()
{
	char src[] = " like tea";
	char dest[] = "i";
	printf("%d\n",ft_strlcat(dest,src,10));
	printf("%s",dest);
}*/
