/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liqian <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:12:27 by liqian            #+#    #+#             */
/*   Updated: 2023/02/09 13:57:08 by liqian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = argc - 1;
	j = 0;
	while (i >= 1)
	{
		while (argv[i][j] != '\0')
		{
			write(1, & argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		j = 0;
		i--;
	}
	return (0);
}